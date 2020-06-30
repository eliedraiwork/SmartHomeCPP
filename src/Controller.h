/**
 * Project: SmartHomeCPP
 * @file Controller.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include <vector>

#include "IAgent.h"
#include "Subscriber.h"
using namespace tools;

namespace home
{
  class Controller : public IAgent, public Subscriber
  {
  public:
    Controller(int p_id, std::string p_location);
    int getID() override;
    std::string getLocation();
    void run() override;
    void subscribe(event::EventType p_eventType);

  private:
    int ID;
    std::string location;
    std::vector<event::EventType> subscriptions;
  };
}

#endif
