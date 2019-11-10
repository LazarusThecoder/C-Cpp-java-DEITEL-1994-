/* class average program with counter-controlled repetition */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    int counter; /* number of grade to be entered next */
    int grade; /* grade value */
    int total; /* sum of grades input by user */
    int average; /* average of grades */
    
    /* initialization phase */
    total = 0; 
    counter = 1;

    // processing phase
    while ( counter <= 10 ){     // loop 10 times
        printf( "Enter Grades : " );
        scanf( "%d",grade );
        total = total + grade;
        counter = counter + 1;
    }//end of while
    
    average = total / 10;

    printf( "Class average is %d \n", average );

    return 0; //indicate program ended with succesfully
    
}