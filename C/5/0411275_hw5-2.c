#include<stdio.h>

int main(void)
{
    char Inp[50],ch,*q=&Inp[0];
    printf("Enter a message: ");
    //I use the pointer point at the first element.
    //The pointer will increase one when read in one character from buffer.
    //The loop will end when pointer point out of the range or encounter "return".
    while (q < &Inp[50])
    {
        if ((ch = getchar()) == '\n')
            break;
        else
        {
            *q=ch;
            q++;
        }
    }
    if(q==&Inp[50])
    {
        printf("overload!");
        return 0;
    }

    printf("Reversal is: ");
    //Reverse back to the first element and print out.
    while(q>=&Inp[0]){
        printf("%c", *q);
        q--;
    }

}
