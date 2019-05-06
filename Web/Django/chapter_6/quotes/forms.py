
from django import forms
from django.forms import ModelForm
from .models import QuotesModel

class QuoteForm(ModelForm):
    required_css_class = 'required'
    class Meta:
        model = QuotesModel
        fields = ['name', 'position', 'company', 'address', 'phone', 'email', 'web', 'description', 'sitestatus', 'priority', 'jobfile']

