#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int number = 0;
    do
    {
        cout << Message  << endl;  
        cin >> number;            
    } while (number <= 0);        

    return number;
}

int NumberofFrequency(int number, short Digit) {
    int counter = 0;
    int reminder;
    while (number > 0) {
        reminder = number % 10;
        number= number/ 10;
        if (Digit == reminder) {
            counter++;
        }
    }
    return counter;
}
void Printthefrequencyodalnumbers(int number) {
    
    for (int i = 0; i <= 9; i++)
    {
        if (NumberofFrequency(number ,i) > 0 )
        cout << "frequency of number " << i << " is " << NumberofFrequency(number, i) << endl;
    }
}
int main() {
    int number= ReadPositiveNumber("Enter a positive number :");
   //short Digit = ReadPositiveNumber("Enter a digit to count the repeats ");
    Printthefrequencyodalnumbers(number);
    return 0;
}