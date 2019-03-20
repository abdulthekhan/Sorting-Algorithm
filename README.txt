

IMPORTANT NOTES:
*******MAKE SURE YOU RUN testSort2 PROGRAM**********

Homework Question:

1. Suppose you were given an object module (with no access to source code) that sorted an array of integers very efficiently. 
   However, the sort function in the object module must be invoked with the following signature:

   betterSort(int data[], first, last);
 
   where the array to sort is data and the parameters first and last give the indices of the portion of the array that is to be sorted.
   How could you write a mySort() function with the signature used in this lab that could exploit the better sorting function in the supplied object module?

Answer:

The betterSort function sorts the elements of the data array between the index parameters. The mySort function passes down the "data" array into the betterSort
function and this allows the user to enter his/her choice of index parameters.
The betterSort function sorts from the 0th index, where 0 is the first element (location) to "n-1" which is the last index of what is to be sorted.
The way it can be implemented is shown below:

void mySort (int d[], unsigned int n)
{
	betterSort (d[], 0, n-1);
}

**Known Bugs**
1.I had a typo (naming convention) issue for the sortMain.c program where you had to include the library for mySort.h. Instead of it being written as mySort.h,
  it was written as mysort.h and it caused an issue when the main program was trying to import the code due to the compiler not telling me where the error was
  in.

**Change Log**
- The bugs have been corrected and no new known issues have shown up. Everything is working perfectly as of the date listed above.
