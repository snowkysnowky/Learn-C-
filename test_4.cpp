#include <iostream>
using namespace std;

int main(){
    double Sales = 95000;
    const double StateTaxRate = 0.4; 
    const double CountryTaxRate = 0.2;
    double StateTax = Sales * StateTaxRate;
    double CountryTax = Sales * CountryTaxRate;
    double TotalTax = StateTax + CountryTax;

    cout << "sales       = $" << Sales << endl 
         << "State tax   = $" << StateTax << endl 
         << "Country tax = $" << CountryTax << endl
         << "Total tax   = $" << TotalTax << endl;

    return 0;
}