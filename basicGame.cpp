#include <iostream>
#include <string>
#include "printer.hpp"

std::string getInput(){
  std::string givenInput;
  std::getline(std::cin, givenInput);
  return givenInput;
}

std::string getHelp() {
  std::string helper = "type in 'exit' to exit at any time. type in 'help' for help. type in 'look around' to get a description of where you are.";
  return helper;
}

std::string getLocation(std::string location){
  std::string prompt;
  if (location == "home"){
    prompt = "You're standing outside of a cabin. The rain is only getting heavier.";
  } else {
    prompt = "I don't know where you are.";
  }
  return prompt;
}

void printTitleScreen(){
  printTitle();
  std::cout << "type in 'exit' to exit at any time. type in 'help' for help. type in 'look around' to get a description of where you are." << std::endl; 
  printLine();
}

int main() {
  std::string userInput;
  printTitleScreen();  
  std::string location = "home"; 

  while (userInput != "exit") {
    if (userInput == "look around"){
      std::cout << getLocation(location) << std::endl;
    } else if (userInput == "help"){
      std::cout << getHelp() << std::endl;
    } else {
      std::cout << "It's raining." << std::endl;
    }
    userInput = getInput();
  } 
  return 0;
}
