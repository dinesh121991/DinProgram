from django.conf.urls import url
from . import views

#urlpattern = [ # django.core.exceptions.ImproperlyConfigured: The included URLconf 
urlpatterns = [
#        url(r'^$', views.index, name=index), # index is not defined
        url(r'^$', views.index, name='index'),
    ]
