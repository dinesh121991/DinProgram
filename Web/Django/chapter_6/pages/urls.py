from django.conf.urls import url
from django.views.generic import TemplateView
from . import views

#urlpattern = [ # django.core.exceptions.ImproperlyConfigured: The included URLconf 
urlpatterns = [
#        url(r'^$', views.index, name=index), # index is not defined
	url(r'^testpage$', TemplateView.as_view(template_name="pages/pages.html"), name = "testpage"),
	url(r'^contact$', views.contact, name = "contact"),
        url(r'([^/]*)', views.index, name='index'),
    ]
