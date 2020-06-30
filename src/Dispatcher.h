/**
 * Project: SmartHomeCPP
 * @file Dispatcher.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
*/

#ifndef _DISPATCHER_H
#define _DISPATCHER_H

#include "SmartHome.h"
#include "ThreadPool.h"
#include "IUncopyable.h"
#include "IRunnable.h"

class Dispatcher : public tools::IUncopyable, public tools::IRunnable
{
public:
  static Dispatcher& getInstance();

  void run() override;

private:
  static Dispatcher instance;
  SmartHome* smarthome;
  sync::ThreadPool threadpool;

  Dispatcher();
};

#endif
