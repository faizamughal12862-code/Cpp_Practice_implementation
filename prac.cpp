#include <iostream>
#include <string>
using namespace std;

int main() {
 
    int *ptr;
    int arr[5]= {1,2,9,4,5};
    cout<< *arr << endl;

    ptr = arr;
    cout<< *(ptr+2) << endl;

    
    int random = rand();
    cout<< random<< endl;

    int random2 = rand();
    cout<< random2 << endl;

    string name = "Faiza";
    string name2 = "Batool";
    cout << name.length();

    string combined = name +" " + name2;

    cout<< combined;




    return 0;
}