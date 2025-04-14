// CSC 134
// M5T1
// Sebastian Camacho
// 04/03/2025

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void investigate_noise_outside();
void look_around_house();

int main(){
    cout << "M5LAB1 - Choose Your Own Adventure " << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you: " << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        choice_front_door();
      } else if (2 == choice) {
        choice_back_door();
      } else if (3 == choice) {
        choice_go_home();
      } else if (4 == choice) {
        cout << "Ok, quitting game" << endl;
        return; // go back to main()
      } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); // clear the user input
        main_menu();  // try again
      }    
}

void choice_front_door() {
    cout << "Try the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "3. Check the sound coming from the backyard" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else if (3 == choice) {
    investigate_noise_outside();
  }
}

void choice_back_door() { 
    cout << "You sneak around back" << endl;
    cout << "The back is slightly open" << endl;
    cout << "Do you: " << endl;
    cout << "1. Enter to look around" << endl;
    cout << "2. Check the sound coming from the backyard" << endl;
    cout << "3. Get scared and run home" << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
      look_around_house();
    } else if (2 == choice) {
      investigate_noise_outside();
    } else if (3 ==  choice) {
      choice_go_home();
    }
}

void choice_go_home() { 
    cout << "You don't want to adventure anymore" << endl;
    cout << "You go home and ask your mom what's for dinner" << endl;
}

void investigate_noise_outside() {
  cout << "You investigate the backyard and find a basement" << endl;
  cout << "Do you: " << endl;
  cout << "1. Go inside the basment" << endl;
  cout << "2. Go home because your scared" << endl;
  int choice;
  cin >> choice;
  if (choice == 1) {
    cout << "you head into the basment and find gold and leave" << endl;
  } else if (choice == 2) {
    choice_go_home();
  }
}