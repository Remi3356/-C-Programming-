//This is a program to calculate the sum of inbetween certain numbers of the users choice using the for loop.

#include <iostream>

using namespace std;

int main()
{
   int i,x,y,sum=0;
   cout <<"enter the starting point"<<endl;
   cin>>x;
   cout<<"enter the ending point"<<endl;
   cin>>y;
   // Using the for loop for repetition control structure that allows us to write a loop that is executed a specific number of times. 
   for(i=x;i<=y;i++)
      {
          cout<<i<<endl;
          sum+=i;
      }
      cout<<"The sum of the numbers from "<<x<<" to "<<y<<" is "<<sum;
      return 0;
}
