/**
 * Project: SmartHomeCPP
 * @file Mutex.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/


#ifndef _MUTEX_H
#define _MUTEX_H

namespace sync
{
  /**
   * Class Mutex
   * @doc:
   * Intends to define a mutual exclusion object
   */
  class Mutex
  {
  public:
    /////////////////////////////////////
    ////////////  CONSTRUCTOR ///////////
    /////////////////////////////////////

    /**
     *  Default constructor
     *  Instantiate the mutex with locked = false
     */
    Mutex();

    /////////////////////////////////////
    //////////////  METHODS /////////////
    /////////////////////////////////////

    /**
     *  Function lock
     *  Lock the mutex until someone unlock it
     */
    void lock();

    /**
     *  Function lock
     *  Unlock the mutex
     */
    void unlock();



  private:
    /////////////////////////////////////
    //////////////  FIELDS //////////////
    /////////////////////////////////////
    bool locked;
  };
}

#endif
