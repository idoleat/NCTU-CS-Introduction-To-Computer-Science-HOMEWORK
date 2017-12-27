import re
filename=input("please input the file name: ")#read file name
myfile=open(filename)
dd=dict()
ss=list()

for line in myfile:
    if line.find("From")!=-1:
        hour = line[-14:-12] 
        test = re.search("\d\d",hour)
        if test != None:
            dd[hour] = dd.get(hour,0)+1
            
for k,v in dd.items():
   ss.append(1000*int(v)+int(k))    

ss.sort()

for t in range(0,(len(ss)-1)):
    tempt=str(ss[len(ss)-1-t]%1000)
    print(tempt.zfill(2)," ",int(ss[len(ss)-t-1]/1000))
print (str(ss[0]%1000).zfill(2)," ",int(ss[0]/1000))