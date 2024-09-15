//sharvari murade
//23070123088
#include <iostream>
using namespace std;
class MyClass {
public:
~MyClass() {
        cout << "Destructor called!" << endl;
    }
MyClass() {
        cout << "Constructor called!" << endl;
    }
};
int main() {
    MyClass obj;  

return 0;
}
