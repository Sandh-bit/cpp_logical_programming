#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
int digit;
    while (num > 9) {       // Repeat until single digit
        int sum = 0;
        while (num > 0) {   // Sum digits
            digit=num%10;
            sum+=digit;
            num=num/10;
        }
        num = sum;          // Replace n with sum of digits
    }

    cout << "Single digit result: " << num;
    return 0;
}
