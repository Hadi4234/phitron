// You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    for(int i=n-1; i>=0; i--){
        if(i==x){
            a[i]=v;
        }
        printf("%d ", a[i]);
    }
}