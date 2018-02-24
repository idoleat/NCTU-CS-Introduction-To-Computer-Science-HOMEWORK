import socket
import re
mysoc = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
countt=0
IsPrint=True

while True:#This section will keep looping when th input is improper.
    try:
        url=input("please input the web page : ")
        test=re.search("http:\/\/.*\/",url)				#checking url format.
        if test==None:
            print ("bad input!")
        else:
            host=re.split("\/",url)
            mysoc.connect((host[2], 80))
            break
    except:												#checking connection.
        print("Sorry I cannot connect the web page!")
        continue


hello="GET "+url+" HTTP/1.0\r\n\r\n"
mysoc.send(hello.encode())

while True:
    data = mysoc.recv(512)#The official document said that buffer size depends on the hardware spec.
						  #But I am not familiar with the hardware spec, I use the same as the teacher.
    if (len(data) < 1):
        print ("\nTotal character number is : ",countt)
        break
    
    try:
        for datta in data.decode():
            if IsPrint:
                print (datta,end='')
            countt+=1#countt will +1 when a character is received.
            if countt==3000:
                IsPrint=False#it will stop displaying characters, but it will keep counting.
    except UnicodeDecodeError:
        pass

mysoc.close()