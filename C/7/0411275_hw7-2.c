#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[]){
    FILE *tl;
    FILE *tll;
    int i=0,j=-1;
    char ch[15],cha;

    tll=fopen("answer.txt","w");
    tl=fopen(argv[1],"r");
    while(fscanf(tl,"%c", &cha)!=EOF){
        if(j<=9){
            if(cha>=48 && cha<=57){
                j+=1;
                if(j==0)fprintf(tll,"(");
                if(j==3)fprintf(tll,")");
                if(j==6)fprintf(tll,"-");
                fprintf(tll,"%c",cha);
            }
            if(j==9){
                fprintf(tll,"\n");
            j=-1;
            }
        }
    }

    fclose(tl);
    fclose(tll);
}
