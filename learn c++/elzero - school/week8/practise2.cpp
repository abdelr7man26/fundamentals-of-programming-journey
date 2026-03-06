#include <iostream>
using namespace std;

double convert_to_usd(double amount, string currency) // parameter
{
    double dollar = 50; // Assuming 1 USD = 50 EGP for conversion
    double egp = 1 / dollar;  
    if (currency == "usd" || currency == "USD")
    {
        cout << amount << " dollar is: " << amount * dollar << " EGP" << endl;
    }
    else if (currency == "eg" || currency == "EG")
    {
        cout << amount << " egp is: " << amount * egp << " USD" << endl;

    }
    else
    {
        cout << "The currency not supported right now." << endl;
    
    }
}

int main()
{
    double amount;
    string currency;
    cout << "Choose a currency to convert from (USD or EG): ";
    cin >> currency; // argument
    cout << "Enter the amount you want to convert: ";
    cin >> amount; // argument
    convert_to_usd(amount, currency); // argument
    return 0;
}