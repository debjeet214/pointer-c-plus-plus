#include <iostream>
using namespace std;

int main()
{

	int a = 10; // stored in stack
	int* p = new int(); // allocate memory in heap
	*p = 10;
	delete (p);  // delete operator to destroy the object, variable that is created using new operator dynamically.
	p = new int[4]; // array in heap allocation
	delete[] p;
	p = NULL; // free heap
	return 0;
}
