# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models

class Page(models.Model):
    title       = models.CharField(max_length=60)
    permalink   = models.CharField(max_length=120, unique=True)
    update_date = models.DateTimeField('Last Updated')
    body_text   = models.TextField('PageContent', blank=True)
    def __str__(self):
        return self.title

# Create your models here.
