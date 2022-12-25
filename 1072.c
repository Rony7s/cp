//RONY AHMMED BDU_ICTE
//1072
#include <stdio.h>
 
int main() {
 
    int n, i=0, o=0, x;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            i++;
        }else{
            o++;
        }
    }
    printf("%d in\n%d out\n", i, o);
    return 0;
}
