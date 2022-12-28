#include <stdio.h>
int main() {
    //int n;
    int n, a, C=0, R=0, S=0, T=0;
    char x;
    scanf("%d", &n);
    while(n--){
        scanf("%d %c", &a, &x);
        T+=a;
        switch(x){
            case 'C':
            C+=a;
            break;
            case 'R':
            R+=a;
            break;
            case 'S':
            S+=a;
            break;
        } 
    }
        
        printf("Total: %d cobaias\n", T);
        printf("Total de coelhos: %d\n", C);
        printf("Total de ratos: %d\n", R);
        printf("Total de sapos: %d\n", S);
        printf("Percentual de coelhos: %.2f %\n", (float) (C*100) /T);
        printf("Percentual de ratos: %.2f %\n", (float) (R*100) /T);
        printf("Percentual de sapos: %.2f %\n", (float) (S*100) /T);
    return 0;
}
