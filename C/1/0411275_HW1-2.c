#include<stdio.h>
int main(void){
    int Inp, ans[4],i;
    //input
    printf("Enter a number between 0 and 32767 : ");
    scanf("%d", &Inp);;
    //restrict the input number
    if(Inp>32767){
        printf("I've told you to enter number between 0 32767! try again.");
        return 0;
    }
    //calculate
    for(i=0;i<4;i++){//For n-digit number, the loop on;y have to run n-1 times.
        ans[i]=Inp%8;
        Inp/=8;
    }
    //output
    printf("In Octal, your number is :%d",Inp);
    for(i=3;i>=0;i--){
        printf("%d",ans[i]);
    }
}
