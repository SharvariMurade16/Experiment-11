
//sharvari murade
//23070123088
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;
    public:
int x,y;
void getinput()
         { 
            cout<<"Enter the length and breadth respectively-"<<endl;
            cin>>x>>y;
         }
         void display()
         { int a;
         l=x;
         b=y;
         a = l*b;
         cout<<"Area of the rectangle is: "<< a<< endl;
         }
};
int main(){    
    MyClass obj1;
    obj1.getinput();
    obj1.display();
    return 0;
}

