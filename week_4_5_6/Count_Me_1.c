// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0  )
        {
            c2++;
        }else if(a[i]%2==0 && a[i]%3==0){
            c2++;
        }
        else if(a[i]%3==0)
        {
            c3++;
        }
    }
    printf("%d %d",c2,c3);
    return 0;
}