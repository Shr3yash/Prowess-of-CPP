#include <iostream>
using namespace std;

int main(){

int *p = NULL;
p = new int;

//or

int *x = new(nothrow) int(10);

//nothrow to not throw any error when memory is not allocated if the heap is full
//Dynamically allocates memory for 10 integers continuously of type int and returns pointer to the first element of the sequence,
//which is assigned to p(a pointer). p[0] refers to first element, p[1] refers to second element and so on.

//arrays get deallocated after execution but the arrays created by this method doesnt get dealocated unless user puts delete


delete p;       //to deallocate the pointer pointing to the memory block created with new
delete[] x;     //to deallocate entire array created with new keyword


}
