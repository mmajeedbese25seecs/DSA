#include<iostream>
using namespace std;

void analyze_pointer(int *ptr){

	cout << "Memory Location pointed by pointer " << ptr << endl;

	cout << "Value present at the memory location " << *ptr;
}

int main(){
       
	int a = 5;
	int *ptr1 = &a;

	analyze_pointer(ptr1);


	system("pause");
	return 0;
	
}