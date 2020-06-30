/**
 * Project: SmartHomeCPP
 * @file Subscriber.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#ifndef _SUBSCRIBER_H
#define _SUBSCRIBER_H

#include "Event.h"

namespace home
{
  class Subscriber
  {
  public:
    virtual void subscribe(event::EventType p_eventType) = 0;
  };
}

#endif
