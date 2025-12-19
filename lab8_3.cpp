#include <iostream>
using namespace std;

int main() {
    int age;
    int height;
    long long bounty;

    cout << "Enter your age: ";
    cin >> age;


    if (age >= 90) {
        cout << "Your character = Brook";
    }

    else if (age <= 60 && age > 25) {
        cout << "Enter your bounty: ";
        cin >> bounty;

        if (bounty > 500000000) {
            cout << "Your character = Jinbe";
        }
        else { 
            cout << "Your character = Franky"; 
        }
    }

    else if (age <= 25) {
        cout << "Enter your height: ";
        cin >> height;
        
        if (height < 100) {
            cout << "Your character = Chopper";
        }
        
        else if (height < 180) {
            cout << "Your character = Usopp";
        }
        
        else {
            cout << "Enter your bounty: ";
        cin >> bounty;
        
        if (bounty > 1100000000) {
            cout << "Your character = Zoro";
        }
        else {
            cout << "Your character = Sanji";
        }

        }
    }

    return 0;
}
