#include <iostream>
using namespace std;
class base {
public:
    void print() {
        cout << "base::a = " << a << endl;
        cout << "base::b = " << b << endl;
    }
    base() {
        cout << "base::base()" << endl;
        a = 1;
        b = 1;
    }
    base(int i, int j) {
        cout << "base::base(int i, int j)" << endl;
        a = i;
        b = j;
    }
    ~base() {
        cout << "base::~base()" << endl;
    }
protected:
    int a;
    int b;
};

class derive : public base {
public:
    void print() {
        cout << "derive::a = " << a << endl;
        cout << "derive::b = " << b << endl;
    }
    derive() : base(3,3) {
        cout << "derive::derive()" << endl;
    }
    derive(int i, int j) : base(i, j) {
        cout << "derive::derice(int i, int j)" << endl;
    }
    ~derive() {
        cout << "derive::~derive()" << endl;
    }
};

int main() {
    base* a = new base(1, 2);
    cout << "-----------------------" << endl;
    derive* b = new derive();
    cout << "-----------------------" << endl;
    a->print();
    b->print();
    cout << "-----------------------" << endl;
    base c(10, 10);
    cout << "-----------------------" << endl;
    derive d(10, 10);
    return 0;
}
