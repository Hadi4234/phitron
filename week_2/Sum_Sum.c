//  You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.
#include <stdio.h>
int main(){
    int N,V;
    scanf("%d", &N);
    int pos=0, neg=0;
    for(int i=1; i<=N; i++){
        scanf("%d", &V);
        if(V>0){
            pos+=V;
        }else{
            neg+=V;
        }
    }
    printf("%d %d", pos, neg);
}