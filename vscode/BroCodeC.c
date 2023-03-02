#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// * 31
//enum week { lundi , mardi , mercredi , jeudi , vendredi , samedi , dimanche };
// enum week day; //// chuyen xuong pan code trong main
// todo or enum week { lundi , mardi , mercredi , jeudi , vendredi , samedi , dimanche }day;

// * 31.1



struct student // * 30
{
	char name[20];
	float gpa ;
};


// * 29 typedef char user[25];

struct user // * 29
{
	char name[25];
	char password[12];
	int id;
};

// typedef struct // * same the above 29
// {
// 	char name[25];
// 	char password[12];
// 	int id;
// } user ;


void fun(int a)
{
	// * 37.1
    printf("Value of a is %d\n", a);
}

struct Point
{
	// * 29
   int x, y;
};
 
struct Player
{
	// * 29
	char name[20];
	int score ;
};

void sort ( int numbers[] , int size ){
	// * 28
	for( int i = 0 ; i < size ; i++ ){
		for( int j = 0 ; j < size ; j++ ){
			if(numbers[j] > numbers[j+1]){
			int temp = numbers[j];
			numbers[j] = numbers[j+1];
			numbers[j+1] = temp; 
			}
			
	}
	}

}

void printfsorted ( int numbers[] , int size ){
	// * Vid28
	for( int i = 0 ; i < size ; i++ ){
		printf("%d ", numbers[i]);
	}
}

double square(double x){
	double solution = x * x;
	return solution;
	//return x * x;
}

int findMax(int x,int y){
	// * 21
	if(x>y){
		return x;
	}
	else{
		return y;
	}
	// * return(x,y)?x:y;
}

void linhle (){
	// * 18
	printf("le");
	printf(" thuy");
	printf(" linh\n");
}

void id (char name[],int age){
	// * 19
	printf("your name is %s\n",name);
	printf("you are %d years old\n",age);
}

int main(){
	double PI = 2 * acos(0);

	 	// * 1

	// printf("mama!\tpapa!\n");
	// printf("uraa!\n");
	// printf("1\n""\t2\n""\t""\t3\n");
	// printf("\"mang tiền về cho mẹ\" - đen");

	 	// * 2

	// int ak;
	// ak = 111;	
	// int b = 222;
	// printf("there are %d bananas!\n",ak);
	// float gpa = 16.6;
	// printf("your accuracy is %0.2f!\n",gpa);
	// char code = 'C';
	// printf("saitama is an %c class hero!\n",code);
	// char name[] = "tuan";
	// printf("your name is %s \n",name);
	
		// * 3

	// double kda = 13.123124124;
	// printf("your dumb accuracy is %0.8lf!\n",kda);
	// bool emi = true;
	// printf("%d\n",emi);
	// char f = 100;	
	// printf("%d\n",f);
	// printf("%c\n",f);
	// unsigned char adm = 101;
	// printf("%d\n",adm);
	// short int krj = 30000;
	// unsigned short fki = 60000;
	// printf("%d\n",krj);
	// printf("%d\n",fki);

		// * 4

	// float item1 = 5.75;
	// float item2 = 10.00;
	// float item3 = 100.99;

	// printf("Item 1: $%-2f\n",item1);
	// printf("Item 2: $%.2f\n",item2);	
	// printf("Item 3: $%2f\n",item3);

		// * 5
	
	// const float PI = 3.141592654;
	// printf("%f",PI);

		// * 6
	
	// int x = 3;
	// int y = 2;
	// int z = x + y;
	// int c = x - y;
	// int g = x * y;
	// float h = x / y;
	// int j = x % y;
	// x ++;
	// y --;
	// printf("%d\n",z);
	// printf("%d\n",c);
	// printf("%d\n",g);
	// printf("%.2f\n",h);
	// printf("%d\n",j);
	// printf("%d\n",x);
	// printf("%d\n",y);

		// * 7
	
	// int age;
	// printf("how old are you?\n");
	// scanf("%d",&age);
	// printf("you are %d years old!",age);

	// char name[30];
	// printf("what is your name?\n");
	// scanf("%s",&name);
	// printf("your name is %s!",name);
	
		// * 8
	
	// double A = sqrt(9);
	// double B = pow(2,2);
	// int ci = round(3.14);
	// int di = ceil(3.14);
	// int ei = floor(3.19999);
	// double F = fabs(-1);
	// double G = log(3); 
	// double H = sin(PI/2);
	// double I = cos(PI/2); 
	// double J = tan(PI/6);

	// printf("%.2lf\n",A);
	// printf("%.2lf\n",B);
	// printf("%ld\n",ci);
	// printf("%ld\n",di);
	// printf("%ld\n",ei);
	// printf("%.2lf\n",F);
	// printf("%.2lf\n",G);
	// printf("%.2lf\n",H);
	// printf("%.2lf\n",I);
	// printf("%.2lf\n",J);
	
		// * 9

	// double C;
	// double S;
	// double radian;
	// printf("what is the radian  of the circle ?: \n");
	// scanf("%lf", &radian);
	// C = 2 * PI * radian;
	// S = PI * radian * radian;
	// printf("the circumference of the circle is: %lf\n",C);
	// printf("the area of the circle is: %lf\n",S);

		// * 10
		
	// double A;
	// double B;
	// double C;

	// printf("enter one perpendicular side of the triangle!: ");
	// scanf("%lf", &A);

	// printf("enter another perpendicular side of the triangle!: ");
	// scanf("%lf", &B);

	// C = sqrt(A*A+B*B);

	// printf("the length of the last side of the triangle is: %.2lf\n ",C);
		
		// * 11

	// int age;

	// printf("Enter your name: %d\n",age);
	// scanf("%d", &age);
	// if(age >= 18){
	// 	printf("you are adult!");
	// }
	// else if(age < 0){
	// 	printf("you are sperm!");
	// }
	// else if(age == 0){
	// 	printf("you are baby!");
	// }
	// else{
	// 	printf("you are just a kid!");
	// }
		
		// * 12

	// char grade;

	// printf("Enter your exam's result: %c\n",grade);
	// scanf("%c", &grade);	

	// switch (grade)
	// {
	// case 'A':
	// 	printf("perfect!\n");
	// 	break;
	// case 'B':
	// 	printf("good!\n");
	// 	break;
	// case 'C':
	// 	printf("okay!\n");
	// 	break;
	// case 'D':
	// 	printf("not too bad!\n");
	// 	break;	
	// case 'F':
	// 	printf("you failed!\n");
	// 	break;	
	// default:
	// 	printf("please enter valid grade\n");
	// }
		
		// * 13
	
	// char unit;
	// float temp;

	// printf("Is the temperature in (C) or (F) %c\n",unit);
	// scanf("%c", &unit);	
	// unit = toupper(unit);
	// if(unit =='C'){
	// 	printf("What is temperature in Celsius?: \n");
	// 	scanf("%f", &temp);
	// 	temp = (temp * 9/5) + 32;
	// 	printf("The temperature in Farenheit is %f!\n",temp);
	// }
	// else if(unit =='F'){
	// 	printf("What is temperature in Farenheit?: \n");
	// 	scanf("%f", &temp);
	// 	temp = (temp - 32) / 1.8;
	// 	printf("The temperature in Celsius is %f!\n",temp);
	// }
	// else{
	// 	printf("%c is not a valid measurement!\n",unit);
	// }
		
		// * 14 

	// char operator;
	// double num1;
	// double num2;
	// double result;

	// printf("which operator you would like to choose (+ - * /): \n");
	// scanf("%c", &operator);

	// printf("enter the 1st value:\n");
	// scanf("%lf", &num1);

	// printf("enter the 2nd value:\n");
	// scanf("%lf", &num2);

	// switch (operator)
	// {
	// case '+':
	// 	result = num1 + num2;
	// 	printf("the result is %.2lf\n", result);
	// 	break;
	// case '-':
	// 	result = num1 - num2;
	// 	printf("the result is %.2lf\n", result);
	// 	break;
	// case '*':
	// 	result = num1 * num2;
	// 	printf("the result is %.2lf\n", result);
	// 	break;	
	// case '/':
	// 	if(num2 == 0){
	// 		printf("the operator is invalid!\n");
	// 	}
	// 	else{
	// 		result = num1 / num2;
	// 		printf("the result is %.2lf\n", result);
	// 	}
	// 		break;
	// default:
	// 	printf("pealse enter only valid operator!\n");
	// }
		
		// * 15+16+17 - and,or,not

	// int temp = 1000;
	// bool sunny = true;
	// 	// && = and
	// 	// || or 
	// 	// ! not
	// if(temp > 0 && temp < 30 && sunny){
	// 	printf("the weather is good today!");
	
	// }
	// else{
	// 	printf("the weather is bad today!");
	// }

		// * 18 - Void function
	
	// linhle();
	// linhle();
	// linhle();

		// * 19

	char name[] = "tuan";
	int age = 18;

	id(name,age);	

		// * 20 - created a math function

	// double x = square(3.14);
	// printf("%.2lf",x);

		// * 21

	// int x , y ;
	// printf("Enter\n");
	// scanf("%d %d", &x, &y);
	// int max = findMax(x,y);
	// printf("%d",max);

		// * 22 - string.h
	
	// char string1[] = "Yasuo";
	// char string2[] = "Yone";

	// strlwr(string1);
	// printf("%s\n", string1);
	// strupr(string1);
	// printf("%s\n", string1);
	// strcat(string1, string2);
	// printf("%s\n", string1);
	// strncat(string1,string2, 2);
	// printf("%s\n", string1);
	// strcpy(string1,string2);
	// printf("%s\n", string1);
	// strncpy(string1, string2, 2);
	// printf("%s\n", string1);
	// strset(string1 , 'x');
	// printf("%s\n", string1);
	// strnset(string1 , 'k', 2);
	// printf("%s\n", string1);
	// strrev(string1);
	// printf("%s\n", string1);
	// int result1 = strlen(string1);
	// printf("%d\n",result1);
	// int result2 = strcmp(string2, string1);
	// printf("%d\n",result2);
	// int result3 = strncmp(string1, string2, 1);
	// printf("%d\n",result3);
	// int result4 = strcmpi(string1, string2);
	// printf("%d\n",result4);
	// int result5 = stricmp(string1, string1, 2);
	// printf("%d\n",result5);
		
		// * 23 - matrix
		
	// int row , column ;
	// char symbol ;
	// printf("enter # the row: ");
	// scanf("%d", &row);
	// printf("enter # the column: ");
	// scanf(" %c", &column);
	// //scanf("%c"); -> nó đọc khoảng trắng ở dòng code bên trên nên đ muốn " %c" thì viết cái này vào
	// printf("enter # the symbol: ");
	// scanf("%s", &symbol);
	// for ( int i = 1 ; i <= row ; i++ ){
	// 	for ( int j = 1 ; j <= column ; j++ ){
	// 		printf("%c\t", symbol);
			
	// 	}
	// 	printf("\n");
	// }
		
		// todo Extra code

	// 	int row , column ;
	// char symbol[10] ;
	// printf("enter # the row: ");
	// scanf("%d", &row);
	// printf("enter # the column: ");
	// scanf("%d", &column);
	// printf("enter # the symbol: ");
	// scanf("%s", &symbol);
	// for ( int i = 1 ; i <= row ; i++ ){
	// 	for ( int j = 1 ; j <= column ; j++ ){
	// 		printf("%s\t", symbol);
			
	// 	}
	// 	printf("\n");
	// }

		// * 24 - array

	// int mynumbers[]	= { 0 , 25 , 50 , 75 , 100};
	// // mynumbers[0] = 40 ;
	// // printf("%d",mynumbers[0]);

	// for ( int i = 0 ; i < 5 ; i++ ){
	// 	printf("%d\t", mynumbers[i]);
	// }
	// int yournumbers[4];
	// yournumbers[0] = 25 ;
	// yournumbers[1] = 50 ;
	// yournumbers[2] = 75 ;
	// yournumbers[3] = 100 ;

		// * 25 - 2D array

	// int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

	// int y[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

		// * 26 - string array


	// char name[][10] = {"cam","chanh","buoi"};

	// strcmp(name[0], "ot");

	// for( int i = 0 ; i < sizeof(name)/sizeof(name[0]) ; i++ ){
	// 	printf("%s\n", name[i]);
	// }

		// * 27 - swap values of two variables

	// char c[10] = "Qui";
	// char v[10] = "Non";
	// char k[10] ;

	// strcpy(k, c);
	// strcpy(c, v);
	// strcpy(v, k);

	// printf("%s\n", c);
	// printf("%s\n", v);

		// * 28 - sort an array

	// int numbers[] = { 9 , 2 , 5 , 4 , 3 , 10 , 7 , 6 , 8 , 1 };
	// int size = sizeof(numbers)/sizeof(numbers[0]);

	// sort( numbers , size );
	// printfsorted( numbers , size );

		// * 29 - structs

	// struct Player player1;
	// struct Player player2;

	// strcpy(player1.name, "Tuan");
	// player1.score = 9 ;

	// strcpy(player2.name, "But");
	// player2.score = 8 ;

	// printf("%d\n",player1.score);
	// printf("%s\n",player1.name);

	// printf("%d\n",player2.score);
	// printf("%s\n",player2.name);
	
		// todo extra code for 29

	// struct Point p1 = {1, 2};
	// struct Point *p2 = &p1;
	// printf("%d %d\n", p2->x, p2->y);

		// * 29 - typedef - tạo ra 1 cái character nickname

		// //user user1 = "bro";
		// struct user user1 = { "but" , "123456" , 1234567 };
		// struct user user2 = { "tuan" , "1123456" , 11234567 };

		// * for the same of above 29
		// todo  user user1 = { "but" , "123456" , 1234567 };
		// todo user user2 = { "tuan" , "1123456" , 11234567 };

		// printf("%s\n",user1.name);
		// printf("%s\n",user1.password);
		// printf("%d\n",user1.id);

		// printf("\n");

		// printf("%s\n",user2.name);
		// printf("%s\n",user2.password);
		// printf("%d\n",user2.id);

		
		// * 30 - arrays of structs

		// struct student student1 = { "fong" , 1.0 };
		// struct student student2 = { "dong" , 2.0 };
		// struct student student3 = { "long" , 3.0 };
		// struct student student4 = { "cong" , 4.0 };

		// struct student students[] = { student1 , student2 , student3 , student4 };

		// for( int i = 0 ; i <= (sizeof(students)/sizeof(students[0])) ; i++ ){
		// 	printf("%.2f\n", students[i].gpa);
		// 	printf("%.s\n", students[i].name);
		// 	printf("\n");
		// }		
		
		// * 31 - enums

		// enum week day ;
		// day = jeudi ;
		// printf("%d\n", day);

		// * 31.1

		// enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

		// for( int i = Jan ; i <= Dec ; i++ ){
		// 	printf("%d\n",i);
		// }

		// * 31.2

		// enum State {Working = 1, Failed = 0, Freezed = 0};
		// printf("%d, %d, %d", Working, Failed, Freezed);

		// * 31.2

		// enum day {sunday = 1, monday, tuesday = 5, wednesday, thursday = 10, friday, saturday};
		// printf("%d %d %d %d %d %d %d", sunday, monday, tuesday, wednesday, thursday, friday, saturday);
		// // We can assign values to some name in any order. All unassigned names get value as value of previous name plus one.
	
		// * 32 - random numbers


		// * 33 - number guessing game
		// * 34 - quiz game
		// * 35 - bitwise operators
		// * 36 - memory adresses

		// char a = 'X';
		// short b = 'Y';
		// int c = 'Z';
		// short d[3];

		// printf("%d bytes\n", sizeof(a));
		// printf("%d bytes\n", sizeof(b));
		// printf("%d bytes\n", sizeof(c));
		// printf("%d bytes\n", sizeof(d));

		// printf("%p\n", &a);
		// printf("%p\n", &b);
		// printf("%p\n", &c);
		// printf("%p\n", &d);

		// * 37 - bro pointer	

		// * 37.0 - Pointer ( ͡° ͜ʖ ͡°) 

	// int x ;
	// printf("%p\n", &x);

	// int a = 10;
	// int *ptr; 
	// ptr = &a;

	// int Var = 10;
	// int *ptr = &Var;
	// printf("Value of Var = %d\n", *ptr);
	// printf("Address of Var = %p\n", ptr);
	// *ptr = 20;
	// printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
		
		// * 37.1 - pointer functions

	// void (*fun_ptr)(int) = &fun;
	// // todo void (*fun_ptr)(int);
	// // todo ptr_ptr = &fun
	// (*fun_ptr)(10);
	// // todo void (*fun_ptr)(int) = fun;
	// // todo fun_ptr(10);

	// // to be coutinue : https://www.geeksforgeeks.org/function-pointer-in-c/?ref=gcse


		// * 38 - File Handling

		// todo mo hoac tao 1 file 
		// // FILE *pF = fopen("Brotest.txt","w");
		// FILE *filePointer;
		// filePointer = fopen("Brotest.txt", "w");

		// todo read a file 

		// FILE * pF = fopen("Brotest.txt","r");
		// char nope[255];

		// if(pF == NULL){
		// 	printf("False");
		// }
		// else{
		// 	while (fgets(nope , 255, pF) != NULL ){
		// 		printf("%s",nope);
		// 	}
		// }
		
		// todo write a file
		
		// 0


		// todo close a file
		//fclose(pF);

		// FILE *filePointer;
		// char str1 = "I";
		// char str2 = "Love";
		// char str3 = "U";
		// int year = 3000;
		// filePointer = fopen("Brotest.txt","r");
		// fscanf(filePointer, "%s %s %s %d", str1, str2 ,tr3, &year);

		// * 39 - tic toc tac game
		


	return 0;
}

