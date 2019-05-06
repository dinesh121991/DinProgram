# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models
from django.contrib.auth.models import User

STATUS_CHOICES = (
        ('NEW', 'New Site'),
        ('EX', 'Existing Site'),
        )

PRIORITY_CHOICES = (
        ('U', 'Urgent - 1 day'),
        ('N', 'Normal - 1 weeks'),
        ('L', 'Low - Still Researching')
        )

class QuotesModel(models.Model):
    name        = models.CharField(max_length=70)
    position    = models.CharField(max_length=100, blank=True)
    company     = models.CharField(max_length=100, blank=True)
    phone       = models.CharField(max_length=12)
    email       = models.EmailField(max_length=50)
    address     = models.CharField(max_length=100)
    web         = models.URLField(blank=True)
    description = models.TextField()
    sitestatus  = models.CharField(max_length=20, choices=STATUS_CHOICES)
    priority    = models.CharField(max_length=40, choices=PRIORITY_CHOICES)
    jobfile     = models.FileField(upload_to="uploads/", blank=True)
    submitted   = models.DateField(auto_now_add=True)
    quotedate  = models.DateField(blank=True, null=True)
    quoteprice  = models.DecimalField(decimal_places=2, max_digits=7, blank=True, default=0)
    username    = models.ForeignKey(User, blank=True, null=True)

    def __str__(self):
        return str(self.id)

# Create your models here.
