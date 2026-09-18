#include<iostream>
#include<cstring>
using namespace std;

int main(){

   char *str=new char[100];


   cout<<"Enter a string to reverse it:";
   cin.getline(str,100);
  
  
cout<<"Your reversed string is:";

  for(int size=strlen(str) ; size>=0 ; size--){

   cout<<*(str+size);

  }

  delete[] str;
 

return 0;
}