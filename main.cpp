/*=======================================================================================================================
Write a program that determines whether a meeting room is in violation
of fire law regulations regarding the maximum room capacity. The program will read in the maximum room capacity and the number of people
attending the meeting. If the number of people is less than or equal to the
maximum room capacity, the program announces that it is legal to hold
the meeting and tells how many additional people may legally attend. If
the number of people exceeds the maximum room capacity, the program
announces that the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded in order to meet the
fire regulations. For a harder version, write your program so that it allows
the calculation to be repeated as often as the user wishes. If this is a class
exercise, ask your instructor whether you should do this harder version.
==========================================================================================================================*/

#include <iostream>
using namespace std;


int main() {
  // Variables
  int number_of_people = 0;
  int maximum_room_capacity = 0;
  int total_people_to_add = 0;
  int total_people_to_subtract = 0;
  char ans;

  // Intro 
  cout << "Hi. This program determines if this meeting room is in violation of fire law regulations regarding the maximum room capacity.\n\n";
  do {
    // Input
    cout << "What is the maximum room capacity? ";
    cin >> maximum_room_capacity;
    cout << endl;
    cout << "How many people are in the room? ";
    cin >> number_of_people;
    cout << endl;

    // Compute
    total_people_to_add = maximum_room_capacity - number_of_people;
    total_people_to_subtract = number_of_people - maximum_room_capacity;
    

    if (number_of_people <= maximum_room_capacity)
      cout << "It is legal to hold this meeting. You can add "<< total_people_to_add << " more people to reach full room capacity. \n\n";
    else 
      cout << "This meeting cannot be held as planned due to the fire regulations. You need to remove " << total_people_to_subtract << " people from this room to meet fire regulations.\n\n" ;


    // Output
  cout << "Would you like to try again? Press 'y' for yes. Press any other key to terminate program. ";
    cin >> ans;
    cout << endl;

  } while (ans == 'y' || ans == 'Y');
      cout << "Good Bye!";
    return 0;
}