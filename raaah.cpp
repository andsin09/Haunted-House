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
bool light = false;
bool gas = false;
bool can = false;
bool bar = false;
bool fullcan = false;
int main() {
    cout << "   ) )        /\\" << endl;
    cout << "   =====     /  \\" << endl;
    cout << " _|___|_____/ __ \\____________" << endl;
    cout << "|::::::::::/ |  | \\:::::::::::|"<< endl;
    cout << "|:::::::::/  ====  \\::::::::::|" << endl;
    cout << "|::::::::/__________\\:::::::::|" << endl;
    cout << "|_________|  ____  |__________|" << endl;
    cout << " | ______ | / || \\ | _______ |" << endl;
    cout << " ||  |   || ====== ||   |   ||" << endl;
    cout << " ||--+---|| |    | ||---+---||" << endl;
    cout << " ||__|___|| |   o| ||___|___||" << endl;
    cout << " |========| |____| |=========|" << endl;
    cout << "(^^-^^^^^-|________|-^^^--^^^)" << endl;
    cout << "(,, , ,, ,/________\\,,,, ,, ,)" << endl;
    cout << ",'',,,,' /__________\\,,,',',;;" << endl;
    sleepWrite("October 14, 2024. Your car screeches to a halt outside the old family home. This is what the call led you to. You grab your trusty coat and hat, throwing them on hastily before clicking open your door and stepping outside.\n\'We\'re back here again,' you think. The wind blows at an unnatural speed, the rain pouring down and hammering on your head. You climb the steps towards the red front door, the memories coming flooding back to you. Your hand raises, but the porch light flickers twice. A slight chill runs down your spine. A knock rings out three times before the door flings open.\nPress 1 to continue.", 25);
    while(true){
        cin >> choice;
        if (choice == 1) {
            sleepWrite("Your foot, almost against your will, takes a forboding step forwards. You enter the living room", 25);
            sleepWrite("Your left hand finds its way towards the wall, fumbling around in the dark for the light, to no avail. You're left in the dark, alone and afraid of what may come. You need a light. You step further into the room. Then, a crash. A shatter. A loud, foreign growl echoes through the halls. Then another. And another. The sound increases in both frequency and proximity. Hide? (Yes / No)", 25);
            cin >> choiice;
            // Checks if the user enters a form of the word "YES" to lead them to the couch scene
            if(choiice == "yes" || choiice == "Yes" || choiice == "y" || choiice == "Y"){
                sleepWrite("Your options are limited. Where would you like to hide? 1 - under the couch OR 2 - behind the curtain.", 25);
                cin >> choice;
                switch (choice) {
                    case 1: {
                        sleepWrite("You decide the couch is the best option. You drop to the ground with haste, and roll under it. You hold your breathe, and look to the side. A ghostly slobber falls down, right next to you. The footsteps stop, before a loud bark rings out.\n The footsteps slowly become inaudible as they move farther and farther away from you. You are safe.", 25);
                        sleepWrite("Your body rolls out from under the couch the second the footsteps receed. For the moment, you are safe, but you don't know how long it'll last.", 25);
                        break;
                    }
                    case 2: {
                        sleepWrite("The curtain sways back and forth, and you jump behind it. The apparition's booming footsteps come closer and closer. They freeze.", 25);
                        // Builds suspense by waiting putting a longer amount of time as the time argument of our function
                        sleepWrite("...", 500);
                        sleepWrite("..", 500);
                        sleepWrite(".", 500);
                        sleepWrite("The curtain sways back, and you get a peek at whatever was there - a snout, abnormally long and pale. The head turns towards you, and the eyes stare deep into your soul. It isn't over yet. The dog walks away, and you step out from your hiding spot.", 25);
                        break;
                    }
                    default: {
                        sleepWrite("indecisiveness. Common, yes, but a terrible choice in the moment. A misty fog clouds your vision, before a searing pain follows. Is it painful? Yes. It's too painful. Yet you are at peace, and then a darkness follows. A thud. Nothing. YOU DIED. You got ending 3: die.", 25);
                        return 0;
                    }
                }
                sleepWrite("On the table nearby is a flashlight. Finally, a source of light.", 25);
                sleepWrite("You pick up the flashlight, the source of light a safe heaven in the middle of this dark and gloomy residency. A creepy cry is heard from the abandoned kitchen to your immediate left.", 25);
                sleepWrite("Should you go and investigate? (Yes / No)", 25);
                cin >> choiice;
                if(choiice == "yes" || choiice == "Yes" || choiice == "y" || choiice == "Y"){
                    sleepWrite("You enter the kitchen to investigate. As you enter, the upper cabinets open and close in synchronicity, opening before slamming shut. Louder and louder they get, hurting your ears, before a ghostly apparation flies out towards you.", 25);
                    sleepWrite("There is a lighter nearby, which may come useful later. 1 - Pick up. 2 - Leave it.", 25);
                    cin >> choice;
                    
                    if(choice == 1){
                        sleepWrite("You pick the lighter up and pocket it. ITEM GAINED: LIGHTER.", 25);
                        light = true;
                    }
                    
                    else{
                        sleepWrite("You move past it. Foolish?", 25);
                    }
                    
                    sleepWrite("The kitchen otherwise seems empty, barren, and useless. The garage is your next stop on the first floor.", 25);
                }   

                else{
                    sleepWrite("You ignore the kitchen. Should you regret this? You'll never know. You decide to head to the garage.", 25);
                }

                sleepWrite("The door to the garage opens without you acting. You step inside, finding a gasoline can. It is empty, yes, but still useful. Pick it up? 1 - Yes. 2 - No.", 25);
                cin >> choice; 

                if(choice == 1){
                    sleepWrite("You picked up the gas canister. Albeit empty, it may be useful later. ITEM GAINED: CANISTER.", 25);
                    can = true;
                }

                else{
                    sleepWrite("You leave it behind.", 25);
                    if(!light){
                        sleepWrite("It seems you don't want to pick anyhting up really.", 25);
                    }
                }

                sleepWrite("The first floor has been cleared out. You return towards the living room, noticing the stairs back against the far wall. You decide to check this next floor, and walk up the steps. They creak below you, one step at a time, and you look up. You freeze. At the top of the stairs is another apparation, seemingly hovering, the only part of him touching the ground being his cane.", 25);
                sleepWrite("He runs at you, yet goes right through you. You continue along your way and reach the top of the steps. On this floor are the old bedrooms, but only one is of interest - yours. You stand in front of the door and reach out. Do you enter?", 25);
                cin >> choiice;
                
                if(choiice == "yes" || choiice == "Yes" || choiice == "y" || choiice == "Y"){
                    sleepWrite("You enter your room, and notice how there is nothing left. The bed is gone, along with the nightstand and all the other furniture. It is somewhat haunting due to the fact that, during that fateful night, everything was left in place. You hear a loud ringing noise, and the furniture is back. And so are you - back to that fateful night.", 25);
                    sleepWrite("...", 500);
                    sleepWrite("..", 500);
                    sleepWrite(".", 500);
                    sleepWrite("The clangs ring out again, and the screams of your siblings too. You rush to the door to try to see, but the memory fades out before anything else can happen. Is this the house trying to commmunicate with you? Is this trauma? Whatever it is, it is not welcome.", 25);
                    sleepWrite("You are back to the present day. You notice how there is now something in the room - a crowbar. Pick it up? 1 - Pick up. 2 - Leave.", 25);
                    cin >> choice;

                    if(choice == 1){
                        sleepWrite("You picked up the crowbar and hold it. ITEM GAINED: CROWBAR.", 25);
                        bar = true;
                    }

                    else{
                        sleepWrite("You leave it. Seriously, this is the most obvious item to pick up!", 25);
                        
                        if(!light && !can){
                            sleepWrite("Pick something up already!", 25);
                        }
                    }
                    
                    sleepWrite("You exit the room back into the hallway, before the high-pitched ring returns. Another memory. This time, you see your dad. He's holding your sister, covering her eyes and rushign out in a panic. You look down the hall and see a woman with a snapped neck and a white cloth dress looking at you. The memory fades.", 25);
                    sleepWrite("You decide to explore the attic, which is accessed from the nearby storage closet. You open the door and the shelves collapse, every item spilling off and falling to the floor. It's a mess, and renders anything in this closet useless. You can't reach the latch to be able to access the attic.", 25);

                    if(bar == true){
                        sleepWrite("You use the crowbar you found in your room mysteriously and extend it upwards, with the edge hooking on the latch. You pull down and now can access the ladder to the attic. ITEM USED: CROWBAR.", 25);
                        bar = false;
                        sleepWrite("Climbing up the ladder slowly, you fully enter the attic. While it is a somewhat boring attic, you realize there are gas canisters laying around among other items.", 25);
                        if(can == true){
                            sleepWrite("Taking your gas canister out, you run to each smaller can and use them to fill up the large one. You now have a full gas canister. ITEM GAINED: GASOLINE.", 25);
                            can = false;
                            fullcan = true;
                        }
                    }

                    else{
                        sleepWrite("You cannot open the attic, and thus decide to head to the basement.", 25);
                    }

                    sleepWrite("You exit the attic and head back to the main floor. Suddenly, another ghost, this time of a woman in a nightgown, flies at you, and you fall off the ladder, hitting your head on the floor.", 25);
                }

                else{
                    sleepWrite("You do not care for your room anymore, and decide to head back downstairs. Suddenly, a ghost of a woman in a nightgown flies at you from the wall, and you fall to the ground, hitting your head.", 25);
                }

                sleepWrite("It's a vision again, yes, but this time not overwriting your reality. It is just a memory, playing out. The woman with the broken neck is back - in the hallway. Her mouth is hung open in a scream, but nothing escapes. She follows your father, but he slams the front door shut before she can do anything. Your family is safe, in the car with you.\n A question rings out from your sibling - 'where is mother?' It's a good question, giben that the last time you saw her she was asleep in the room with your dad. She isn't in the car with you. The memory fades.", 25);
                sleepWrite("You come to. You stand up, and head back down the stairs to the first floor. You look towards the left and notice the last door to the basement, and opene it. This is the end of your return.", 25);
            
                sleepWrite("You head down the steps and into the basement. The lights flicker before going out. It's dark. You're afraid. You turn on the flashlight, and are stunned by the surroundings. It's run down, filled with a black mold that seems to be...", 25);
                sleepWrite("...", 500);
                sleepWrite("..", 500);
                sleepWrite(".", 500);
                sleepWrite("Alive? The mold seeems to be living - breathing, pulsating, and expanding. The ghosts that have haunted you so far appear all around you - staring into your soul. You realize - they were all past residents of the house. Old families that once lived there, who had tragic accidents and passed away. It's a horrible realization, but one that only adds more questions.", 25);
                sleepWrite("The lights flicker again. The ghosts disappear in the darkness. One final apparation appears - the woman with the broken neck. Who is this, you wonder.", 25);
                sleepWrite("She is the reason you left. The reason you can't sleep. She appears in your dreams, at the foot of your bed, and everywhere you look. It's haunting, and you can't escape her.", 25);

                sleepWrite("The final memory appears. You're behind her, and she finally makes a single noise - a sob. A sob for her children. For you.", 25);
                sleepWrite("You now know what happened to your mom - she had stumbled from a high ledge, and one thing led to another, and she passed. This was her. She was trapped in the house for the rest of eternity.", 25);
                sleepWrite("You have to destroy the house. Put these souls to rest.", 25);

                if(fullcan = true){
                    sleepWrite("You start to pour the gas. Around the basement, along the walls, lining it everywhere. You must put a stop to this.", 25);
                    
                    if(light = true){
                        sleepWrite("You have the lighter. You can stop this. You flick it and reach down. The gas trail ignites, and the fire spreads through the room. You either survive this and live to tell the tale, or you go out with a bang. The fire pauses, and stays in place. It fades. The house doesn't burn. The house is alive, and the house refuses.", 25);
                        for(int i = 0; i < 3; i ++){
                            sleepWrite("T̴̥̗̪́̋̏̍͗͠h̸̛̩̺͖̮͎̗̍̔̌̄̌̎e̴͙̪̯̭͚̔̊̄̌͝͠͝ ̷̧̧͇͕͎̪̮̺̱̺͝h̴̢͍̥̖̠͌͒̓̓̉́͝o̶̡̢̙̖͈̫̗̲̅̎u̵̡͋̓̌̚͝s̷̩̰̟̫̩̼̫͔͖̈ė̵̢̀̅̀̈ ̴̭͓̦̲̦̼̲̦͒͆͑̈́͒̓̀͆̉ļ̷̹͙͎̹̈́̂̈́͛́͐̓̏͐͝i̴̞̓͗̎̊̊͌͆̚͝v̵̢̢̬͓̠̻̹̪̥̫̘̎̋̉̌͗́̕e̴̢̖͇͉̺̓͊͑̽͗̌̒͒̽͘͝s̷͉̭̋́͒̇̏͑͌", 1);
                        }
                        
                        for(int i = 0; i < 3; i ++){
                            sleepWrite("T̴̥̗̪́̋̏̍͗͠h̸̛̩̺͖̮͎̗̍̔̌̄̌̎e̴͙̪̯̭͚̔̊̄̌͝͠͝ ̷̧̧͇͕͎̪̮̺̱̺͝h̴̢͍̥̖̠͌͒̓̓̉́͝o̶̡̢̙̖͈̫̗̲̅̎u̵̡͋̓̌̚͝s̷̩̰̟̫̩̼̫͔͖̈ė̵̢̀̅̀̈ ̴̭͓̦̲̦̼̲̦͒͆͑̈́͒̓̀͆̉ļ̷̹͙͎̹̈́̂̈́͛́͐̓̏͐͝i̴̞̓͗̎̊̊͌͆̚͝v̵̢̢̬͓̠̻̹̪̥̫̘̎̋̉̌͗́̕e̴̢̖͇͉̺̓͊͑̽͗̌̒͒̽͘͝s̷͉̭̋́͒̇̏͑͌", 0.5);
                        }

                        for(int i = 0; i < 3; i ++){
                            sleepWrite("T̴̥̗̪́̋̏̍͗͠h̸̛̩̺͖̮͎̗̍̔̌̄̌̎e̴͙̪̯̭͚̔̊̄̌͝͠͝ ̷̧̧͇͕͎̪̮̺̱̺͝h̴̢͍̥̖̠͌͒̓̓̉́͝o̶̡̢̙̖͈̫̗̲̅̎u̵̡͋̓̌̚͝s̷̩̰̟̫̩̼̫͔͖̈ė̵̢̀̅̀̈ ̴̭͓̦̲̦̼̲̦͒͆͑̈́͒̓̀͆̉ļ̷̹͙͎̹̈́̂̈́͛́͐̓̏͐͝i̴̞̓͗̎̊̊͌͆̚͝v̵̢̢̬͓̠̻̹̪̥̫̘̎̋̉̌͗́̕e̴̢̖͇͉̺̓͊͑̽͗̌̒͒̽͘͝s̷͉̭̋́͒̇̏͑͌", 0.25);
                        }
                    }

                    else if(!light){
                        sleepWrite("You can't finish this. You have no means of lighting the flame. Your mother flies at you, and chases you back to your car. You run up the steps, but she grabs you and pulls you. You hit the floor. Everythign goes black. Death. You awaken again, but you aren't", 25);
                    }
                }
            }
            else {
                sleepWrite("Was it fear, or was it something else entirely. You decide not to hide. You stand there, before a misty fog clouds your vision. It hurts, yes, but puts you at peace for a moment, and then darkness. A thud. YOU DIED. You got ending 3: die;", 25);
                return 0;
            }
        }

        else if (choice == 2) {
            sleepWrite("You aren't ready. The time is not now. You turn around immediately, panicking for your life. You rush your way back to the car, in fear of what may lie ahead if you go through with it. But time is running out. What have you done to those who once lived there?\nYou got the secret ending 1: Leave.", 25);
            break;
        }
        else {
            sleepWrite("Invalid option. Try again.", 25);
        }
    }
    
    return 0;
}