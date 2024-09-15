# Experiment-11

## AIM-
To learn about constructors and destructors in C++.
### SOFTWARE USED-
VS Code
### PROBLEM STATEMENTS-
1. Constructor Definition: Write a C++ program to define a constructor.

2. Parameterized Constructor: Write a C++ program using a parameterized constructor.

3. Copy Constructor: Write a C++ program using a copy constructor.

4. Default Argument: Write a C++ program demonstrating default arguments in constructors.

5. Rectangle Area Calculation: Write a C++ program to calculate the area of a rectangle using a class.

6. Destructor: Write a C++ program using a destructor.
## THEORY-
#### Constructor- 
A constructor is a unique function within a class specifically designed to initialize new instances of that class. It shares the same name as the class itself and does not have a return type. Constructors set up initial values for data members and allocate any necessary resources. They come in two varieties: default constructors (with no parameters) and parameterized constructors (with one or more parameters). Constructors can also be overloaded, meaning a class can have multiple constructors with different parameter lists. Constructors are automatically called when an object is instantiated.

A parameterized constructor allows you to initialize an object with specific values at the time of its creation. This constructor takes one or more arguments, which you can use to set the initial state of the object. Parameterized constructors provide flexibility by allowing different initializations depending on the provided parameters.

A default constructor is a special type of constructor that can be called with no arguments. If you do not provide any constructors for your class, the C++ compiler will automatically generate a default constructor for you. This default constructor initializes data members to default values: zero for built-in types, and invoking the default constructors of member objects for user-defined types.

A copy constructor is a special constructor used to create a new object as a copy of an existing object. It is particularly important for classes that manage dynamic resources (such as memory or file handles) to ensure that copies of objects are correctly handled without causing resource leaks or unintended side

#### Destructor- 
A destructor is a specialized function in a class responsible for cleaning up and releasing resources before an object is destroyed. It has the same name as the class but is prefixed with a tilde (~). Unlike constructors, a class can only have one destructor, which cannot accept parameters or be overloaded. Destructors are automatically called when an object’s lifetime ends, and they execute in the reverse order of construction. In the case of inheritance, the destructor of the derived class runs first, followed by the base class’s destructor.
### CODES-
1)-
```javascript
//sharvari murade
//23070123088
#include <iostream>
using namespace std;
class Myclass {
    
    public:
    Myclass(int side) {
       
        int area= side*side;
        cout<<"Area of square is: "<<area;
    }
    Myclass(int length, int bredth) {
        
        int area= length*bredth;
        cout<<"Area of rectangle is:"<<area;
    }
};
int main() {
   int side,length,breadth,ch;
   cout<<"Enter your choice for area square(1) rectangle(2) : ";
   cin>>ch;
   if (ch==1) {
       cout<<"Enter side of square: ";
       cin>>side;
       Myclass obj1(side);
   }
   else if(ch==2) {
       cout<<"Enter length, bredth of rectangle ";
       cin>> length;
       cin>>breadth;
       Myclass obj2(length,breadth);
   }  
   return 0;
}
```
2)-
```javascript
//sharvari murade
//23070123088
#include <iostream>
using namespace std;
class SHARVARI
{
    public:
    SHARVARI() {
        cout<<"Hello SHARVARI"<<endl;
    }
};
int main() {
    SHARVARI obj; 
    return 0;
}
```
3)-
```javascript
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
```
4)-
```javascript
//sharvari murade
//23070123088
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year- "<<value<<endl;
    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year- "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
          }
```
5)-
```javascript
//sharvari murade
//23070123088
#include <iostream>
using namespace std;
class Myclass {
    private:
    int value1,value2;
    public:
    Myclass(int val1=0, int val2=0) {
        value1=val1;
        value2=val2;
        cout<<"Constructor called! Your entered value is: "<<value1<<" and "<<value2 <<endl;
    }   
};
int main() {
   
   Myclass obj1; 
   Myclass obj2(7);
   Myclass obj3(3,5);
   return 0;
}
```
6)-
```javascript
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
```

### OUTPUTS-

1. <img width="494" alt="image" src="https://github.com/user-attachments/assets/d668e8df-e180-4bbf-a24d-57b90e29e6b9">

2. <img width="331" alt="image" src="https://github.com/user-attachments/assets/1ec25334-6d36-4fc9-a37a-a904fcc1c6c2">

3. <img width="366" alt="image" src="https://github.com/user-attachments/assets/cf3d4fcf-0adc-40a3-a9ff-ad1995f592e7">

4. <img width="433" alt="image" src="https://github.com/user-attachments/assets/6d41b4b7-b7d3-45da-8071-c516b37616e3">

5. <img width="471" alt="image" src="https://github.com/user-attachments/assets/7df34630-ee80-429b-a75a-1f6671970c45">

6. <img width="304" alt="image" src="https://github.com/user-attachments/assets/dd9db786-1eba-4297-80f2-115830db1547">

## CONCLUSION-
Constructors ensure objects are initialized correctly, destructors manage resource cleanup, and copy constructors handle object copying, especially when dealing with dynamic resources. Mastery of these concepts is crucial for creating safe, efficient, and maintainable C++ code.
Constructors set up new objects, either with default values or custom initialization.
Destructors release resources when objects are destroyed.
Copy Constructors make copies of objects, essential for managing dynamic resources.
Default Constructor initializes objects with default values, either provided implicitly by the compiler or explicitly defined by the programmer.
Parameterized Constructor allows initialization of objects with specific values at creation, providing flexibility and control over object setup.


