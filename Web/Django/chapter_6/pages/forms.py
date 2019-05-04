from django import forms

class ContactForm(forms.Form):
    subject = forms.CharField(max_length = 100)
    email   = forms.EmailField(required = False, label = "Your e-mail address")
    content = forms.CharField(max_length=100)
