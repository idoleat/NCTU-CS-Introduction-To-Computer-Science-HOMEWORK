filename=input("please input the file name: ")#read file name
myfile=open(filename)
countt=0

for line in myfile:
    tempt=line.find("Subject: [sakai] svn commit: ")#tempt is the position of X-DSPAM-Confidence
    if tempt!=-1:
      countt+=1
      resault = line[(tempt+29):(tempt+35)]+' '+line[(tempt+38):line.find("/")]
      if resault.find("in ") != -1:
        print (line[(tempt+29):(tempt+35)]+' '+line[(tempt+41):line.find("/")])
      else:
        print (resault)

print ("There were ",countt," subject lines")
myfile.close()