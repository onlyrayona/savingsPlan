// Lab 5
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main ()
{

// input values

//code block to read savings period from keyboard as int
int years;  //savings period in years
cout << "How many years until retirement? ";
cin >> years;
cin.ignore(1000, 10);

//code block to read annual interest rate from keyboard as floating point value
double annualInterest; //annual interest rate
cout << "What is the expected annual interest rate? ";
cin >> annualInterest;
cin.ignore(1000, 10);

//code block to read monthly deposit amount from keyboard as int
int D ;  //monthly deposit amount
cout << "What is the monthly deposit amount? ";
cin >> D;
cin.ignore(1000, 10);

// output (calculated) values

double p = annualInterest/ 100 / 12; // monthly interest rate as a decimal
double T = years * 12;  // savings period in months
double S = D * ((pow(1 + p, T) - 1) / p);  //total savings

// echoing input values, unformatted

cout << "In " << years << " years at " << annualInterest << "%, $";
cout << D << " deposited per month will grow to $";

// formatted output

cout.setf(ios::fixed|ios::showpoint);
cout << setprecision(2);
cout << S << "." << endl;

}