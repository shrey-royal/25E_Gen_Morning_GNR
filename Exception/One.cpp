#include <iostream>
using namespace std;

void division(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Trying to divide by zero.");
    }
    cout << a/b << endl;
}


int main() {
    string v = "abcd";
    cout << "Before Exception" << endl;

    try {
        cout << "In Try" << endl;

        v.reserve(100000000000);    // length_error
        division(12, 2);
        cout << v.at(10) << endl;    // out_of_range

        cout << "End Try" << endl;
    } catch(const out_of_range& e) {
        cerr << "Out Of Range Exception: " << e.what() << endl;
    } catch(const invalid_argument& e) {
        cerr << "Invalid Argument Exception: " << e.what() << endl;
    } catch(...) {
        cout << "Exception occurred..." << endl;
    }
    
    cout << "After Exception" << endl;

    return 0;
}