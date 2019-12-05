//Rabia_Ahmad
//12-03-19
//Unit_8_Assignment

//Recursive function contains a call to itself. They are used to reduce a complex problem to a simpler-to-solve problem.  


#include <iostream>
using namespace std;

int factorial(int);

int main() 
{
  int num;

  //Input number from user
  cout << "Enter an integer and I will show its' factorial. " << endl;
  cin >> num;

  //Display the factorial
  cout << "The factorial of " << num << " is " << factorial(num) << endl;


  return 0;
}

int factorial(int n)
{
  if (n==0)
      return 1;         //base case 
  else
    return n * factorial(n - 1);      //recursive case 
}