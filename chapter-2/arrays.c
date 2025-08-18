#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int arr3[10] = {4,2,3,4,2,3,7,8,1,9};

	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(arr3[i] == arr3[j]){
				printf("Dublicate number is: %d\n",arr3[i]);
				printf("Found at positions: arr3[%d] and arr3[%d]\n", i, j);
			}
		}
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


















	return 0;
}

