/**
 * Project: SmartHomeCPP
 * @file Thread.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#ifndef _THREAD_H
#define _THREAD_H

#include <memory>
#include "IRunnable.h"

namespace sync
{

  enum ThreadState
  {
    NEW,
    RUN,
    WAIT,
    TERMINATED
  };
  /**
   * Class Thread
   * @doc:
   * Intends to implement a thread
   */
  class Thread
  {
  public:
    /////////////////////////////////////
    ///////////  CONSTRUCTOR ////////////
    /////////////////////////////////////

    /** Constructor
     *  Instantiate the thread with the IRunnable to run
     *  @param p_runnable Pointer to the entity to run
     */
    Thread(tools::IRunnable* p_runnable);

    /////////////////////////////////////
    //////////////  GET/SET /////////////
    /////////////////////////////////////

    /** Function getState
     *  @return the thread's state
     */
    ThreadState getState();

    /////////////////////////////////////
    //////////////  METHODS /////////////
    /////////////////////////////////////

    /**
     *  Function start
     *  Start the thread
     */
    void start();

    /**
     *  Function sleep
     *  Freeze the thread during period (millisecond)
     */
    void sleep(size_t period);

    /**
     *  Function kill
     *  Kill the thread
     */
    void kill();

    /**
     *  Function reset
     *  Reset the thread with a new IRunnable
     *  @param p_runnable
     */
    void reset(tools::IRunnable* p_runnable);

  private:
    /////////////////////////////////////
    //////////////  FIELDS //////////////
    /////////////////////////////////////
    std::shared_ptr<tools::IRunnable> runnable;
    ThreadState state;

  };
}

#endif
