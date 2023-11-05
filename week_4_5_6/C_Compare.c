// Given two strings X and Y . Print the smallest lexicographical one.
#include <stdio.h>
#include <string.h>
int main(){
    int x[100],y[100];
    scanf("%s %s",&x,&y);
   
    int n = strcmp(x,y);
    if(n<0){
        printf("%s",x);
    }else if(n>0){
        printf("%s",y);
    }else{
        printf("%s",x);
    }
    return 0;

}