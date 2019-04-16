# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.shortcuts import render, get_object_or_404
from . models import Page
#from django.http import HttpResponse

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
