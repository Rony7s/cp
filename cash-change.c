// Rony Ahmmed BDU-ICTE
#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int taka[6]={0,0,0,0,0,0};
    int note[6]={1,5,10,50,100,500};
     
    taka[5]= x/500;
    x = x%500;
    
    taka[4]= x/100;
    x = x%100;
    
    taka[3]= x/50;
    x = x%50;
    
    taka[2]= x/10;
    x = x%10;
    
    taka[1]= x/5;
    x = x%5;
    
    taka[0]= x;
    
    for(int i=0; i<6; i++){
        for(int a=0; a<taka[i]; a++){
            printf("%d ", note[i]);
            
        }
       
    }
    

    return 0;
}
