#include<stdio.h>
//C doesn't have any built-in boolean types. So I googled for the following solution.
typedef int bool;
#define true 1
#define false 0
int main()
{
    int Inp;
    bool Rip=true;
    //a boolean variable detecting the input is a two-digit number or not.
    //Rip is "Re-Input" in brief. If it is true,you have to Re-Input again.
    while(Rip)
    {
        printf("Enter a two-digit number: ");
        scanf("%d", &Inp);
        if(Inp<100 && Inp>9)
        {
            printf("The reversal is: %d%d",Inp%10,Inp/10);
            Rip=false;
        }
        else
        {
            printf("You must enter a two-digit number! Try again.\n");
            Rip=true;
        }
    }

}
