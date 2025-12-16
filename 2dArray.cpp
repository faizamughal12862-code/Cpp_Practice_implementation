#include <iostream>
using namespace std;

int main() {

    int arr1[2][3]={{1,2,3},{2,3,4}};
    int arr2[3][2]={{1,2},{2,3},{4,5}};
    int result[2][2]; // roows from arr1 and collumn from arr2 


    // multiplication of two matrices -->>> columns in A ==  rows in B


    // -->>> this is what actually we have to do

    // result[0][0]= (arr1[0][0] * arr2[0][0]) + (arr1[0][1] * arr2[1][0]) + (arr1[0][2] * arr2[2][0]);
    //  -->> 17

    // result[0][1]= (arr1[0][0] * arr2[0][1]) + (arr1[0][1] * arr2[1][1]) + (arr1[0][2] * arr2[2][1]);
    //  -->> 23 
    
    // result[1][0]= (arr1[1][0] * arr2[0][0]) + (arr1[1][1] * arr2[1][0]) + (arr1[1][2] * arr2[2][0]);
    // -->> 24 

    // result[1][1]= (arr1[1][0] * arr2[0][1]) + (arr1[1][1] * arr2[1][1]) + (arr1[1][2] * arr2[2][1]);
    // -->>> 33

    // cout << result[0][0];
    // cout << result[0][1];
    // cout << result[1][0];
    // cout << result[1][1];
    
    
    int result1=0;



    for(int i=0; i< 2; i++) // for rows 
    {
        for(int j=0; j<2; j++) // for columns 
        {
            for(int k=0; k<3; k++)
            {
                 

                result1+= (arr1[i][k] * arr2[k][j]);

                // result[i][j] += (arr1[i][k] * arr2[k][j]); 
                // -->> same ans will be printed if u wanna use it ...if u are goinf to use this methos then add {0} infront of result[2][2] array... and remove these two statements from below -->>  result[i][j]=result1; result1=0;
                

            }
            result[i][j]=result1;
            result1=0;
        }
    }

    // EXplanation for K-->>> now why did we use K.... coz when we solving/ multiplicating matrix, we noticed that when iteration is at 0 (i=0, j=0) ... some values matches i and j values while other changes, so to match and get actual result we introduced another loop for K ...that stores itself in places of values that are changing and help us get actual result. 


    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<< result[i][j]<< " ";
        }
    }
    
    return 0;
}
