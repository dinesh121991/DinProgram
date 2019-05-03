# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.shortcuts import render, get_object_or_404
from . models import Page
from django.http import HttpResponse, HttpResponseRedirect
from django.core.mail import send_mail, get_connection
from .forms import ContactForm

def index(request, pageName):
    print("Inside rendering")
    page = '/' + pageName
    print(page)
    pg = get_object_or_404(Page, permalink=page)
    context = {
        'title' : pg.title,
        'content' : pg.body_text,
        'last_updated' : pg.update_date,
        'page_list' : Page.objects.all(),
    }
    #assert False
    return render(request, "pages/pages.html", context)

# Create your views here.


def contact(request):
    submitted = False
    print(request.method)
    if (request.method == 'POST'):
#    if (request.method == 'POST') and ('exist' in request.POST):
        form = ContactForm(request.POST)
	print(request.POST)
        print(form)
        print(type(form))
        if (form.is_valid()):
            cd = form.cleaned_data
            con = get_connection('django.core.mail.backends.console.EmailBackend')
            send_mail(cd['subject'], cd['content'], cd.get('email', 'dinesh121991@gmail.com'), ['dinesh121991@gmail.com'], connection=con)
            return HttpResponseRedirect('/contact?submitted=True')
    else:
        form = ContactForm()
        print(form)
        print(type(form))
        print(request.GET)
        if 'submitted' in request.GET:
            submitted = True
    return render(request, 'pages/contact.html', {'form': form, 'submitted': submitted, 'page_list': Page.objects.all()})

