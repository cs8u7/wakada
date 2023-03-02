#include <stdio.h>
#include <math.h>

void adu(){
    printf("This's our C programming course\n");
    printf("Welcome to the first tutorial class\n");
    printf("Happy New Year!\n");
}

int main(){
    //Ex2
    printf("Hello USTH World\n");

    int ak = 1;
    float bl = 2.2;
    double cf = 3.14;
    char name[30] = "concac";

    printf("%d\n",ak);
    printf("%.3f\n",bl);
    printf("%.3lf\n",cf);
    printf("%s\n",name);

    char baka[10];
    printf("enter something please! \n");
    scanf("%s", baka);
    printf("your input is: %s\n",baka);

    printf("USTH!\n");
    printf("USTH!\v");
    printf("USTH!\t");
    printf("USTH!\b");
    printf("USTH!\?");
    printf("USTH!\'");
    printf("USTH!\"");
    printf("USTH!\\");

    //Ex3
    adu();

    //Ex4
    double cir , area , radiant;
    double PI = 2 * acos(0);
    printf("enter radiant please! \n");
    scanf("%lf", &radiant);
    cir = 2 * PI * radiant;
    area = PI * radiant * radiant;
    printf("the circumference of circle is %.2lf\n",cir);
    printf("the area of circle is %.2lf\n",area);

    //Ex5
    double A = 1;
    double B = 2;
    double C = 1;
    double x ;
    printf("enter x please! \n");
    scanf("%lf", &x);
    x = A * x * x + B * x + C;
    printf("result of the equation is %.2lf\n", x);

    //Ex6
    double a , b , c ,f ;
    
    printf("enter a please! \n");
    scanf("%lf", &a);
    printf("enter b please! \n");
    scanf("%lf", &b);
    printf("enter c please! \n");
    scanf("%lf", &c);

    f = 3 * a - b * b * b - 2 * sqrt(c);
    printf("result of the equation is %.2lf\n", f);

    
    return 0;
}