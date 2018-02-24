#include<stdio.h>

int main(void)
{
    int b;
    char a;
    char alph[27];
    for(int i=0;i<27; i++)
    {
        alph[i]=0;
    }

    printf("Enter the first word: ");
    while(1)
    {
        a=getche();
        if(a==13)break;
        else if(a>=65 && a<=90)
        {
            alph[a-65]+=1;
        }
        else if(a>=97 && a<=122)
        {
            alph[a-97]+=1;
        }
        else
        {
            printf("\nPlease type English characters!\nClose the program and type again.\n");
        }
    }

    printf("\nEnter the second word: ");
    while(1)
    {
        a=getche();
        if(a==13)break;
        else if(a>=65 && a<=90)
        {
            alph[a-65]-=1;
        }
        else if(a>=97 && a<=122)
        {
            alph[a-97]-=1;
        }
        else
        {
            printf("\nPlease type English characters!\nClose the program and type again.\n");
        }
    }

    for(int i=0;i<27; i++)
    {
        if(alph[i]!=0){
            printf("\nThe words are not anagrams.");
            break;
        }
        if(i==26){
            printf("\nThe words are anagrams.");
        }
    }


}
