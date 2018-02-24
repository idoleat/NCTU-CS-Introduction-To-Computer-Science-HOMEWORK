#include<stdio.h>
#include<string.h>

int main(void)
{
    /*
     -    | --  --  | |  --  -- --   -   -
    | |   |   |   | | | |   |     | | | | |
    | |   |  -  --   -   -   -    |  -   -
    | |   | |     |   |   | | |   | | |   |
     -    |  -- --    | --   -    |  -  --
    */

    char Inp[10];//I would like to make a dynamic size of array to read in unlimited characters, by using the way I found below.
    //https://stackoverflow.com/questions/16870485/how-can-i-read-an-input-string-of-unknown-length
    //But the description of the problem said we only need 10 characters. So I limited it to 10.
    char num[50][4]=  {" - ","  |","-- ","-- ","| |"," --"," --","-- "," - "," - "
                      ,"| |","  |","  |","  |","| |","|  ","|  ","  |","| |","| |"
                      ,"| |","  |"," - ","--|"," -|"," - ","|- ","  |","|-|"," -|"
                      ,"| |","  |","|  ","  |","  |","  |","| |","  |","| |","  |"
                      ," - ","  |"," --","-- ","  |","-- "," - ","  |"," - ","-- "
                     };
    //5*10 elements
    scanf("%s",Inp);
    //printf("%d",strlen(Inp));   //This line is just for debugging.

    //It's like a printer,print numbers from top to bottom;
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<strlen(Inp); i++)
        {
            //I am lazy to store the numbers I've read in. So let the program see if it's a number every time.
            //Also, it's not a big efficiency issue.
            if(Inp[i]>=48 && Inp[i]<=57)
            {
                printf("%s ",num[j*10+Inp[i]-48]);
            }
        }
        printf("\n");
    }

}


