//dekh: C++ program to print character 
 
#include <iostream>
using namespace std;

int main()
{
	int i, j;

	 //note:row count is 5    
int rows = 5;
	char character = 'A';

	 
	for (i = 0; i < rows; i++) {
	
	 
		for (j = 0; j <= i; j++) {
		
			 
			cout << character << " ";
		}
		cout << "\n";
	
		 
		character++;
	}
	return 0;
}
