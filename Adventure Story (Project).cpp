//
//  main.cpp
//  Choose Your Own Adventure Story
//
//  Created by Vladislav Palant on 2/18/25.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        
        cout << "Before I begin this story are you a boy or a girl?" << endl;
        cout << "1) A Boy!" << endl;
        cout << "2) A Girl!" << endl;
        int Gender;
        bool validGender = false;
        while (!validGender) {
            cin >> Gender;
            if (cin.fail()) {
                // The answer not integer I want
                cin.clear();  // clear fail state
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard rest words
                cout << "Let's Follow the story! Please enter 1 or 2! ";
            }
            else if (Gender != 1 && Gender != 2) {
                cout << "Invalid choice! Please enter 1 or 2: ";
            }
            else {
                validGender = true;
            }
        }
        if (Gender == 1) { // Boy Path(No Difference)
            srand(static_cast<unsigned>(time(nullptr)));//random maker
            
            cout << "This is a story of a little boy with a little red cap" << endl;
            cout << "You find out your grandma is sick, and want to bring her some baked foods!" << endl;
            cout << "Since you know she is sick you want to get to her as soon as possible!" << endl;
            cout << endl << "Which path do you take to get your grandma's" << endl; // Intro story
            
            
            cout << "1) Take the dark, narrow path through the woods." << endl;
            cout << "2) Take the long, scenic route along the river." << endl;
            int Wolf;
            bool validWolf = false;
            while (!validWolf) {
                cin >> Wolf;
                if (cin.fail()) {
                    // The answer not integer I want
                    cin.clear();  // clear fail state
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Let's Follow the story! Please enter 1 or 2! ";
                }
                else if (Wolf != 1 && Wolf != 2) {
                    cout << "Invalid choice! Please enter 1 or 2: ";
                }
                else {
                    validWolf = true;
                }
            }
            if (Wolf == 1) { // Dark forest Scenario
                cout << endl << "You were worried for your grandma and took down the quicker and narrow forest route!" << endl;
                cout << "As you run through the forest you trip and fall and all your baked foods fall!" << endl;
                cout << R"(                         ___________
                    __.-' `     `  ``--.___
                  .'.        `     `  `    `-.___
                 / -                   ` `  ` `  `--.
                / -                    -       `  `  `-.
               /_ -        '           .-           . ` `.  .-.
              /         |             - -'      `  / \  ` `// |
             /      `       '        -        `   ||\ `   //  |
           .'           |       '    -            || |'    `' '
         .'-       `    |  |  |    -   .     -  //       |    '
       .' -     `                     .         /       ` .-  `
     .'   - '      `   /.|'`.   |   /        /       ` o ||o' `
    J     )  '        /'  ``|`|    /         /  /       `||'.'
    |__.-'7'       .-'  \ `   ``.       |     / / /  .  '|||
      _.-'      .-'      \` '   /`.     \ ___  / '.  \\  |||
     /     __.-'         | '   /  |     |    `-----'-.\\ ( )
    /   .-'              J    /   |     |      |       \`-<
   /   /                 F   J     \    |       \       `-'
  /   /                 /   |       |   |        `-._     )
 |   /                 (    |       | \ )            `.   |
-`---`--------.---------`.   `.     \   \             /'  |   __| |   |
  .-.___`-.___ `._   ---. `.   `.___ \   \           |   /   (    |   |
 ------    `---._    `------\_____)_\_\   \_          \='|  \_ _|\__,_|
 __.-.      --.        `-----.____    '._/__`._  ___   \=/   _/       _
    .--           -.  -                        `-   `------.--.__.---'
)";
                cout << "As you look up a big bad wolf stumbles in front of you growling with hunger..." << endl;
                cout << "1) Do you give the food to the wolf and run away" << endl;
                cout << "2) Do you fight the wolf to save the food for your Grandma" << endl;
                
                int SaveOrRun;
                bool validSaveOrRun = false;
                while (!validSaveOrRun) {
                    cin >> SaveOrRun;
                    if (cin.fail()) {
                        // The answer not integer I want
                        cin.clear();  // clear fail state
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Let's Follow the story! Please enter 1 or 2! ";
                    }
                    else if (SaveOrRun != 1 && SaveOrRun != 2) {
                        cout << "Invalid choice! Please enter 1 or 2: ";
                    }
                    else {
                        validSaveOrRun = true;
                    }
                }
                if(SaveOrRun == 1) {
                    cout << endl << "You let the Wolf take your food and you got away safely!" << endl;
                    cout << "You end up back home and made more baked foods for yourself because you are scarred of the incident!" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // saveorrun 1
                else if (SaveOrRun == 2) {
                    cout << "You try fighting the wolf and the wolf eats you instead of the food!" << endl;
                    cout << "The food ends up rotting, stinking up the forest which cleans the forests of wolves" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // SaveOrRun 2
            } // Closer of Dark Forest scenario?
            
            if(Wolf == 2) { // Long scenic route scenario
                cout << endl << "You take the long scenic route taking your sweet time even though your grandma is sick!" << endl;
                cout << "After taking your time walking through flowers and petals you reach to your Grandma's house!" << endl;
                cout << R"(
                  /\                           (
            .    /%%\                           )        /\
           /"\  /%%%%\                         (__      /""\
          /"""\ /%%%%\                ,       |_I_|    /""""\
     /\   /"-"\/%%%___\______________/ \______|I_I|____/""""\/\
    /%%\ /"""""\%%/\'.__.'.__.'.__.'/\/=\'.__.'.__.'.__\""""/%%\
    %%%%/_"""""_\/!!\_.'.__.'.__.'./\/_=_\_.'.__.'.__.'.\""/%%%%\    .
    %%%%/-"-"-"-/!!!!\.__.'.__.'._/\/|_|_|\.__.'.__.'.__.\"/%%%%\   /"\
    %%%/""""""""/!!!!\_.'.__.'.__.\/=|_|_|=\'.__.'.__.'.__\%%%%%%\ /"""\
    %%/_"""""""/!!!!!!\____________________________________\.'.%%\ /"-"\
    %%/ "-"-"-/!!!!!!!!\]== _ _ _ ============______======.'   '.%/"""""\
    %/""""""""/!!!!!!!/\]==|_|_|_|============|////|====.'       '."""""_\
    /_"""""""/!!!!!!!/%%\==|_|_|_|============|////|==='._.'._.'._.'-"-"-\
     "-"-"-"/!!!!!!!/%%%%\====================|&///|====.'       '."""""""\
       _-   /!!!!!!!/%%%%\====================|////|==.'           '.""""""\
           /!!!!!!!/%%%%%%\===================|////|='._.'._.'._.'._.'-"-"-"
           /lc!!!!!/%%%%%%\"""""""""""""""""""'===='"".'           '.  - _
           ^^^^^^^/%%%%%%%%\   _ -            _-    .'               '.
                  ^^^^^^^^^^                       '._.'._.'._.'._.'._.'
      _-                               _-           .'               '.  _ -
                       _-                         .'                   '.
           _-                                    '._.'._.'._.'._.'._.'._.'
                                                 ~"^"~"^~"^"~"^"~"^"~"^"~"    
    )";
                cout << endl << "When you arrive do you..." << endl;
                cout << "1) Knock on the front door" << endl;
                cout << "2) Leave the food at the back door so you don't disturb your grandma" << endl;
                
                int DoorOption;
                bool validDoorOption = false;
                while (!validDoorOption) {
                    cin >> DoorOption;
                    if (cin.fail()) {
                        // The answer not integer I want
                        cin.clear();  // clear fail state
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Let's Follow the story! Please enter 1 or 2! ";
                    }
                    else if (DoorOption != 1 && DoorOption != 2) {
                        cout << "Invalid choice! Please enter 1 or 2: ";
                    }
                    else {
                        validDoorOption = true;
                    }
                }
                if (DoorOption == 1) {
                    int disguisedwolf = rand() % 2;
                    if (disguisedwolf == 0) {
                        cout << "Your grandma opens it warm-heartedly happy to see you bring food to feel better!" << endl << "The End!" << endl;
                        cout << "Do you want to play again?(yes/no)" << endl;
                        cin >> playAgain;
                    } else {
                        cout << "You find the Wolf disguised as your grandma!" << endl << "The shock of finding a wolf dressed as your grandma startles you and you run away!" << endl;
                        cout << "Do you want to play again?(yes/no)" << endl;
                        cin >> playAgain;
                    } // else closer
                } // DoorOption closer
                else if(DoorOption == 2){
                    cout << "You quietly leave the food at the back door, and quietly knock on the door as you slip away" << endl << "The End!" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // Door Option 2 Closer
            } // Closes Wolf == 2?
        } // closes Gender = 1?
        
        if (Gender == 2) { // Girl Path (No Difference)
            srand(static_cast<unsigned>(time(nullptr)));//random maker
            
            cout << "This is a story of a little girl with a little red cap" << endl;
            cout << "You find out your grandma is sick, and want to bring her some baked foods!" << endl;
            cout << "Since you know she is sick you want to get to her as soon as possible!" << endl;
            cout << endl << "Which path do you take to get your grandma's" << endl; // Intro story
            
            cout << "1) Take the dark, narrow path through the woods." << endl;
            cout << "2) Take the long, scenic route along the river." << endl;
            int Wolf;
            bool validWolf = false;
            while (!validWolf) {
                cin >> Wolf;
                if (cin.fail()) {
                    // The answer not integer I want
                    cin.clear();  // clear fail state
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Let's Follow the story! Please enter 1 or 2! ";
                }
                else if (Wolf != 1 && Wolf != 2) {
                    cout << "Invalid choice! Please enter 1 or 2: ";
                }
                else {
                    validWolf = true;
                }
            }
            if (Wolf == 1) { // Dark forest Scenario
                cout << endl << "You were worried for your grandma and took down the quicker and narrow forest route!" << endl;
                cout << "As you run through the forest you trip and fall and all your baked foods fall!" << endl;
                cout << R"(                         ___________
                            __.-' `     `  ``--.___
                          .'.        `     `  `    `-.___
                         / -                   ` `  ` `  `--.
                        / -                    -       `  `  `-.
                       /_ -        '           .-           . ` `.  .-.
                      /         |             - -'      `  / \  ` `// |
                     /      `       '        -        `   ||\ `   //  |
                   .'           |       '    -            || |'    `' '
                 .'-       `    |  |  |    -   .     -  //       |    '
               .' -     `                     .         /       ` .-  `
             .'   - '      `   /.|'`.   |   /        /       ` o ||o' `
            J     )  '        /'  ``|`|    /         /  /       `||'.'
            |__.-'7'       .-'  \ `   ``.       |     / / /  .  '|||
              _.-'      .-'      \` '   /`.     \ ___  / '.  \\  |||
             /     __.-'         | '   /  |     |    `-----'-.\\ ( )
            /   .-'              J    /   |     |      |       \`-<
           /   /                 F   J     \    |       \       `-'
          /   /                 /   |       |   |        `-._     )
         |   /                 (    |       | \ )            `.   |
        -`---`--------.---------`.   `.     \   \             /'  |   __| |   |
          .-.___`-.___ `._   ---. `.   `.___ \   \           |   /   (    |   |
         ------    `---._    `------\_____)_\_\   \_          \='|  \_ _|\__,_|
         __.-.      --.        `-----.____    '._/__`._  ___   \=/   _/       _
            .--           -.  -                        `-   `------.--.__.---'
        )";
                cout << "As you look up a big bad wolf stumbles in front of you growling with hunger..." << endl;
                cout << "1) Do you give the food to the wolf and run away" << endl;
                cout << "2) Do you fight the wolf to save the food for your Grandma" << endl;
                
                int SaveOrRun;
                bool validSaveOrRun = false;
                while (!validSaveOrRun) {
                    cin >> SaveOrRun;
                    if (cin.fail()) {
                        // The answer not integer I want
                        cin.clear();  // clear fail state
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Let's Follow the story! Please enter 1 or 2! ";
                    }
                    else if (SaveOrRun != 1 && SaveOrRun != 2) {
                        cout << "Invalid choice! Please enter 1 or 2: ";
                    }
                    else {
                        validSaveOrRun = true;
                    }
                }
                if(SaveOrRun == 1) {
                    cout << endl << "You let the Wolf take your food and you got away safely!" << endl;
                    cout << "You end up back home and made more baked foods for yourself because you are scarred of the incident!" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // saveorrun 1
                else if (SaveOrRun == 2) {
                    cout << "You try fighting the wolf and the wolf eats you instead of the food!" << endl;
                    cout << "The food ends up rotting, stinking up the forest which cleans the forests of wolves" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // SaveOrRun 2
            } // Closer of Dark Forest scenario?
            if(Wolf == 2) { // Long scenic route scenario
                cout << endl << "You take the long scenic route taking your sweet time even though your grandma is sick!" << endl;
                cout << "After taking your time walking through flowers and petals you reach to your Grandma's house!" << endl;
                cout << R"(
                          /\                           (
                    .    /%%\                           )        /\
                   /"\  /%%%%\                         (__      /""\
                  /"""\ /%%%%\                ,       |_I_|    /""""\
             /\   /"-"\/%%%___\______________/ \______|I_I|____/""""\/\
            /%%\ /"""""\%%/\'.__.'.__.'.__.'/\/=\'.__.'.__.'.__\""""/%%\
            %%%%/_"""""_\/!!\_.'.__.'.__.'./\/_=_\_.'.__.'.__.'.\""/%%%%\    .
            %%%%/-"-"-"-/!!!!\.__.'.__.'._/\/|_|_|\.__.'.__.'.__.\"/%%%%\   /"\
            %%%/""""""""/!!!!\_.'.__.'.__.\/=|_|_|=\'.__.'.__.'.__\%%%%%%\ /"""\
            %%/_"""""""/!!!!!!\____________________________________\.'.%%\ /"-"\
            %%/ "-"-"-/!!!!!!!!\]== _ _ _ ============______======.'   '.%/"""""\
            %/""""""""/!!!!!!!/\]==|_|_|_|============|////|====.'       '."""""_\
            /_"""""""/!!!!!!!/%%\==|_|_|_|============|////|==='._.'._.'._.'-"-"-\
             "-"-"-"/!!!!!!!/%%%%\====================|&///|====.'       '."""""""\
               _-   /!!!!!!!/%%%%\====================|////|==.'           '.""""""\
                   /!!!!!!!/%%%%%%\===================|////|='._.'._.'._.'._.'-"-"-"
                   /lc!!!!!/%%%%%%\"""""""""""""""""""'===='"".'           '.  - _
                   ^^^^^^^/%%%%%%%%\   _ -            _-    .'               '.
                          ^^^^^^^^^^                       '._.'._.'._.'._.'._.'
              _-                               _-           .'               '.  _ -
                               _-                         .'                   '.
                   _-                                    '._.'._.'._.'._.'._.'._.'
                                                         ~"^"~"^~"^"~"^"~"^"~"^"~"    
            )";
                cout << endl << "When you arrive do you..." << endl;
                cout << "1) Knock on the front door" << endl;
                cout << "2) Leave the food at the back door so you don't disturb your grandma" << endl;
                
                int DoorOption;
                bool validDoorOption = false;
                while (!validDoorOption) {
                    cin >> DoorOption;
                    if (cin.fail()) {
                        // The answer not integer I want
                        cin.clear();  // clear fail state
                        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Let's Follow the story! Please enter 1 or 2! ";
                    }
                    else if (DoorOption != 1 && DoorOption != 2) {
                        cout << "Invalid choice! Please enter 1 or 2: ";
                    }
                    else {
                        validDoorOption = true;
                    }
                }
                if (DoorOption == 1) {
                    int disguisedwolf = rand() % 2;
                    if (disguisedwolf == 0) {
                        cout << "Your grandma opens it warm-heartedly, happy to see you bring food for her to feel better!" << endl << "The End!" << endl;
                        cout << "Do you want to play again?(yes/no)" << endl;
                        cin >> playAgain;
                    } else {
                        cout << "You find the Wolf disguised as your grandma!" << endl << "The shock of finding a wolf dressed as your grandma startles you and you run away!" << endl;
                        cout << "Do you want to play again?(yes/no)" << endl;
                        cin >> playAgain;
                    } // else closer
                } // DoorOption closer
                else if(DoorOption == 2){
                    cout << "You quietly leave the food at the back door, and quietly knock on the door as you slip away" << endl << "The End!" << endl;
                    cout << "Do you want to play again?(yes/no)" << endl;
                    cin >> playAgain;
                } // Door Option 2 Closer
            } // Closes Wolf == 2?
        } // closes Gender = 1?
    } // Gender 2 closer
    
        cout << "Thank you for playing! Till next time!" << endl;
            return 0;
        }
