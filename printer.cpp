#include <iostream>
#include <string>
#include "printer.hpp"

void printDotLine(){
  std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
}

void printTitle(){
  std::string firstLine = R"(.  ____    _____ ___  _______    __    ___ __  ___ ___  .)";
  std::string secondLine = R"(. (( \|    |// \\||\\//|||| \\   ||   // \\||\ |||| \\  .)";
  std::string thirdLine = R"(.  \\\\ /\ //|=|||| \/ ||||_//   ||   ||=||||\\||||  )) .)";
  std::string fourthLine = R"(. \_))\V/\V/|| ||||    ||||      ||__||| |||| \||||_//  .)";
  std::string wholeString = "\033[1;31m" += firstLine += "\n" += secondLine += "\n" += thirdLine += "\n" += fourthLine += "\033[0m" += "\n";
  printDotLine();
  std::cout << wholeString;
  printDotLine();
                                                    
}

void printLine(){
  std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}
