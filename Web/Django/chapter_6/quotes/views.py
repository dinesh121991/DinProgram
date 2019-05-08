# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.shortcuts import render
from django.http import HttpResponseRedirect
from .models import QuotesModel
from .forms import QuoteForm
from pages.models import Page

from django.views.generic import ListView, DetailView
class QuoteList(ListView):
    model = QuotesModel
    context_object_name = "all_quotes"
    def get_context_data(self, **kwargs):
        context = super(QuoteList, self).get_context_data(**kwargs)
        context['page_list'] = Page.objects.all()
        return context
class QuoteView(DetailView):
    model = QuotesModel
    context_object_name = "quote"
    def get_context_data(self, **kwargs):
        context = super(QuoteView, self).get_context_data(**kwargs)
        context['page_list'] = Page.objects.all()
        return context

def quote_req(request):
    submitted = False
    if request.method == 'POST':
        form = QuoteForm(request.POST, request.FILES)
        if form.is_valid():
            form.save()
        return HttpResponseRedirect('/quotes?submitted=True')
    else:
        form = QuoteForm()
        if 'submitted' in request.GET:
            submitted = True
    return render(request, 'quotes/quotes.html', {'form': form, 'page_list': Page.objects.all(), 'submitted': submitted})

