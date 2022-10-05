// program to find the sum of positive numbers
//the loop ends if the user inputs a negative number

#include <iostream>

using namespace std;

int main() 
{
    int i;
    int sum = 0;

    cout << "Enter a number"<<endl;
    cin >> i;

    while (i >= 0) 
    {
        // this adds all positive numbers
        sum += i;

        // accept input again if the number inserted is positive
        cout << "Enter a number"<<endl;
        cin >> i;
    }

    // display the sum
    cout << "The sum is " << sum << endl;
    
    return 0;
}