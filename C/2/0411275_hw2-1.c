#include<stdio.h>
int main(void){
    //input
    int Inp;
    printf("Enter an integer number :");
    scanf("%d", &Inp);

    if(Inp%2){//if the number is add, the program will run this section.
        printf("The number is odd.");
    }
    else{//if it's not a odd number, the program will run this section.
        printf("The number is even.");
    }
}
