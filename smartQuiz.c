#include <stdio.h>

int main() {
    int n=1;
    // question 
    char question[5][50]={
        "Q1 abc?",
        "Q2 abc?",
        "Q3 abc?",
        "Q4 abc?",
        "Q5 abc?"
    };
    // option of question 1 to... n
    char option[5][4][20]={
        {"Aa","Ba","Ca","Da"},
        {"Ab","Bb","Cb","Db"},
        {"Ac","Bc","Cc","Dc"},
        {"Ad","Bd","Cd","Dd"},
        {"Ae","Be","Ce","De"}
        
    };
    int currect[5]={2,3,4,2,3};
    
    int ans[5];
    // print option;
    for(int i=0; i<5; i++){
        printf("%d %s\n", i+1, question[i]);
        for(int j=0; j<4; j++){
            printf("\t %s \n", option[i][j]);
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
