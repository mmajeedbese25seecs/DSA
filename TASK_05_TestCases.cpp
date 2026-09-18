#include<iostream>
#include<assert.h>
using namespace std;

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {   // BUG
            return false;
        }
    }
    return true;
}


//Test Case 1
void testSortedArray(){

    int arr[]={1,2,3,4,5};
    bool result=isSorted(arr,5);

    assert(result==true);
cout<<"SortedArray Test Passed";

}

//Test Case 2
void testUnsortedArray(){
      int arr[]={7,3,8,4,5};

      bool result=isSorted(arr,5);

      assert(result==false);
cout<<"UnSortedArray Test Passed!";

}

//Test Case 3
void testDuplicateValues(){

    int arr[]={1,2,2,4,5};
    bool result=isSorted(arr,5);

    assert(result==true);
cout<<"Duplicate values Test Passed";

}

//Test case 4
void testSingleElement(){

    int arr[]={1};
    bool result=isSorted(arr,1);

    assert(result==true);
cout<<"testSingleElement Test Passed";

}

//Test case 5
void testDescendingArray(){

    int arr[]={5,4,3,2,1};
    bool result=isSorted(arr,5);

    assert(result==false);
cout<<"Descending Array Test Passed";

}

//Test case 6
void testNegativeValues(){

    int arr[]={-2,-1,0,1,2};
    bool result=isSorted(arr,5);

    assert(result==true);
cout<<"testNegativeValues Test Passed";

}

//Test case 7
void testEmptyArray(){

    int arr[]={0};
    bool result=isSorted(arr,0);

    assert(result==true);
cout<<"EmptyArray Test Passed";

}

//Test case 8
void testAllEqualElements(){

    int arr[]={6,6,6,6,6};
    bool result=isSorted(arr,5);

    assert(result==true);
cout<<"AllEqualElements Test Passes";

}


int main(){

    cout<<"Testing Cases"<<endl;
    //1
    testSortedArray();
    cout<<endl;
    //2
    testUnsortedArray();
     cout<<endl;
    //3
    testDuplicateValues();
     cout<<endl;
    //4
    testSingleElement();
     cout<<endl;
    //5
    testDescendingArray();
     cout<<endl;
    //6
    testNegativeValues();
     cout<<endl;
    //7
    testEmptyArray();
     cout<<endl;
    //8
    testAllEqualElements();
     cout<<endl;
   
    return 0;

}