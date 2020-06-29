/**
 * Project: SmartHomeCPP
 * @file Event.cpp
 * @author Elie Drai
 * @version 1.0 28/06/2020
*/

#include "Event.h"
using namespace event;


Event::Event(
  int p_sender,
  std::string p_location,
  EventType p_type,
  std::string p_payload):
    sender(p_sender), location(p_location), type(p_type), payload(p_payload)
{
  timestamp = std::time(nullptr);
}

Event::Event() { }


std::time_t Event::timestamp()
{
  return timestamp;
}
int Event::sender()
{
  return sender;
}
std::string Event::location()
{
  return location;
}
EventType Event::type()
{
  return type;
}
std::string Event::payload()
{
  return payload;
}
