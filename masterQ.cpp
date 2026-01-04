#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void primeCheck( int num4);
void swapNum( int *a , int *b);

struct student
{
    int id;
    int marks;
};

int main()
{

    // Input 5 integers in an array
    int arr[5];
    int max = 0;
    int evenCount = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter no " << i + 1 << " : ";
        cin >> arr[i];

        //  find the largest element.
        if (arr[i] >= max)
        {
            max = arr[i];
        }

        // Count how many elements in an array are even.
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    cout << "Max element from array is: " << max << endl;
    cout << "Count of even elements in given array are: " << evenCount;

    // Print the reverse of a number using a loop.
    // -->> 234 to 432

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rev = 0;
    int rem;
    int orgNum=num;
    while(num>0)
    {
        rem = num % 10;
        num /= 10;
        rev = (rev * 10) + rem;
    }

    cout<< "The reverse of number " << orgNum << " is " << rev<< endl;

    // Write a program that takes an integer and prints whether it is positive, negative, or zero.
    int number;
    cout<< "Enter a number: ";
    cin>> number;

    if(number > 0)
    {
        cout<< "Number is +ive";
    }
    else if(number < 0)
    {
        cout<< "Number is -ive";
    } else
    cout<< "Number is zero";

    // Input two numbers and swap them without using a third variable.

    int numA = 2;
    int numB = 3;

    // a= 2, b=3 --> we gotta make a=3, b=2
    numA= numA+numB; // --> a=5
    numB = numA-numB; //--> b= (5-3) = 2
    numA= numA-numB;

    cout<< numA << " , " << numB;

    // Take a character as input and check whether it is a vowel or consonant.

    char letter = 'H';

    switch (letter)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << "Vowel";
        break;

    default:
    {
        cout << "consuannt";
    }
    }

    // Write a program to check if a number is even or odd using bitwise operator
    int num1=5;

    if(num1 & 1) //-->  binary of 5 = 0101, and binary of 1 = 0001 --> if 5&1 == 0001 --> conditon true --> number is odd other wise even
    {
        cout<< "NUmber is odd";
    } else
    {
        cout << "Number is even";
    }

    // Print the sum of first n natural numbers

    int num2 = 5;
    int sum=0;

    for(int i=1; i<= num2; i++)
    {
        sum= sum+i;
    }

    cout<< "Sum of numbers from 0 to " << num2 << " is " << sum;

    // Input a 2×3 matrix and print it.
    int arr2[2][3]; //--> 1 2 3
                    //    4 5 6

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Find the sum of each row of a 2D array.

    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr2[i][j];
        }
        cout << "Sum of elements of row " << i + 1 << " is " << sum << endl;
    }

    int num4 = 2;
    primeCheck( num4);

    // Declare a pointer to an integer and print the value using the pointer.
    int num5 = 7;
    int *ptr;

    ptr = & num5; // --> stoes the adress of num5 
    cout<< *ptr; //--> * will dereference the adress by giving the value at num5 .


    int a= 5;
    int b=3;

    swapNum(&a ,&b);

    // Create a structure Student with id and marks, input and display data.

    student s;
    cout<< "Enter id for student: ";
    cin>> s.id;

    cout<< "Enter marks for student: ";
    cin>> s.marks;

    cout<< "The id of student is " << s.id << " and his marks are " << s.marks;

    // Write a program to write a string into a file.

    ofstream temp ("temp.txt", ios:: app);
    string line = "This is smth shitty stuff that i dont even know.";

    temp << line;
    
    temp.close();
    // Read and display content from a file.

    ifstream temp2("temp.txt");
    string line2;

    while(getline(temp2, line2))
    {
        cout<< line2;
    }

    temp2.close();

    return 0;
}

// Write a function to check if a number is prime. 
void primeCheck( int num4)
{
    if (num4 == 0 || num4 == 1 )
    {
        cout<< "Number is not  prime.";
        return;
    }
     // num = 7
    for (int i=2;  i< num4; i++)
    {
        if (num4 % i == 0)
        {
            cout<< "Number is not a prime number. ";
            return;
        } 
    }

    cout << "Number is a prime number";
}

// Write a function that swaps two numbers using pointers.
void swapNum( int *a , int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b= temp;

    cout<< "After swap: " << *a << " , " << *b;
}