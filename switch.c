/* counting letter grades */
// doesn t work whyyyyy?

#include <stdio.h>

int main(){
    char grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int eCount = 0;
    int fCount = 0;

    printf( "Enter the letter grades \n" );
    printf( "Enter the EOF character to end input \n" );
    
    while( (grade = getchar() ) != EOF){
        switch ( grade ) {
            printf( "%c", grade );
            case 'A':
            case 'a':
                ++aCount;
                break;

            case 'B':
            case 'b':
                ++bCount;
                break;

            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'E':
            case 'e':
                ++eCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;
            case " ":
            case "\t":
            case "\n":
                break;

            default:
                printf( "incorrect letter entered \n" );
                printf( "enter a new grade  \n" );
                break;
        }
    }
    printf( "\nTotals for each letter grade are : \n" );
    printf( "a: %d\n",aCount );
    printf( "B: %d\n",bCount );
    printf( "C: %d\n",cCount );
    printf( "D: %d\n",dCount );
    printf( "E: %d\n",eCount );
    printf( "f: %d\n",fCount );
    return 0;
}