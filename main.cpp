//
//  main.cpp
//  Payroll Stub
//
//  Created by Vladislav Palant on 2/13/25.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "Welcome to the Payroll Program!\n"; //Welcome
    
    int Hours, Children;// My names that give things variables
    double Hourly,Gross, SocSec, FedTax, StTax, Union, Ins, Net;
    
    cout << "\nHow many hours did you work this week?\n";// Asking questions
    cin >> Hours;
    cout << "\nHow many children do you have?\n";
    cin >> Children;
    cout << "\nWhat is your hourly pay?\n";
    cin >> Hourly;
    
    cout << "\nPayroll Stub:\n"; // Giving out the answers
    cout << "Hours: " << Hours << endl;
    cout << "Rate: " << Hourly << " $/hr" << endl;
    
    cout << fixed << setprecision(2);
    if (Hours <= 40) { // Gross pay math
        Gross = Hours * Hourly;
        cout << "Gross: $" << Gross << endl;
    } else {
        double overtimehours = Hours - 40.0;
        double OvertimeGross;
        OvertimeGross = (40.0 * Hourly) + (overtimehours * Hourly * 1.5);
        cout << "Gross: $" << OvertimeGross << endl;
    }
    
    // Deductions on Taxes
    SocSec = Gross * 0.06;
    cout << "\nSocSec: $" << SocSec << endl;
    FedTax = Gross * 0.14;
    cout << "FedTax: $" << FedTax << endl;
    StTax = Gross * 0.05;
    cout << "State Tax: $" << StTax << endl;
    cout << "Union: $10.00" << endl;
    if (Children >= 3) {
        cout << "Ins: $35.00" << endl;
        Net = Gross - (SocSec + FedTax + StTax + 10 + 35);
        cout << "\nNet: $" << Net << endl;
    } else {
        cout << "Ins: $15.00" << endl;
        Net = Gross - (SocSec + FedTax + StTax + 10 + 15);
        cout << "\nNet: $" << Net << endl;
    }
    
    return 0;
}
