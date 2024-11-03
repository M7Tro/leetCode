#include <iostream>
#include <string>

using namespace std;

class Human {
    public:  //access modifier
        string name;
        string occupation;
        int age;

        void eat() {
            cout << "This person is eating" << endl;
        }

        void drink(){
            cout << "This person is drinking" << endl;
        }

        void sleep(){
            cout << "This person is sleeping" << endl;
        }
};   

int main() {
    /*
        Object - collection of attributes and methods. 

        To create an object, a class can be used. 

        A class acts as a blueprint to create objects. 
    */

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}