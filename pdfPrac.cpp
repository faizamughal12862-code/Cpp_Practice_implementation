#include <iostream>
using namespace std;

int main()
{

    // 1. Write a program that input an integer and checks number is perfect ,deficit or
    // abundant.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        cout << "Number is perfect number.";
    }
    else if (sum > num)
    {
        cout << "Number is abundunt. ";
    }
    else
    {
        cout << "Number is deficit";
    }

    // . Write a program that input numbers and determines whether it is a palindrome.

    int tempNum;
    tempNum = num;
    int rev = 0;
    int rem = 0;
    while (tempNum > 0)
    {
        rem = tempNum % 10;
        tempNum /= 10;
        rev = (rev * 10) + rem;
    }

    if (rev == num)
    {
        cout << "number is palindrome. ";
    }
    else
    {
        cout << "Number isn't palindrome. ";
    }

    // 3. Write a program that input 10 numbers and find minimum comon divisor.note not
    // include 1.

    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }

    // bool found = false;
    // for (int i = 2; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         if (arr[j] % i == 0)
    //         {
    //             found = true;
    //         }
    //     }

    //     if(found)
    //     {
    //         cout<< "THe smallest commom divisor is " << i << " .";
    //         break;
    //     }
    // }

    // print a sequence 

    int first=1;
    int next;
    int diff=4;
    for(int i=0; i < num ; i++)
    {
        cout<< first << endl;
        next = diff+ first;
        first= next;
    }


    return 0;
}