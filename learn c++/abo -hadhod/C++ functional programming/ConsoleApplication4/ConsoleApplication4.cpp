#include <iostream>
using namespace std;

string numbers_To_Strings(long long number) {
    if (number == 0)
        return "";

    if (number <= 19) {
        string Snumber[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                             "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                             "Seventeen", "Eighteen", "Nineteen" };
        return Snumber[number];
    }

    if (number >= 20 && number <= 99) {
        string arr[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
        return arr[number / 10] + (number % 10 ? " " + numbers_To_Strings(number % 10) : "");
    }

    if (number>= 100 && number <= 999) {
        return numbers_To_Strings(number / 100) + " Hundred" +
            (number % 100 ? " " + numbers_To_Strings(number % 100) : "");
    }

    if (number >= 1000 && number <= 999999) {
        return numbers_To_Strings(number / 1000) + " Thousand" +
            (number % 1000 ? " " + numbers_To_Strings(number % 1000) : "");
    }

    if (number >= 1000000 && number <= 999999999) {
        return numbers_To_Strings(number / 1000000) + " Million" +
            (number % 1000000 ? " " + numbers_To_Strings(number % 1000000) : "");
    }

    if (number >= 100000000 && number <= 999999999999) {
        return numbers_To_Strings(number / 1000000000) + " Billion" +
            (number % 1000000000 ? " " + numbers_To_Strings(number % 1000000000) : "");
    }

    return "Number out of range";
}

int main() {
    
    cout << numbers_To_Strings(956156155540);
}
