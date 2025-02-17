#include<iostream>
using namespace std;

class Friend {
private:
    int data;
public:
    Friend() : data(120) {}
    Friend(int new_data) : data(new_data) {}
    friend void fun(Friend&);
};

void fun(Friend& obj) {    // :: -> Scope Resolution Operator
    cout << "Private Data: " << obj.data << endl;
}

int main() {
    Friend obj(3254);

    fun(obj);

    return 0;
}