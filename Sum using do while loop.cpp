// this a program to find the sum of positive numbers using the do while loop
//the loop ends if the user inputs a negative number

#include <iostream>

using namespace std;

int main() 
{
    int i = 0;
    int sum = 0;

    do 
    {
        sum += i;

        // the user point of input
        cout << "Enter a number"<<endl;
        cin >> i;
    }
    while (i >= 0);
    
    // point for sum to be displayed
    cout << "The sum is " << sum << endl;
    
    return 0;
}