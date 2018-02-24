import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
html_doc=urllib.request.urlopen("http://www.shopping.com/camera/products?sb=1&CLT=SAS&KW=camera")
soup = BeautifulSoup(html_doc)

for link in soup.find_all('a'):
    print(link.get('src'))