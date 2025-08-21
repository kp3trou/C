#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int r_no;
	char name[20];
	char course[20];
	float fees;
}Student;


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

	Student s1;
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





























	return 0;
}


