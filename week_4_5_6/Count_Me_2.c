// You will be given a string S as input contains only small English alphabets. 
// You need to tell the number of consonants in it. The string will not contain any spaces.
#include <stdio.h>
#include <string.h>
int main(){
    char s[1000001];
    scanf("%s",s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u')
        {
            count++;
        }
      
    }
    printf("%d",count);

}