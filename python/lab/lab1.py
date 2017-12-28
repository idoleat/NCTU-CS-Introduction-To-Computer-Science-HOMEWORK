import urllib.request, urllib.parse, urllib.error
import re

f= urllib.request.urlopen("https://docs.python.org/3/library/index.html")
for line in f:
	