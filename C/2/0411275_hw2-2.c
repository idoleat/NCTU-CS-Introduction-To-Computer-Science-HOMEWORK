#include<stdio.h>
int main()
{
    int mm, dd, yy, tempt,num=365*99+12*30+31,m,d,y;
    char a,b,QQ[2];//a and b are useless.
    while(1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d%c%d%c%d",&mm,&a,&dd,&b,&yy);
        tempt=yy*365+30*mm+dd;
        if(yy==0 && mm==0 && dd==0){
            break;
            //printf("Shit!\n");  This line should not be printed.
        }
        if(tempt<num){
            num=tempt;
            m=mm;
            d=dd;
            y=yy;
        }
    }
    //In this section, "Year" is forced to be displayed as two-digit number.
    if(y<10){
        QQ[0]='0';
        QQ[1]=y+48;
    }
    if(y>=10){
        QQ[0]=(y-y%10)/10+48;
        QQ[1]=y%10+48;
    }
    //
    printf("%d/%d/%c%c is the earliest date",m,d,QQ[0],QQ[1]);
}
