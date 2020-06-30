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

Event& WaitingQueue::dequeue()
{
  if(this.empty())
    throw "Error: waiting queue is empty";

  lock(&mutex);
  Event ev = events.pop();
  unlock(&mutex);

  return ev;

}

void WaitingQueue::enqueue(const event::Event p_event)
{
  lock(&mutex);
  events.push(p_event);
  unlock(&mutex);
}

bool WaitingQueue::empty() const
{
  return events.empty();
}
