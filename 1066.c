// 1066 - Even, Odd, Positive and Negative
#include <stdio.h>
 
int main() {
 
    int n =5, x, e=0, o=0, nu =0, p=0;
    while(n--){
        scanf("%d", &x);
        if(x%2==0){
            e++;
        }else{
            o++;
        }
        if(x>0){
            p++;
        }
        if(0>x){
            nu++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e, o, p, nu);
    return 0;
}
