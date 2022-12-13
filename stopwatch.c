// A stopwatch
// Rony Ahmmed
// ICTE BDU
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define W 5
int main() {
    int h1, m1, s1;
    printf("Enter Hours Minutes and Seconds\n");
    scanf("%d%d%d", &h1, &m1, &s1);
    
    int h=0, m=0, s=0;
    while(1){
        printf("reamind : %.2d : %.2d : %.2d\n", h, m, s);
        s++;
        if(h==h1 && m==m1 && s==s1){
            break;
        }else{
            sleep(1);
        }
        if(s==W){
            s=0;
            m=m+1;
        }
        if(m==W){
            m=0;
            h=h+1;
        }
    }
    
    

    return 0;
}
