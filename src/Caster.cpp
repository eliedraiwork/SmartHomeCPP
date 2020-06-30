/**
 * Project: SmartHomeCPP
 * @file Caster.cpp
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#include "Caster.h"
#include "WaitingQueue.h"
using namespace home;

void Caster::cast(event::Event p_event)
{
  event::WaitingQueue* wq = &event::WaitingQueue::getInstance();
  wq->push(p_event);
}
