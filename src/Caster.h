/**
 * Project: SmartHomeCPP
 * @file Caster.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#ifndef _CASTER_H
#define _CASTER_H

#include "Event.h"

namespace home
{
  class Caster
  {
  public:
    virtual void cast(event::Event p_event);
  };
}

#endif
