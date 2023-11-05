// You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.
#include <stdio.h>
int main()
{
    // take n input
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%d. ", i);
        printf("I Want More Assignments\n");
    }
    return 0;
}