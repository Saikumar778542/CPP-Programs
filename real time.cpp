//Real time example using template function
#include<iostream>
using namespace std;
template <typename T>
T calculateInterest(T principal, T rate, int years) {
    return (principal * rate * years) / 100;
}

int main() {
    std::cout << "Interest on int: " << calculateInterest(1000, 5, 2) << endl;
    std::cout << "Interest on double: " << calculateInterest(1050.75, 4.5, 3) << endl;
}
