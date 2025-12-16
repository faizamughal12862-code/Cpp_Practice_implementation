#include <iostream>
#include<vector>
using namespace std;

int main() {
    cout << "Enter array and then target --> if target exists in array, it'll return the index whos sum is that target number " << endl;
     int arr1[5];
    cout<< "Enter array: ";
    for(int i=0;i<5;i++)
    {
        cin>> arr1[i];
    }

    int target;
    cout<< "Enter Target: ";
    cin >> target;

   
        // [1,2,3,5,4]--> 5 + 4=9--> [3,4]

        for(int i=0; i< 5;i++)
        {
            for(int j=0;j < 5;j++)
            {
                if(arr1[i] + arr1[j] == target)
                {
                    cout<< i << " , " << j  << endl ;
                }

            }
            
        }

   // Given an array nums of integers, return how many of them contain an even number of digits.
cout<< endl << " Given an array nums of integers, return how many of them contain an even number of digits." << endl;
   int arr2[5]={1,2,3,4,5};

   int count=0;

   for(int i=0;i<5;i++)
   {
        if(arr2[i]%2==0)
        {
            count++;
        }
   }
   cout<< count;

// array [-2, -1, 0, 2, 5]
// we gotta square its elemnets

cout<<endl << "square of elements in array ( {-2, -1, 0, 2, 5})" << endl;
int arr3[5]={-2, -1, 0, 2, 5};

for(int i=0; i< 5; i++)
{
    arr3[i]= (arr3[i]*arr3[i]);
}

for (int i=0; i< 5; i++)
{
    cout<< arr3[i]<< endl;
}

// sort array from smaller to largest
// [0, 2,3,4,5]

// i guesss we shoulld use pointers for that...WORKING ON IT 

    return 0;
}
