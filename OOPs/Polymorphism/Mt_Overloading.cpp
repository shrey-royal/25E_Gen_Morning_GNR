#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 numbers: " << calc.add(5, 10) << endl;
    
    cout << "Sum of 3 numbers: " << calc.add(5, 10, 15) << endl;

    return 0;
}

/*
In this example, the add function is overloaded with two versions: one takes two parameters, and the other takes three. The compiler determines which version to call based on the number of arguments provided during the function call.
*/