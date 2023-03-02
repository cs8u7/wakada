#include <stdio.h>
#include <math.h>

int main(){
    
    //Ex1

    float temp;
    printf("What is temperature in Celsius?: \n");
	scanf("%f", &temp);
	temp = (temp * 9/5) + 32;
	printf("The temperature in Farenheit is %f!\n",temp);

    //Ex2

    int x ;
    int y ;
    int z ;
    printf("What is the first number?: \n");
	scanf("%d", &x);
    printf("What is the second number?: \n");
	scanf("%d", &y);
    printf("What is the third number?: \n");
	scanf("%d", &z);
    if( x > y && y > z ){
        printf("x is the maximum!\n");
        printf("z is the minimum!\n");
    }
    else if ( x > z && z > y )
    {
        printf("x is the maximum!\n");
        printf("y is the minimum!\n");
    }
    else if ( y > x && x > z )
    {
        printf("y is the maximum!\n");
        printf("z is the minimum!\n");
    }
    else if ( y > z && z > x )
    {
        printf("y is the maximum!\n");
        printf("x is the minimum!\n");
    }
    else if ( z > x && x > y )
    {
        printf("z is the maximum!\n");
        printf("y is the minimum!\n");
    }
    else if ( z > y && y > x )
    {
        printf("z is the maximum!\n");
        printf("x is the minimum!\n");
    }

    //Ex3

    int u , me ;  
    printf("What is your number?: \n");
	scanf("%d", &u);
    printf("What is my number?: \n");
	scanf("%d", &me);
    u = u + me ;
    me = u - me ;
    u = u - me ;
    printf("your number after swap is: %d ",u);
    printf("and my number after swap is: %d\n",me);

    //Ex4

    int year ;
    printf("what year is it now?\n");
    scanf("%d", &year);
    if( year % 4 == 0 || year % 400 == 0 && year % 100 != 0){
        printf("%d is a leap year!",year);
    }
    else{
        printf("this is not a leap year!");
    }

    //Ex5 

    float r ,t ,a , b , c , d ,e ,f ;
      
    printf("enter a b c d e f\n");
    scanf("%f %f %f %f %f %f", &a &b &c &d &e &f);
    t = ( a * f - c * d ) / ( a * e - b * d );
    r = ( c * e - f * b ) / ( a * e - b * d ) ;    
    printf("x is %.2f",r);
    printf("y is %.2f",t);

    //Ex6

    int month ;
    printf("enter a month in year!\n");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("there are 31 days\n");
        break;
    case 2:
        printf("there are 28 or 29 days\n");
        break;
    case 3:
        printf("there are 31 days\n");
        break;
    case 4:
        printf("there are 30 days\n");
        break;
    case 5:
        printf("there are 31 days\n");
        break;
    case 6:
        printf("there are 30 days\n");
        break;
    case 7:
        printf("there are 31 days\n");
        break;
    case 8:
        printf("there are 31 days\n");
        break;
    case 9:
        printf("there are 30 days\n");
        break;
    case 10:
        printf("there are 31 days\n");
        break;
    case 11:
        printf("there are 30 days\n");
        break;
    case 12:
        printf("there are 31 days\n");
        break;
    default:
        printf("this is not a month!\n");
        break;
    }

    return 0;
}