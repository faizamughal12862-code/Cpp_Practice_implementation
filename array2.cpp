#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    // Find the sum of all elements in an array.

    int sum = 0;  
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of elements of array is " << sum << endl;

    // Find the maximum and minimum element in an array.
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout << "Max value in array is: " << max << endl;
    cout << "Min value in array is: " << min << endl;

    // Count even and odd numbers in an array.

    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "The number of even elements in array are " << countEven << endl;
    cout << "The number of odd elements in array are " << countOdd << endl;

    // Reverse the array
    int orgArr[5];

    // Copy one array into another manually (no shortcuts).

    for (int i = 0; i < 5; i++)
    {
        orgArr[i] = arr[i];
    }

    // reversing

    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = orgArr[4 - i];
        arr[i] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Find the second largest element in an array.

    int secMax = min;
    for(int i=0; i< 5; i++)
    {
        if((arr[i]< max) && ( arr[i] > min))
        {
            if(arr[i]> secMax)
            {
                secMax=arr[i]; 
            }
        }
    }
    cout<< secMax;

    // Count the frequency of each element in an array.

    int arr2[4]={ 2,3,4,2};

    for(int i=0; i< 5; i++)
    {
        int count =0;
        for (int j=0; j< 4; j++)
        {
            if(arr2[i]== arr2[j])
            {
                count++;
            }

        }
        cout<< "Element " << arr2[i] << " appeared for " << count << "times. " << endl;
    }

    // merge two arrays 

    // int arr[5] = {1, 2, 3, 4, 5};
    //  int arr2[4]={ 2,3,4,2};
    // int newArr[9]

    int len= sizeof(arr)/sizeof(arr[0]); //--> 5
    int len1 = sizeof(arr2)/ sizeof(arr2[0]); //--> 4

    int newLen = len+ len1; //-->9

    int newArr[9];

    for(int i=0; i< 5 ; i++)
    {
        newArr[i] = arr[i];
    }
    for(int i=0; i< 4 ; i++)
    {
        newArr[len+i]= arr2[i];
    }

    for(int i=0; i< newLen ; i++)
    {
        cout<< newArr[i] << " ";
    }






    return 0;
}


/* Beginner (Basics & Traversal)
🟡 Intermediate (Logic & Patterns)

Check if an array is sorted (ascending or descending).

Left rotate the array by one position.

Right rotate the array by k positions.

Insert a new element at a given position in the array.

Delete a specific element from the array.

Find duplicate elements in an array.

Remove duplicates and print the updated array.

Merge two sorted arrays into a single sorted array.

🔵 Advanced (Algorithmic Thinking)

Find the missing number in a sequence (e.g., 1 to N).

Find the pair of elements whose sum equals a target number.

Move all zeroes to the end while maintaining the order of non-zero elements.

Find the longest subarray with a given sum.

Rotate an array 90 degrees (if it’s a 2D array / matrix) */