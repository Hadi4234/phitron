// Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?
#include <stdio.h>
int main() {
     int T; 
    scanf("%d", &T);
    while (T--) {
       int M1, M2, D;
       scanf("%d %d %d", &M1, &M2, &D);
        int ans=(D-(D*M1)/(M1+M2));
        if(M2==0){
            ans=0;
        }else if(ans<0){
            ans=1;
        }
        printf("%d\n", ans);   
    }
    return 0;
}