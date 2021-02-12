// Credit plan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// you have just purchased a steroe system for $1000 on the following credit plan
// no down payment, interest rate of 18% so 1.5% per month, with monthly payments of $50.
// that 50 is used to pay the inital interest and then pay of the debt, so for the first payment it would be 1000 + 1.5% which is $15
//after this is paid the 50 - interest (35)is took away from the debt = 965 and this repeats, 965 + 1.5%  which is $14.48, so 35.52 is took  away from the debt, 965 - 35.52

int main()
{
    const int payment = 50;
    const double yearly_interest = 0.18, monthly_interest = 0.015; // times the price by these then add the price back on
    int months = 0, debt_reduction;
    double debt = 1000, interest_amount, total_interest = 0;

    while (debt > 50)
    {
        interest_amount = (debt * monthly_interest);
        
        debt_reduction = payment - interest_amount;
        
        total_interest = total_interest + interest_amount;
        
        debt = debt - debt_reduction;
        
        months++;
        cout << "-------------" << endl;
        cout << "this is for month " << months << endl;

        cout << "interest for this month was  $" << interest_amount << endl;

        cout << "The debt left after this month is $" << debt << endl;
        cout << "------------------" << endl;
        
    }
   
    cout << "the total interest paid was $" << total_interest << endl;
    cout << "It took " << months << " months to pay off the debt";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
