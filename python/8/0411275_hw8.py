filename=input("please input the file name: ")#read file name
myfile=open(filename)
total=0
countt=0
tempt=0
for line in myfile:
    tempt=line.find("X-DSPAM-Confidence:")#tempt is the position of X-DSPAM-Confidence
    if tempt!=-1:
      total+=float(line[(tempt+20):(tempt+26)])
      #20 means the start positon the the float number, beacuse the string above is 20 characters long.
      #26 means the end position of the float, because the float is 6 charactsers long.
      countt+=1
print("Average spam confidence: ",total/countt)
myfile.close()