// 1172 - Array Replacement I
#include <stdio.h>
 
int main() {
 
    int n, x[10];
    for(n=0; n<10; n++){
        scanf("%d", &x[n]);
        if(x[n]<=0){
            x[n]=1;
        }
    }
    for(n=0; n<10; n++){
        printf("X[%d] = %d\n",n, x[n]);
         
    }
 
    return 0;
}
