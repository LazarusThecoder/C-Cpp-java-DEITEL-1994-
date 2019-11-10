/* Class average program with sentinel-conrolled repetition */
#include<stdio.h>

/* function main begins program execution */
int main(void){
    int counter;
    int grade;
    int total;

    float average; /* number with decimal point for average to prevent truncation

    /* initializn phase */
    total = 0 ;
    counter = 0;

    /* processing phase */
    /* get first grade from user */
    printf( "Enter grade, -1 to end: " ); /* prompt for input */
    scanf("%d", &grade ); 

    /* loop while sentinel value not yet read from user */
    while ( grade != -1){
        total = total + grade;
        counter = counter +1;

        //get next grade from user
        printf( "Enter grande -1 to end: " );
        scanf( "%d", &grade);
    }//end while

    /* termination phase */
    /* if user entered at least one grade */
    if ( counter != 0 ) {

        average = (float) total / counter ; /* avoiding truncation */

        /* display average with two digits of precision */
        printf( "Class average is %.2f", average );
    }
    else {
        printf( "No grades were Entered \n" );
    }
    
    return 0;

}