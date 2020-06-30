/**
 * Project: SmartHomeCPP
 * @file Mutex.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#include "Mutex.h"
using namespace sync;


Mutex::Mutex() : locked(false) { }


void Mutex::lock()
{
  while(locked);
  locked = true;
}

void Mutex::unlock()
{
  locked = false;
}
