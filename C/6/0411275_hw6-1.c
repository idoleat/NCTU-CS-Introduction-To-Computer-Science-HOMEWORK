#include<stdio.h>
//I handed in hw6-1 late, but hw6-2 did not.
//However E3 platform shoes that I handed late for the whole homework.
//Could teacher/TA please put discount only on the score of 6-1? I will appreciate that.
int main(void){
    char ch;
    int tempt=0,sum=0;
    scanf("sum ");
    while((ch)!='\n'){
        ch=getchar();
        //read the numbers after "sum"
        //only umbers can be read.
        //If I use if(ch!=' ') it will read a weird number from ch.
        //So I must restrict to to number only. Even the problem promise it will be number only already.
        if(ch>=48 && ch<=57){
            tempt=tempt*10+(ch-48);//The method dealing with multiple-digits numbers.
        }
        //sum up
        if(ch==' '){
            sum+=tempt;
            tempt=0;
        }
    }
    //Because the last character is not \0 so I have to sum up manually once.
    sum+=tempt;
    printf("%d",sum);
}
