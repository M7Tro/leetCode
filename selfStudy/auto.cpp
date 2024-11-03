/*
    There is a way to let C++ dynamically/automatically determine the type of some variable.


*/

#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main () {

    int a =  5;

    auto b = a;//automatically works out the type of b as int. 

    cout << b << endl;

    vector<string> presidents = {"Wachington", "Jefferson", "Lincoln"};

    //You can use the auto keyword to simplify the for loop 
    for(auto president: presidents){
        cout << president << endl;
    }

    return 0;
}