#include <stdio.h>

int main() {
    int n=1;
    // question 
    char question[5][50]={
        "Capital of Bangladesh is",
        "How many total Districts are there in Bangladesh?",
        "What is the country calling code for Bangladesh",
        "Official language of Bangladesh is",
        "Internet tld of Bangladesh is"
    };
    // option of question 1 to... n
    char option[5][4][20]={
        {"Dhaka","khulna","Rajshahi","None of these"},
        {"50","60","64","71"},
        {"+49","+230","+97","+880"},
        {"Urdu","Bengali","Arabic","English"},
        {".in",".us",".bd",".com"}
        
    };
    int currect[5]={1,3,4,2,3};
    
    int ans[5];
    // print option;
    for(int i=0; i<5; i++){
        printf("%.2d. %s\n", i+1, question[i]);
        for(int j=0; j<4; j++){
            printf("\t[%d] %s \n",j+1, option[i][j]);
        }
        scanf("%d", &ans[i]);
    }
    
    // check area
    float marks = 0.0;
    for( int i=0 ; i<5; i++){
        if( ans[i] == currect[i] ){
            marks +=1;
        }
    }
    
    // score area
    
    printf("Your Score is: %d", marks);
    
    return 0;
}
