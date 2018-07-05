#include <iostream>
#include <string>
#include "printer.hpp"

void printDotLine(){
  std::cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . ." << std::endl;
}

void printTitle(){
  std::string firstLine = R"(.  ____    _____ ___  _______    __    ___ __  ___ ___ .)";
  std::string secondLine = R"(. (( \|    |// \\||\\//|||| \\   ||   // \\||\ |||| \\ .)";
  std::string thirdLine = R"(.  \\\\ /\ //|=|||| \/ ||||_//   ||   ||=||||\\||||  )).)";
  std::string fourthLine = R"(. \_))\V/\V/|| ||||    ||||      ||__||| |||| \||||_// .)";
  printDotLine();
  std::cout << firstLine  << std::endl;
  std::cout << secondLine  << std::endl;
  std::cout << thirdLine  << std::endl;
  std::cout << fourthLine  << std::endl;
  printDotLine();
                                                    
}

void printLine(){
  std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}
