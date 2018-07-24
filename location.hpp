#ifndef Location_H
#define Location_H
#include <string>

class Location
{
  Location *m_north;
  Location *m_east;
  Location *m_south;
  Location *m_west;
  std::string m_description;
  
  public: 
  Location(std::string description);
  void lookInDirection(std:: string direction);
  void setDirection(std::string direction, Location* loc);
  void setDirections(Location* north, Location* east, Location* south, Location* west);
  void describe();
};
#endif
