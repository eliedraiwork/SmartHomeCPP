/**
 * Project: SmartHomeCPP
 * @file SmartHome.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
*/

#ifndef _SMARTHOME_H
#define _SMARTHOME_H

#include <vector>
#include "IUncopyable.h"
#include "Sensor.h"
#include "Controller.h"

class SmartHome : public tools::IUncopyable
{
public:
  /***/
  static SmartHome& getInstance();
  void buildConfiguration();

private:
  /***/
  SmartHome();

  static SmartHome instance;
  std::vector<home::Sensor*> sensors;
  std::vector<home::Controller*> controllers;
};

#endif
