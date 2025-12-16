#include <iostream>
#include <string>
#include <sstream>

using namespace std;

long grossTotal(long a, int b);
int salesTax(long price, int quan);
long totalInvoive(long grosstotal, int tax, int quan);
int ageInYear(int year, int currYear);
void category(int age);
bool bankValidation(long balance, int amount);
long newBalance(long balance, int amount);
int calculateFine(int lateDays);
void msg(int lateDays, int fine);
long shipping(int kg, int km, string type);

float calculateAverage(int m1, int m2, int m3, int m4, int m5)
{
    return (m1 + m2 + m3 + m4 + m5) / 5.0;
}

char calculateGrade(float avg)
{
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

float convertGradeToGPA(char grade)
{
    switch (grade)
    {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default:  return 0.0;
    }
}


struct patient
{
    int date;
    int month;
    int year;
};

int main()
{

    // 1-->  Billing System — Calculate Total Invoice Amount

    long price;
    int quan;

    cout<< "Enter price of product: ";
    cin>> price;

    cout<< "Enter quantity of that product: ";
    cin >>quan;

    long grosstotal= grossTotal( price, quan);
    int tax= salesTax( price,  quan);
    long total=totalInvoive( grosstotal,  tax, quan);

    cout<< endl<< "Your Gross total for " << price << " rs and quanitites " << quan << " is "<< grosstotal << endl;
    cout<< "The sales tax on this product is: "<< tax << " rs." << endl;
    cout<< "Your total will be: "<< total;

    // 2nd // 2. Hospital Management — Patient Age & Category Calculation

    patient age;

    cout<< "Enter date: ";
    cin>> age.date;

    cout<< "Enter month: ";
    cin>> age.month;

    cout<< "Enter year: ";
    cin>> age.year;

    int currYear;
    int year = age.year;

    cout<< age.date<<"/"<< age.month<< "/"<< age.year<< endl;

    cout<< endl<< "Enter current year: ";
    cin >> currYear;
    int age1 = ageInYear( year, currYear);

    cout<< "Your age according to current year "<< currYear << " is "<< ageInYear( year, currYear)<< endl;
    cout << "Acording to your age, your are "; category(age1) ;

    
    // 3 -->> balance validation
    long balance = 1000;
    int amount;

    cout << endl << "Your current balance is: " << balance << endl;
   

    int choice;

     do
    {
        cout << "Enter the amount of money to withdraw: ";
        cin >> amount;

        bool ans = bankValidation(balance, amount);

        if (ans == true)
        {
            cout << "MOney withdraw succesfully! ";
            cout << endl<< "Your new balance is " << newBalance(balance, amount);
            balance = newBalance(balance, amount);
        }

        else
        {
            cout << "Your input doesnt satisfy the conditions...";
            break;
        }
        
        cout << endl<< "Do you want to withdraw more money(1/0): ";
        cin >> choice;

        

        if( balance == 0)
        {
            cout<< "-------------insufficient balance, please deposite money------";
            break;
        }


    }while (choice!=0);


    // 4 -->  library management
    
    int lateDays;
    cout<< "Enter number of late days: ";
    cin>> lateDays;

    int fine = calculateFine( lateDays);
    msg( lateDays,  fine);


    // 5--> Shipping cost
    
    int kg;
    int km;
    string type;
    cout<< "Enter weight of product: ";
    cin>> kg;

    cout<< "Enter distance: ";
    cin>> km;

    cout<< "Enter type of delivery(standard/express): ";
    cin>> type;

    cout<< "Your total shipping cost is: " << shipping( kg, km,  type) << " rs";


    // CGA Calculator 

    int s1, s2, s3, s4, s5;

    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    float avg = calculateAverage(s1, s2, s3, s4, s5);
    char grade = calculateGrade(avg);
    float gpa = convertGradeToGPA(grade);

    cout << "Average: " << avg << endl;
    cout << "Grade: " << grade << endl;
    cout << "GPA: " << gpa << endl;




    return 0;
}

// gross total
long grossTotal(long price, int quan)
{
    long total = price * quan;
    return total;
}

// sales tax for one item
int salesTax(long price, int quan)
{
    int tax = (price * 5) / 100;
    return tax;
}

// final total
long totalInvoive(long grosstotal, int tax, int quan)
{
    long total = grosstotal + (tax * quan);
    return total;
}

// age in years
int ageInYear(int year, int currYear)
{
    int age = currYear - year;

    return age;
}

// category
void category(int age)
{
    if (age < 18)
    {
        cout << "Teenager";
    }

    else if (age >= 18 && age < 30)
    {
        cout << "Adult";
    }
    else
    {
        cout << "Senior";
    }
}

bool bankValidation(long balance, int amount)
{
    if ((amount % 500 == 0) && (amount < 20000) && (amount <= balance))
        return true;
    else
        return false;
}

long newBalance(long balance, int amount)
{
    long newB = balance - amount;
    return newB;
}



int calculateFine(int lateDays)
{
    int fine;
    if(lateDays<=5)
    {
        fine = lateDays*10;

    }
    else if( (lateDays>5) && (lateDays< 10))
    {
        fine= lateDays*20;
    }
    else if(lateDays >10 && lateDays<30)
    {
        fine= lateDays*50;
    }

    return fine;

}

// for message
void msg(int lateDays, int fine)
{
    if(lateDays<30)
    {
        cout<< "Return book with fine of " << fine<< " rs.";
    }
    else 
    {
        cout<< "Book lost!";
    }
}


long shipping(int kg, int km, string type)
{
    long cost = 100+(50*kg)+(1*km);
    if(type == "express")
    {
        cost +=50;
    }

    return cost;
}



