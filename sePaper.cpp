#include <iostream>
using namespace std;

int grade(int marks);
int discount(int price);
int vowel(string str);
double cube(double num2);

struct student{
    int rollNo;
    int marks;
};
int main() {

    // Q2 (a)

    student arr[5];
    int passCount=0;
    int failCount=0;

    for(int i=0; i<5; i++)
    {
        cout<< "Enter the roll no of student " << i+1 << " : ";
        cin>> arr[i].rollNo;

        cout<< "Enter marks of student " << i+1 << " : ";
        cin>> arr[i].marks;

        cout<< i+1 << " added successfully! " << endl;

        cout << endl<< " --------Result--------------"<< endl;
        if(grade(arr[i].marks))
        {
            passCount++;
            cout<< "Student with roll No " << arr[i].rollNo << " is passed! with marks " << arr[i].marks << endl;
        } else 
        {
            failCount++;
            cout<< "Student with roll No " << arr[i].rollNo << " is Failed! with marks " << arr[i].marks << endl;
        }

    }

    cout<<endl<<  "_________Summary_________"<< endl;
    cout<< "Total passed: " << passCount<< endl;
    cout<< "Total Failed: " << failCount;    

    // Q2 (b)
    int arr2[5];
    int *ptr = arr2; // --> pointer now points towards the 1st element of array 
    int total=0;

    for (int i=0; i< 5; i++)
    {
        cout<< "Enter price for product " << i+1 << " : ";
        cin>> *(ptr+i); // storing the price in array using pointer 

        int orgPrice = *(ptr+i);

        cout<< endl<< "Orignal Price is: " << orgPrice<< endl;

        int discPrice = discount(*(ptr+i));
       
        if ( discPrice != orgPrice)
        {
            cout<< "Discount Applied! New price is: " << discPrice << endl;
        } else 
        {
            cout<< "Price < 500 , No discount!" << endl;
        }

        *(ptr+i) = discPrice;

        total += *(ptr+i);
    }

    cout<< "Total Bill Is:  " << total<< endl;

    // Q3(a)
    int arr3[20];
    int oddSum=0;
    int evenSum=0;
    int evenCount=0;
    int oddCount=0;


    for (int i=0; i< 2; i++)
    {
        cout<< "Enter number " << i+1;
        cin>> arr3[i];

        if(arr3[i]%2==0)
        {
            evenSum+=arr3[i];
            evenCount++;
        } else 
        {
            oddSum+=arr3[i];
            oddCount++;

        }
    }

    cout<< "Total even elements are: " << evenCount<< endl;
    cout<< "Total odd elements are: " << oddCount<< endl;

    // Q3(b)
    int num=10;
    do
    {
        cout<< num << endl;
        num--;
    } while (num>0);

    // Q3 (c)

    int arr4[5];
    
    for(int i=0; i< 5 ; i++)
    {
        cout<< "Enter element " << i+1;
        cin>> arr4[i];
    }
    int max= arr4[0];

    for(int i=0; i< 5; i++)
    {
        if(arr4[i]> max)
        {
            max= arr4[i];
        }
    }
    cout<< "The max number in array is: " << max << endl;


    // Q#3(d)
    string input;
    cout<< "Enter a string: ";
    cin >> input;

    int countV = vowel(input);
    cout<< "The numbr of vowels in string are " << countV << endl;

    // Q3(e)

    double num2;
    cout<< " Enter a number: ";
    cin>> num2;

    double cubeOfNum = cube(&num2);

    cout<< "Cube of Number is " << cubeOfNum << endl;


    return 0;
}


// functions
int grade(int marks)
{
    if(marks>=50)
    {
        return 1;
    } else 
    return 0;
}

int discount(int price)
{
    if(price > 500)
    {
        price = price - ((price *10 )/ 100);
       
    }
    return price;
}

int vowel(string str)
{
    int count;
    for(int i=0; i< str.length(); i++)
    {
        char ch= str[i];
        if(ch == 'a'|| ch== 'e' || ch== 'i'|| ch =='o' || ch=='u' )
        {
            count++;
        }
    }
    return  count;
}    

double cube(double *num2)
{
    return *num2 * *num2 * *num2;
}