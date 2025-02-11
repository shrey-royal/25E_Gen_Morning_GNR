#include<iostream>
using namespace std;

class Dummy {
private:
    char** names;
    int rows;
    
public:
    Dummy(int rowCount, int maxNameLength) : rows(rowCount) {
        names = (char**)malloc(rows * sizeof(char*));

        if (!names) {
            cerr << "Memory allocation for names failed!\n";
            exit(EXIT_FAILURE);
        }

        for(int i=0; i<rows; i++) {
            names[i] = (char*)malloc((maxNameLength + 1) * sizeof(char));
            if(!names[i]) {
                cerr << "Memory allocation for name row " << i << " failed!\n";
                exit(EXIT_FAILURE);
            }

            //Assign sample names
            snprintf(names[i], maxNameLength + 1, "Name%d", i+1);
        }
        cout << "Constructor called!" << endl;
    }

    void displayNames() {
        for (int i = 0; i < rows; i++) {
            cout << names[i] << endl;
        }
    }

    //Destructor
    ~Dummy() {
        for (int i = 0; i < rows; i++) {
            free(names[i]);
            names[i] = NULL;
        }
        free(names);
        names = NULL;
        cout << "Destructor called!" << endl;
    }
};

void fun() {
    Dummy obj(5, 10);
    obj.displayNames();
}

int main() {
    fun();

    fun();

    return 0;
}


/*
Destructor:
    - A special method which gets called automatically when the objects goes out of scope.

Rules:
- Same as constructor but without any parameters and return type
- Starts with a tilde(~) sign.
*/