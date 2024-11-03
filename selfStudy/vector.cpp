#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*

Using normal arrays:

int main() {
    array<string, 3> foods = {"carrots", "grapes", "oranges"};

    for(auto food: foods){
        cout << food << endl;
    }

    return
}

*/

int main () {
    //You only need to specify type of elements:
    vector<string> foods = {"carrots", "grapes", "oranges"};
    //You can add new elements:
    foods.push_back("blueberries");

    //You can determine the size of the array: 
    for(int i = 0; i < foods.size(); i++){
        cout << foods[i] << endl;
    }

    return 0;
}