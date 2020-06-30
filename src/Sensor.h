/**
 * Project: SmartHomeCPP
 * @file Sensor.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#ifndef _SENSOR_H
#define _SENSOR_H

#include <string>

#include "IAgent.h"
#include "Caster.h"
using namespace tools;

namespace home
{
  class Sensor : public IAgent, public Caster
  {
  public:
    Sensor(int p_id, std::string p_location);
    int getID() override;
    void run() override;

  private:
    int ID;
    std::string location;
  };
}

#endif
