// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
#include <stdio.h>
int main(){
    int n;
   while(scanf("%d", &n) != EOF){
    if(n == 1999){
        printf("Correct\n");
        break;
    }else{
        printf("Wrong\n");
    }
       
   }
    return 0;
}