// You will be given an array A and the size of that array N. Take input in the main function. You need to write a function named count_before_one() which receives that array of integers and the size of that array and return type will be 32 bit integer. The function counts the number of elements in that array until you find 1 and returns that count. Print that count in the main function.
#include <stdio.h>
int count_before_one(int a[],int n){
    int c=0;
for(int i=0;i<n;i++){
        if(a[i]==1){
            break;
        }
        c++;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result =count_before_one(a,n);
    printf("%d\n",result);
}

// int count_before_one(int A[], int N) {
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         if (A[i] == 1) {
//             break;
//         }
//         count++;
//     }
//     return count;
// }

// int main() {
//     int N;   
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }
//     int result = count_before_one(A, N);
//     printf("%d\n", result);
//     return 0;
// }