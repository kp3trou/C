#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 2
#define N 2

// functions declaration
int find_smallest(int* p, int size);
void interchange(int* p,int size);


int main(){
	// Section 1 
	// An array is a linear data structure.
	// The elements in array is at consecutive memory locations.
	// An array is a collection of similar data elements.
	// These data elements have the same data type.
	// There are a number of operations that can be preformed on arrays.
	// These operations include:
	// - Traversing an array
	// - Inserting an element in an array
	// - Searching an element in an array
	// - Deleting an element from an array
	// - Merging two arrays
	// - Sorting an array in ascending or descending order

	// 1.1: Traversing an Array
	// Traversing an array means accessing each and every element
	// of the array for a specific purpose. 
	
	// 1.1.1: Read and display n numbers using an array
	
	// array declaration
	int ar[3];

	// array initialization => insert values in array
	for (int i=0;i<3;i++)
		ar[i] = i; 

	// access elements of the array => print elements of the array
	for (int i=0;i<3;i++)
		printf("ar[%d] : %d\n",i,ar[i]);
	
	printf("\n----------\n");

	// 1.1.2: Find the mean of n numbers using array
	int n = 5;// n numbers	
	int arr[5] = {1,2,3,4,5};
	int sum = 0;
	float mean = 0.0;
	for (int i=0;i<5;i++)
		sum += arr[i];
	
	mean = (float)sum/n;// here first casts sum and after /.
	printf("The sum of the array elements = %d\n", sum);
	printf("The mean of the array elements = %.2f\n", mean);
	printf("\n----------\n");

	// 1.1.3:  Print the position of the smallest and largest number of an array
	int n2 = 5;
	int pos1 = 0;
	int pos2 = 0;
	int arr2[] = {5,6,2,52,49};
	int sm = arr2[0];
	int lar = arr2[0];
	for (int i=1;i<n2;i++){
		if (arr2[i] < sm){
			sm = arr2[i];
			pos1 = i;
		}
		if (arr2[i] > lar){
			lar = arr2[i];
			pos2 = i;
		}
	}

	printf("The smallest number of the array is: %d\n",sm);
	printf("The position of %d is at arr2[%d]\n",sm,pos1);
	printf("The largest number of the array is: %d\n",lar);
	printf("The position of %d is at arr2[%d]\n",lar,pos1);
	printf("\n----------\n");

	// 1.1.4: Find whether the array of integers contains a duplicate number
	// print the positions of the array of the dublicates numbers
	int arr3[10] = {2,1,9,4,2,3,7,8,1,9};
	int flag = 0;
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(arr3[i] == arr3[j]){
				printf("Dublicate number is: %d\n",arr3[i]);
				printf("Found at positions: arr3[%d] and arr3[%d]\n", i, j);
				flag = 1;
			}
		}
	}
	if (!flag){
		printf("There are no dublicates numbers in the array\n");
	}
	printf("\n----------\n");

	// 1.2: Inserting an Element in an Array
	
	// 1.2.1: Insert a number at a given location in an array.
	int arr4[10] = {1,2,3,4,5,6};
	int pos = 3;// index position of the array
	int add = 7;// number to add at pos
	int n3 = 6;// number of elemenets at the beginning array 

	// shift elememnts to the right start from the end of the array until pos.
    for(int i = n3-1; i >= pos; i--){
        arr4[i+1] = arr4[i];
    }
	arr4[pos] = add; 
    n3++;             
    for(int i=0;i<n3;i++){
        printf("arr4[%d] : %d\n",i,arr4[i]);
    }
	printf("\n----------\n");

	// 1.2.2:  Insert a number in an array that is already sorted in ascending order

	int arr5[10] = {1,2,4,5,6};
	int num = 3;// number to add in array
	int size = 5;// number of elements is array
	int i;
	for(i=0;i<size;i++){
		if(arr5[i]>num)
			break;
	}
	//printf("the index position need to be inserted is %d\n",i);
	
	// shift elements to the right
	for(int j=size-1;j>=i;j--){
		arr5[j+1] =arr5[j];
	}
	// Insert the number
    arr5[i] = num;
    size++; // Increase the size

	printf("Array after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("arr5[%d] = %d\n", i, arr5[i]);
    }
	printf("\n----------\n");

	// 1.3: Deleting an Element from an Array

	int arr6[10] = {1,2,3,4,5};
	int elements = 5;
	int pos3 = 2;// at arr6[2] delete 3

	// move elements to the left
	for (int i=pos3;i<elements-1;i++){
		arr6[i] = arr6[i+1];
	}

	elements--;
	for(int i = 0; i < elements; i++) {
        printf("arr6[%d] = %d\n", i, arr6[i]);
    }
	printf("\n----------\n");

	// 1.4: Merging Two Arrays

	// 1.4.1: Merge 2 unsorted arrays
	// Merging two arrays in a third array means first copying the contents of
	// the first array into the third array and then copying the contents of 
	// the second array into the third array.	

	int arr7[6] = {3,1,2,12,13,14};
	int arr7size = 6;
	int arr8[3] = {5,4,6};
	int arr8size = 3;
	int mergedar[7];// final array
	int index = 0;

	for (int i=0;i< arr7size;i++){
		mergedar[index]= arr7[i];
		index++;
	}

	for (int i=0;i< arr8size;i++){
		mergedar[index]= arr8[i];
		index++;
	}

	printf("\nThe merged array is\n");

	for(i=0;i<index;i++)
		printf("mergedar[%d] = %d\n", i, mergedar[i]);
	printf("\n----------\n");

	// 1.4.2: Merge 2 sorted arrays
	
	int arr9[]  = {20,30,40,50,60};
	int arr10[] = {15,22,31,45,56,62,78};
	int arr11[12]; //{15,20,22,30,31,40,45,50,56,60,62,78};// merged array

	int x = 5;// size of arr9
	int y = 7;// size of arr10
	int z = x+y;// size of arr11
	int idx = 0;
	int index_first=0,index_second=0;

	while (index_first<x && index_second<y){
		if(arr9[index_first]< arr10[index_second]){
			arr11[idx] = arr9[index_first];
			index_first++;
			idx++;
		}
		else{
			arr11[idx] = arr10[index_second];
			index_second++;
			idx++;
		}
	}

	// if the first array is finished
	if (index_first == x){
		// insert all elements from the second array into the merged array
		while (index_second<y){
			arr11[idx] = arr10[index_second];
			index_second++;
			idx++;
		}
	}

	// if the second array is finished
	else if (index_second == y){
		// insert all elements from the first array into the merged array
		while (index_first<y){
			arr11[idx] = arr9[index_first];
			index_first++;
			idx++;
		}
	}

	printf("Merged array is :\n");
	for (int i=0;i<z;i++)
		printf("arr11[%d] = %d\n",i,arr11[i]);
	printf("\n----------\n");

	// Write a program to read ana array of n numbers and find the smallest number
	int arr12[] = {5,6,3,2,1,9};
	int s12 = 6;
	printf("The smallest number in the array is %d\n",find_smallest(arr12,s12));
	printf("\n----------\n");

	// Write a program to interchange the largest and the smallest number in an array.
	int arr13[] = {2,3,1,5,7,9};
	int s13 = 6;
	interchange(arr13,s13);
	printf("array after intechange smallest and largest number\n");
	for(int i=0;i< size;i++)
		printf("arr13[%d] is %d\n",i,arr13[i]);
	printf("\n----------\n");

	// Declaring Two-dimensional Arrays
	// A two-dimensional array is declared as:
	// data_type array_name[row_size][column_size];

	// the initialization of a two-dimensional array is done row by row
	int marks[2][3]={{90,87,78},{68, 62, 71}};

	// Write a program to multiply two m x n matrices.
	
	// we use define for array dimensions M, N.
	int arr14[M][N] = {
			{1,2},
			{3,4}
	};
	int arr15[M][N] = {
			{5,6},
			{7,8}
	};
	int arr16[M][N] = {0};

	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			arr16[i][j] = 0;
			for(int k=0; k<N; k++) {
				arr16[i][j] += arr14[i][k] * arr15[k][j];
			}
		}
	}

	printf("array after multiply:\n\n");
	// print the array after multiply:
	for(int i=0; i<M; i++) {
    	for(int j=0; j<N; j++) {
        	printf("%d ", arr16[i][j]);
    	}
    	printf("\n");
	}
	printf("\n----------\n");

	// Strings
	
	// Write a program to find the length of a string.
	
	char str[] = "hello world";
	int g = 0;
	int length = 0;

	while(str[g] != '\0'){
		g++;
	}
	length = g;
	printf("The lenght of the string is %d\n",length);
	printf("The lenght of the string is %d\n",strlen(str));
	printf("\n----------\n");
	
	// Write a program to reverse a given string
	
	char str2[] = "hello world";
	char str3[strlen(str2)+1]; 
	char temp;
	int h = 0;
	int j = strlen(str2)-1;
	while(str2[h]!='\0'){
		str3[h] = str2[j];
		h++;
		j--;
	}
	//printf("%d\n",h);
	str3[h] = '\0';
	printf("reversed string is: %s\n",str3);
	printf("\n----------\n");

	// Extracting a Substring from a String

	char str4[21] = "My name is John Deer";
	char substr4[21]; 
	int pos4 = 4;
	int w = 0;	
	while(str4[pos4]!='\0'){
		substr4[w] = str4[pos4];	
		w++;
		pos4++;
	}
	substr4[w] = '\0';
	printf("sub string is:'%s'\n",substr4);
	printf("\n----------\n");

	return 0;
}

// functions definition

// Returns smallest number of an array.Args are:pointer to an array of integers, size of the array.
int find_smallest(int* p, int size){
	int smallest = p[0];// assume the first element is the smallest number
	for(int i=1;i<size;i++){
		if(p[i]<smallest){
			smallest = p[i];
		}
	}
	return smallest;
}

// Interchange in place the smallest and largest numbers of an array.
// Args: pointer to an array, size of the array
void interchange(int* p,int size){
	int pos = 0;// position of smallest number
	int pos2 = 0;// position of largest number
	int small = p[0], large = p[0];// initialization

	for(int i=1;i<size;i++){
		if(p[i] < small){
			small = p[i];
			pos = i;
		}
		if(p[i] > large){
			large = p[i];
			pos2 = i;
		}
	}
	int tmp = p[pos];
	p[pos] = p[pos2];
	p[pos2] = tmp;
	//printf("%d %d\n",pos,pos2);
	//for(int i=0;i< size;i++)
	//	printf("%d\n",p[i]);
}


