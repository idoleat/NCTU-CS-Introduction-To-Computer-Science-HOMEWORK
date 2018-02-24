import re
import sys

#This is the function determining balls are colliding or not.
def Collide(x1,y1,r1,x2,y2,r2):
    square_dis=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)
    if square_dis>((r1+r2)*(r1+r2)):
        print ("Two balls are not colliding!")
    else:
        print ("Two balls are colliding!")
    return

while 1 :
    ball_1= input("Enter the first ball (x,y,range), enter “exit” to quit the program: ")
    test1 = re.fullmatch("[eE][xX][iI][tT]",ball_1)
    test2 = re.fullmatch("\([0-9]+,[0-9]+,[0-9]+\)",ball_1)
    if test1 != None:#if ball_1 matches the pattern, test1 will not be None, so the program will exit.
      sys.exit()
    if test2 == None:#if ball_1 does not match the pattern, test will be None, so it will pop up error message and ask you to reinput again.
      print ("Bad input!")
    else:
      break;
s=re.split("\W+", ball_1)#This line split ball_1 into five parts : "","x","y","r",""
B1_x=float(s[1])
B1_y=float(s[2])
B1_r=float(s[3])

while 1 :
    ball_2= input("Enter the second ball (x,y,range), enter “exit” to quit the program: ")
    test1 = re.fullmatch("[eE][xX][iI][tT]",ball_2)
    test2 = re.fullmatch("\([0-9]+,[0-9]+,[0-9]+\)",ball_2)
    if test1 != None:
      sys.exit()
    if test2 == None:
      print ("Bad input!")
    else:
      break;
s=re.split("\W+", ball_2)
B2_x=float(s[1])
B2_y=float(s[2])
B2_r=float(s[3])

Collide(B1_x,B1_y,B1_r,B2_x,B2_y,B2_r)
#I don't want to delay my homework and lab, but I was too busy.....