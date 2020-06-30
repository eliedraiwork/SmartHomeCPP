/**
 * Project: SmartHomeCPP
 * @file IAgent.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#ifndef _IAGENT_H
#define _IAGENT_H

#include "IRunnable.h"

namespace home
{
  class IAgent : public tools::IRunnable
  {
  public:
    virtual int getID() = 0;
  };
}

#endif
