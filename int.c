#include<stdio.h>
int main(void){
    int p[100];
    char indate[100];
    int ascii_date[100];
    int point=0;
    for(int i=0;i<100;i++){
        indate[i]='0';
        p[i]=0;
    }
    for(int i=0;i<100;i++){
        scanf("%c",&indate[i]);
        ascii_date[i]=(int)indate[i];
    }
    for(int i=0;i<100;i++){
        if(ascii_date[i]==43){
            p[point]++;
        }else if(ascii_date[i]==46){
            printf("%c",(char)p[point]);
        }else if(ascii_date[i]==62){
            point++;
        }
    }
    //printf("\n%d",p[point]);
    //for(int i=0;i<100;i++)printf("%d",ascii_date[i]);
    //printf("\n%d",point);
}