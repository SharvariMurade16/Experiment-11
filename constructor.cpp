//sharvari murade
//23070123088
#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){
    cout<<"Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< ", from Constructor!"<<endl;
}
};
int main(){
    MyClass obj;
    return 0;
}
