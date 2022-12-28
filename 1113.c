#include <stdio.h>
int main() {
    
    while(1){
        int x, y;
        scanf("%d %d", &x, &y);
        if(x>y){
            printf("Decrescente\n");
        }else if(x<y){
            printf("Crescente\n");
        }else{
            break;
        }
         
    }
    return 0;
}
