/*
    Templates are one of the features you must understand to use modern C++.

    Why do templates exist? What problems do they sovle? 

        C++ is a compiled language. 

        Compiler needs to know the size of all data types used to produce properly working code. 

        As a result, C++ is a strong, statically-typed language. 

        Sometimes, you want to use the same funciton with different data types.

        You can use overloading an redefine the function many times so that it works for different types of input. 

        But what if there was a way to write function without definitive types? Using something like a blueprint or placeholder?

        That is why templates exist.

    Templates are a C++ way of achieving generic code. 

    In generic programming, algorithms are written with types of parameters to be specified later (when they are actually used 
    in some function call).

    You can write a single algorithm that is compatible with different types. 

    To create a template, you use the "template" keyword. 


*/

#include <iostream>

using namespace std;

//Function  templates:
template <class Type>
Type add(Type a, Type b){
    return a + b;
}

//Class templates:
template <class Type> 
struct Pair{
    Type first, second;  
};

int main() {
    int integerResult = add<int>(3, 4);
    float floatResult = add<float>(3.5f, 4.2f);
    cout << "Integer: " << integerResult << endl;
    cout << "Float: " << floatResult << endl;

    return 0;
}   