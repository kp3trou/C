#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	// Section 1
	// Characters stored in memory as binary format, from decimal number
	// of ascii table
	char x = 2;// from ascii table number 2
	printf("unprintable character: %c\n",x);// non printable character: STX(Start Of Text)
	printf("%d\n",x);
	x = '2';// from ascii table character '2'
	printf("%c\n",x);
	printf("%d\n",x);
	x = 64;
	printf("%c\n",x);
	x = 124;
	printf("%c\n",x);
 	x = 126;
	printf("%c\n",x);
	printf("%d\n", sizeof(x));
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof('a'));

	// type casting
	// float to int
	float salary = 1000.00;
	printf("%.2f\n",salary);
	int sal;
	sal = (float)salary;
	printf("%d\n",sal);
	// int to float
	int price = 300;
	printf("%d\n",price);
	float pr = (int)price;
	printf("%.5f\n",pr);

	// generic pointer
	int y = 10;
	char ch = 'A';
	void *gp;
	gp = &y;
	printf("Generic pointer points to the integer value = %d\n", *(int*)gp);
	gp = &ch;
	printf("Generic pointer now points to the character = %c\n\n", *(char*)gp);

	// pointers to pointers
	int z = 10;
	int *pz;
	int **ppz;
	pz = &z;
	ppz = &pz;
	printf("%d\n",**ppz);

	return 0;
}

