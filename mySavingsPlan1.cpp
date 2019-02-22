// Lab 4
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

int years = 20;  //savings period in years
int D = 1500;  //monthly deposit amount
double annualInterest = 12.5; //annual interest rate

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