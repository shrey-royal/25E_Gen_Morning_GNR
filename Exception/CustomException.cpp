#include <iostream>
#include <exception>
using namespace std;

class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Division by zero!";
    }
};

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw DivisionByZeroException();
    }
    return numerator / denominator;
}

int main() {
    double a = 10.0;
    double b = 0.0;

    try {
        double result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch(const DivisionByZeroException& e) {
        cout << e.what() << endl;
    }

    return 0;
}