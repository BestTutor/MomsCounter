//
//  main.cpp
//  Assignment: MomsCounter
//

#include <iostream>
using namespace std;
#include "MomsCounter.h"

// function: get user choices key stroke
void getUserChoice(char &key);

int main() {
    bool b_error = false;
    char ans;
    MomsCounter obj_count;
    
    do
    {
        if (!b_error) {
            cout << "Please enter "; //<< endl;
            cout << "A for increment by thousand, "; //<< endl;
            cout << "S for increment by hundred, "; //<< endl;
            cout << "D for increment by ten, "; //<< endl;
            cout << "F for increment by one, "; //<< endl;
            cout << "R for reset, "; //<< endl;
            cout << "X for exit: "; //<< endl;
            getUserChoice(ans);
        }
        else {
            b_error = false;
            getUserChoice(ans);
        }
        
        
        if (ans == 'a' || ans == 'A') {
            obj_count.IncrementThousand();
            if (obj_count.getCount() <= 0) {
                cout << "Increment by thousand failed";
                exit(1);
            }
        }
        else if (ans == 's' || ans == 'S') {
            obj_count.IncrementHundred();
            if (obj_count.getCount() <= 0) {
                cout << "Increment by hundred failed";
                exit(1);
            }
        }
        else if (ans == 'd' || ans == 'D') {
            obj_count.IncrementTen();
            if (obj_count.getCount() <= 0) {
                cout << "Increment by ten failed";
                exit(1);
            }
        }
        else if (ans == 'f' || ans == 'F') {
            obj_count.IncrementOne();
            if (obj_count.getCount() <= 0) {
                cout << "Increment by one failed";
                exit(1);
            }
        }
        else if (ans == 'r' || ans == 'R') {
            obj_count.output(cout);
            obj_count.Clear();
            cout << "Counter has been reset" << endl;
        }
        else if (ans == 'x' || ans == 'X') {
            exit(1);
        }
        else {
            cout << "You entered invalid key! please enter R for reset the counter" << endl;
            b_error = true;
        }
        
    } while(1);
    
    return 0;
}

void getUserChoice(char &key) {
    cin >> key;
}
