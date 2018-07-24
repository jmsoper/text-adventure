#include <string>
#include <iostream>
#include "location.hpp"

Location::Location(std::string description)
{
  m_description = description;
}

Location::Location(std::string description){
  m_description = description;
}

void Location::lookInDirection(std::string direction){
  Location* givenDirection;
  if (direction == "north"){
    givenDirection = m_north;
  } else if (direction == "south"){
    givenDirection = m_south;
  } else if (direction == "east"){
    givenDirection = m_east;
  } else if (direction == "west"){
    givenDirection = m_west;
  }

  if (givenDirection == NULL ){
    std::cout << "There's nothing in that direction." << std::endl;
  } else {
    givenDirection.describe();
  }
}

void Location::setDirection(std::string direction, Location* loc){
  if (direction == "north"){
    m_north = loc;
  } else if (direction == "south"){
    m_south = loc;
  } else if (direction == "west"){
    m_west = loc;
  } else if (direction == "east") {
    m_east = loc;
  } else {
    std::cout << "That is not a valid direction. Please try again." << std::endl;
  }
}

void Location::setDirections(Location* north, Location* east, Location* south, Location* west){
  m_north = north;
  m_east = east;
  m_south = south;
  m_west = west;
}

void Location::describe(){
 std::cout << m_description << std::endl;
}
