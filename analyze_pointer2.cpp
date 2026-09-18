#include<iostream>
using namespace std;

void analyze_pointer(int *ptr){

	cout << "Memory Location pointed by pointer " << ptr << endl;

	cout << "Value present at the memory location " << *ptr;
}

int main(){
       
	int a = 5;
	

	int* b = new int;

	*b = 5;


	analyze_pointer(&a);
	cout << endl;
	analyze_pointer(b);



	system("pause");
	return 0;
	
}