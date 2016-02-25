//
//  main.cpp
//  Assignment: MomsCounter
//

#include <iostream>
using namespace std;
#include "MomsCounter.h"

// input function
void getUserChoice(char &key);

int main() {
    bool b_error = false;
    char ans;
    // initialize MomsCounter object
    MomsCounter obj_count;
    
    do
    {
        if (!b_error) {
            cout << "Please enter ";
            cout << "A for increment by thousand, ";
            cout << "S for increment by hundred, ";
            cout << "D for increment by ten, ";
            cout << "F for increment by one, ";
            cout << "R for reset, ";
            cout << "X for exit: ";
            getUserChoice(ans);
        }
        else {
            b_error = false;
            getUserChoice(ans);
        }
        
        if (ans == 'a' || ans == 'A') {
            // call MomsCounter member function
            obj_count.IncrementThousand();
            // verify after increment
            if (obj_count.getCount() <= 0) {
                cout << "Increment by thousand failed";
                exit(1);
            }
        }
        else if (ans == 's' || ans == 'S') {
            // call MomsCounter member function
            obj_count.IncrementHundred();
            // verify after increment
            if (obj_count.getCount() <= 0) {
                cout << "Increment by hundred failed";
                exit(1);
            }
        }
        else if (ans == 'd' || ans == 'D') {
            // call MomsCounter member function
            obj_count.IncrementTen();
            // verify after increment
            if (obj_count.getCount() <= 0) {
                cout << "Increment by ten failed";
                exit(1);
            }
        }
        else if (ans == 'f' || ans == 'F') {
            // call MomsCounter member function
            obj_count.IncrementOne();
            // verify after increment
            if (obj_count.getCount() <= 0) {
                cout << "Increment by one failed";
                exit(1);
            }
        }
        else if (ans == 'r' || ans == 'R') {
            // call MomsCounter output member function
            obj_count.output(cout);
            // reset the counter to 0
            obj_count.Clear();
            cout << "Counter has been reset" << endl;
        }
        else if (ans == 'x' || ans == 'X') {
            // exit program when user entered x or X key
            exit(1);
        }
        else {
            cout << "You entered invalid key! please enter R for reset the counter" << endl;
            b_error = true;
        }
        
    } while(1); // keep looping
    
    return 0;
}

// function: get user choices key stroke
void getUserChoice(char &key) {
    cin >> key;
}
