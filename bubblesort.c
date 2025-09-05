/*  algorithm for main
 * 1. create the array that needs to be sorted
 * 2. print out the array and label it "before"
 * 3. make variables and fill them with int values for testing the swap function
 * 4. print these variables
 * 5. test the swap function by calling it with the test values
 * 6. print the test values again to make sure the swap function works
 * 7. call the sort function with the array that needs to be sorted
 * 8. print out the array and label it "after"
 * 9. end main 
 */
// starter code

#include <stdio.h>

const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main
  
/*
 * algorithm for sort
 * 0. parameter: int pointer
 * 1. for i from zero to MAX - 1:
       i. for j from zero to MAX - 1:
           a. if array[j] > array[j+1]:
              1. swap array[j] with array[j+1]
              2. printArray(array)
	   b. end if
       ii. end for j
   2. end for i
 * 3. end sort
*/
void sort(int* array) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (array[j] > array[j + 1]) {
				swap(array + j, array + j + 1);
				printValues(array);
			} // end if
		} // end for j
	} // end for i
} // end sort

/* algorithm for swap
 * 0. parameters: int pointer a, int pointer b
 * 1. create an int variable to temporarily hold one of the values
 * 2. assign the value at a to temp
 * 3. assign the value at b to where a is
 * 4. assign the value of temp to where b is
 * 5. end swap
*/
void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
} // end swap

/* algorithm for printValues
 * 0. parameter: int pointer
 * 1. print a bracket
 * 2. for every element in array from i = 0 to i = length - 1
 * 	i. print the element at index i and a space
 * 3. end for
 * 4. print a closing bracket
 * 5. end printValues
*/
void printValues(int* array) {
	printf("[");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", array[i]);
	} // end for
	printf("] \n");
} // end printValues
