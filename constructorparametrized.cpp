//sharvari murade
//23070123088
#include <iostream>
using namespace std;
class Myclass
{
    public:
    Myclass(int value) {
        cout<<"Your entered value is: "<<value<<endl;
    }
};

int main() {
   int a;
   cout<<"Enter a value: ";
   cin>>a;
   Myclass obj(a); 

    return 0;
}
