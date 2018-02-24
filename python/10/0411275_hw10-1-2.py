import urllib.request, urllib.parse, urllib.error
import re
countt=0
IsPrint=True


while True:#This section will keep looping when th input is improper.
	try:
		url=input("please input the web page : ")
		test=re.search("http:\/\/.*\/",url)				#checking url format.
		if test==None:
			print ("bad input!")
		else:
			f= urllib.request.urlopen(url) 
			break
	except:												#checking connection.
		print("Sorry I cannot connect the web page!")
		continue


for line in f:
    for cha in line.decode():
        if IsPrint:
            print (cha,end='')
        countt+=1#countt will +1 when a character is received.
        if countt==3000:
            IsPrint=False#it will stop displaying characters, but it will keep counting.

print ("\nTotal character number is : ",countt)
f.close()
    
