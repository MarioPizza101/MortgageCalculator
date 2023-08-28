#include <iostream>
#include <cmath>

int main(){

    double principal = 100000;
    double rate = 6;
    double numberOfMonths = 180;

    // Convert Rate
    rate = (rate / 100) / 12;

    // Equation
    double monthlyPayment = principal * ((rate * pow(1 + rate, numberOfMonths)) / (pow(1 + rate, numberOfMonths) - 1));

    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;

    return 0;
}
