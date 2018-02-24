#include<stdio.h>
#include<string.h>

int main(){
    FILE *tl;
    FILE *tll;
    int i=0,j=-1;
    char ch[50],cha;
    int shift=3;

    printf("Enter name of a file to be encrypted: ");
    scanf("%s", &ch);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    tl=fopen(ch,"r");
    strcat(ch,".enc");
    tll=fopen(ch,"w");

    while(fscanf(tl,"%c", &cha)!=EOF){
        if(cha>=65 && cha<=90){
            cha+=shift;
            if(cha>90)cha=cha-26;
            fprintf(tll,"%c",cha);
        }
        else if(cha>=97 && cha<=122){
            cha+=shift;
            if(cha>122)cha=cha-26;
            fprintf(tll,"%c",cha);
        }
        else{
            fprintf(tll,"%c",cha);
        }
    }

    fclose(tl);
    fclose(tll);
}
