#include <stdio.h>
int main(){
    // You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.
    int n;
    scanf("%d",&n);
    if (n>=0)        
    {
     for (int i = 1; i <= n; i++)
     {
         printf("%d ", i);
     }  
    }else{
        for(int i = n; i <= 0; i++)
        {
            printf("%d ", i);
        }
        
    }
    
}

