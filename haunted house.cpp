/*
Names: Tyler Zhang and AJ Sinha
Program Name: Haunted House CYOA
Date: 10/17/24
Extras: C++ thread and chrono to make text appear slowly
*/
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
// Extra: 
void sleepWrite(string text, int speed) {
    for (int i = 0; i < text.length(); i++) {
        cout << text[i];
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
    cout << endl;
}

int choice;
string choiice;
int main() {
    sleepWrite("October 14, 2024. Your car screeches to a halt outside the old family home. Thiis is what the call led you to. You grab your trusty coat and hat, throwing them on hastily before clicking open your door and stepping outside.\n\'We\'re back here again,' you think. The wind blows at an unnatural speed, the rain pouring down and hammering on your head. You climb the steps towards the red front door, the memories coming flooding back to you. Your hand raises, but the porch light flickers twice. A slight chill runs down your spine. A knock rings out three times before the door flings open.\nPress 1 to continue.", 25);
    while(true){
        cin >> choice;
        if (choice == 1) {
            sleepWrite("Your foot, almost against your will, takes a forboding step forwards.", 25);
            sleepWrite("Your left hand finds its way towards the wall, fumbling around in the dark for the light, to no avail. You're left in the dark, alone and afraid of what may come. You need a light. You step further into the room. Then, a crash. A shatter. A loud, foreign growl echoes through the halls. Then another. And another. The sound increases in both frequency and proximity.", 25);
            break;
        }
        else if (choice == 2) {
            sleepWrite("You aren't ready. The time is not now. You turn around immediately, panicking for your life. You rush your way back to the car, in fear of what may lie ahead if you go through with it. But time is running out. What have you done to those who once lived there?\nYou got the secret ending: Leave.", 25);
            break;
        }
        else {
            sleepWrite("Invalid option. Try again.", 25);
        }
    }
    
    return 0;
}