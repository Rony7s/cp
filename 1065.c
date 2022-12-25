// 1065 - Even Between five Numbers

#include <stdio.h>
 
int main() {
 
    int n =5, x, e=0;
    while(n--){
        scanf("%d", &x);
        if(x%2==0){
            e++;
        }
    }
    printf("%d valores pares\n", e);
    return 0;
}
