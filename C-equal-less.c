#include<stdio.h>
int main(void){
    int num1; //first number to be read from user
    int num2;//second number to be read from user

    printf( "Enter two integers, and I will tell you \n" );
    printf( "the relationships they satisfy : ");

    scanf( "%d%d",&num1,&num2 );//num1spacenum2 input otherwise num1 ?num2 memonry assign one value to num 2. 

    if ( num1 == num2 ) {
        printf( "%d is not equal to %d \n",num1,num2 );
    }
    if ( num1 < num2 ) {
        printf("%d is the lesser than %d\n",num1,num2 );
    }
    if ( num1 > num2 ) {
        printf("%d is the greater than %d\n", num1, num2 );
    }
    if ( num1 != num2) {
        printf( "%d is not equal to %d\n",num1, num2 );
    }
    return 0;
}