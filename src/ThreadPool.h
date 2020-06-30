/**
 * Project: SmartHomeCPP
 * @file ThreadPool.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
*/

#ifndef _THREADPOOL_H
#define _THREADPOOL_H

#include <vector>

#include "IUncopyable.h"
#include "Thread.h"

namespace sync
{
  class ThreadPool : public tools::IUncopyable
  {
  public:
    IUncopyable(size_t size);
    std::vector<Thread*>& getThreads();

  private:
    IUncopyable();
    std::vector<Thread*> threads;
  };
}

#endif
