/*
-This is a program in C++ intended to ask a user for a PIN, and check that input against a certain value.
-The number of attempts is counted (The user is only allowed three attempts).
-When a matching password is input
*/


//include necessary libraries
#include <iostream>

//Skeleton structure
int main() {

  //initialize variables for pin entry and counter for number of tries
  int pin = 0;
  int tries = 0;
  

  //print statement to inform user of context of the program
  std::cout << "BANK OF CODECADEMY\n";
  
  //prompt user for pin with print statement and save response to pin variable
  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  //add 1 to the counter  
  tries++;

  //while loop conditional on attempts counter value being less than three and pin value not matching value=1234  
  while (pin != 1234 && tries < 3) {
    
    //prompt for pin, save value to pin, increment attempts value
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    tries++;
    
  }
  //conditional branch for correct pin input
  if (pin == 1234) {
    
    //print statement: notification of valid pin. print statement: notification of granted access.
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }
  
}