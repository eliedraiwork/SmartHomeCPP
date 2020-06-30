/**
 * Project: SmartHomeCPP
 * @file WaitingQueue.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#include "WaitingQueue.h"
#include "Mutex.h"
using namespace event;


WaitingQueue WaitingQueue::instance;

WaitingQueue& WaitingQueue::getInstance()
{
  return instance;
}

WaitingQueue::WaitingQueue() { }

Event WaitingQueue::pop()
{
  if(empty())
    throw "Error: waiting queue is empty";

  mutex.lock();

  Event ev = events.front();
  events.pop();

  mutex.unlock();

  return ev;
}

void WaitingQueue::push(const event::Event p_event)
{
  mutex.lock();
  events.push(p_event);
  mutex.unlock();
}

bool WaitingQueue::empty() const
{
  return events.empty();
}
