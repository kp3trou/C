#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date{
	int day;
	int month;
	int year;
}Date;

typedef struct student {
	int r_no;
	char name[20];
	char course[20];
	float fees;
	Date date;
}Student;

typedef struct point{
	int x;
	int y;
}Point;

// function declarations
void display(int a, int b);
void display_2(Point gp);


int main(){
	// Section 1 
	/***
	Structure Declaration
	 No memory allocation at struct declaration
	struct definition:

	struct struct–name{
		data_type var–name;
		data_type var–name;
			...............
	};
	Now, we declared a struct data type as: struct struct-name.
	Memory allocated when we declare a variable , as : struct struct-name struct-variable
	- typedef declarations
	***/

	Student s1;// Memory allocation.
	printf("The size of struct Student is %d bytes.\n",sizeof(s1));
	// accessing members of the structure
	s1.r_no = 23;
	strcpy(s1.name,"John Deer");
	strcpy(s1.course,"Computer Science");
	s1.fees = 1000.50;
	printf("%d\n",s1.r_no);
	printf("%s\n",s1.name);
	printf("%s\n",s1.course);
	printf("%.2f\n\n",s1.fees);
	
	Student s2 = s1;
	printf("%d\n",s2.r_no);
	printf("%s\n",s2.name);
	printf("%s\n",s2.course);
	printf("%.2f\n",s2.fees);
	printf("\n----------\n");

	// Nested Structures
	Student s3;
	s3.r_no = 32;
	strcpy(s3.name,"George Baker");
	strcpy(s3.course,"History");
	s3.fees = 750.50;
	s3.date.day = 2;
	s3.date.month = 10;
	s3.date.year = 2025;
	printf("%d\n",s3.r_no);
	printf("%s\n",s3.name);
	printf("%s\n",s3.course);
	printf("%.2f\n\n",s3.fees);
	printf("%d - %d - %d\n\n",s3.date.day,s3.date.month,s3.date.year);

	// Arrays of Structures
	// general syntax for declaring an array of structures:
	// struct struct_name struct_var[index];

	Student stud[30];
	printf("the size of aarray of structs is %d bytes.\n",sizeof(stud));
	printf("the size of the first element of the array is %d bytes.\n",sizeof(stud[0]));
	printf("%p\n",(void*)stud);
	printf("%p\n",(void*)&stud[0]);

	for(int i = 0;i < 2;i++){
		if(i==0){
			stud[i].r_no = 32;
			strcpy(stud[i].name,"Helen Baker");
			strcpy(stud[i].course,"History");
			stud[i].fees = 600.50;
			stud[i].date.day = 3;
			stud[i].date.month = 1;
			stud[i].date.year = 2024;
		}
		if(i==1){
			stud[i].r_no = 45;
			strcpy(stud[i].name,"Emily Baker");
			strcpy(stud[i].course,"History");
			stud[i].fees = 640.50;
			stud[i].date.day = 5;
			stud[i].date.month = 11;
			stud[i].date.year = 2025;
		}			
	}

	for(int i = 0;i < 2;i++){
		printf("%d\n",stud[i].r_no);
		printf("%s\n",stud[i].name);
		printf("%s\n",stud[i].course);
		printf("%.2f\n\n",stud[i].fees);
		printf("%d - %d - %d\n",stud[i].date.day,stud[i].date.month,stud[i].date.year);
		printf("----------\n");
	}
	
	// Structures and Functions
	// Different ways of passing structures to functions:
	// Passing individual members
	// Passing the entire structure
	// Passing the address of structure

	// Passing Individual Members
	Point p1 = {2,3};
	display(p1.x,p1.y);

	// Passing the Entire Structure
	// The syntax for passing a structure to a function and returning a structure can be given:
	// struct struct_name func_name(struct struct_name struct_var);
	
	Point p2;
	p2.x = 10;
	p2.y = 20;
	display_2(p2);

	// Passing Structures through Pointers
	







































	return 0;
}

// function definitions

void display(int a, int b){
	 printf(" The coordinates of the point are: %d %d\n", a, b);
}

void display_2(Point gp){
	 printf(" The coordinates of the point are: %d %d\n", gp.x, gp.y);
}










