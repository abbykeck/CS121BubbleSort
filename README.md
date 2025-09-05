# Algorithm for bubblesort.c
## Algorithm for main
1. create the array that needs to be sorted
1. print out the array and label it "before"
1. make variables and fill them with int values for testing the swap function
1. print these variables
1. test the swap function by calling it with the test values
1. print the test values again to make sure the swap function works
1. call the sort function with the array that needs to be sorted
1. print out the array and label it "after"
1. end main
## Algorithm for sort
0. parameter: int pointer
1. for i from zero to MAX - 1
    1. for j from zero to MAX - 1
        1. if array[j] > array[j+1]
            1. swap array[j] with array[j+1]
            1. printArray(array)
            1. end if
	    1. end for j
1. end for i
1. end sort
## Algorithm for swap
0. parameters: int pointer a, int pointer b
1. create an int variable to temporarily hold one of the values
1. assign the value at a to temp
1. assign the value at b to where a is
1. assign the value of temp to where b is
1. end swap
## Algorithm for printValue
0. parameter: int pointer
1. print a bracket
1. for every element in array from i = 0 to i = length - 1
    1. print the element at index i and a space
1. end for
1. print a closing bracket
1. end printValues 
