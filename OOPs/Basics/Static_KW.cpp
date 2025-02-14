#include<iostream>
using namespace std;

class A {
public:
    static int var_a;
    int var_b;
};

int A::var_a = 0;   //:: -> scope resolution operator

int main() {
    A obj, obj2;

    // cout << &A::var_a << endl;
    // cout << &obj.var_a << endl;
    // cout << &obj.var_b << endl;

    // cout << &obj2.var_a << endl;
    // cout << &obj2.var_b << endl;

    cout << obj.var_a << endl;
    obj2.var_a = 34;
    cout << obj.var_a << endl;

    // obj.var_b = 2;
    // cout << obj.var_b << endl;
    // obj2.var_b = 34;
    // cout << obj.var_b << endl;
    // cout << obj2.var_b << endl;


    return 0;
}