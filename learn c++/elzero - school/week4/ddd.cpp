#include <iostream>
#include <vector>
#include <string>
using namespace std;

int apply(char op, int a, int b) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 1e9; 
        case '%': return b != 0 ? a % b : 1e9;
    }
    return 1e9;
}

int main() {
    vector<int> nums = {10, 20, 15, 3, 190, 10, 400};
    vector<char> ops = {'+', '-', '*', '/', '%'};
    
    for (char o1 : ops)
    for (char o2 : ops)
    for (char o3 : ops)
    for (char o4 : ops)
    for (char o5 : ops)
    for (char o6 : ops) {
        int r1 = apply(o1, nums[0], nums[1]);
        int r2 = apply(o2, r1, nums[2]);
        int r3 = apply(o3, r2, nums[3]);
        int r4 = apply(o4, r3, nums[4]);
        int r5 = apply(o5, r4, nums[5]);
        int r6 = apply(o6, r5, nums[6]);

        if (r6 == 0) {
            cout << "Found: "
                 << "10 " << o1 << " 20 "
                 << o2 << " 15 "
                 << o3 << " 3 "
                 << o4 << " 190 "
                 << o5 << " 10 "
                 << o6 << " 400 = 0\n";
        }
    }

    return 0;
}
