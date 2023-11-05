// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(n%2!=0){
        for(int i=n; i>1; i--){
            if(i%2==0 ){              
                printf("%d ", a[i-1]);           
            }            
        }
    }else{
        for(int i=n-1; i>=0; i--){
            if(i%2!=0){
                printf("%d ", a[i]);
            }
        }

    }
}