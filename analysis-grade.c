
/* Analysis of examination succes of classroom. */
#include <stdio.h>

int main(){
    /* initilize variables in definition */
    int passes = 0;
    int failures = 0;
    int student = 1;
    int result;

    while ( student <= 10 ){

        /*  prompt user for input and obtain value from user  */
        printf( "Enter result ( 1= pass , 0 = fail)" );
        scanf( "%d" , result );

        /* if results 1 pass ow failure */
        if ( result == 1 ){
            passes = passes + 1;
        }
        else {
            failures = failures + 1;
        }
        student = student + 1; 
    }
    if ( passes > 8 ){
        printf( "Raise Tuition" );
    }
    
    return 0;

}
