#include<stdio.h>
#include<string.h>

int compute_scrabble_value(const char *word);
int main(void){
    int sum;
    char ch[50],*p=&ch[0];
    printf("Enter a waord: ");
    scanf("%s",p);
    sum=compute_scrabble_value(p);
    printf("Scrabble value: %d",sum);
}

int compute_scrabble_value(const char *word){
    int i=0,sum=0;
    char j=0;
    //establish a table to reference from.
    char One[10]={'A','E','I','L','N','O','R','S','T','U'},Two[2]={'D','G'},
            Three[4]={'B','C','M','P'},Four[5]={'F','H','V','W','Y'},Five='K',
            Eight[2]={'J','X'},Ten[2]={'Q','Z'};
    //If equals, sum will be added.
    while(*(word+j)!='\0'){
        for(i=0;i<10;i++){
            if(*(word+j)==One[i] || *(word+j)==(One[i]+32))sum+=1;
        }
        for(i=0;i<2;i++){
            if(*(word+j)==Two[i] || *(word+j)==(Two[i]+32))sum+=2;
        }
        for(i=0;i<4;i++){
            if(*(word+j)==Three[i] || *(word+j)==(Three[i]+32))sum+=3;
        }
        for(i=0;i<5;i++){
            if(*(word+j)==Four[i] || *(word+j)==(Four[i]+32))sum+=4;
        }
        if(*(word+j)==Five || *(word+j)==(Five+32))sum+=5;
        for(i=0;i<2;i++){
            if(*(word+j)==Eight[i] || *(word+j)==(Eight[i]+32))sum+=8;
        }
        for(i=0;i<2;i++){
            if(*(word+j)==Ten[i] || *(word+j)==(Ten[i]+32))sum+=10;
        }
        j+=1;
    }
    return sum;
}
