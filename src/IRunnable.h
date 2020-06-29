/**
 * Project: SmartHomeCPP
 * @file IRunnable.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#ifndef _IRUNNABLE_H
#define _IRUNNABLE_H

namespace tools
{
  /**
   * Class IRunnable
   * @doc:
   * This class intends to describe all autonomous instances in the program
   * All this instances should have access to a run function which is defined
   * in the IRunnable class
   */
  class IRunnable
  {
  public:

    /**
     * Function to run a specific action
     */
    virtual void run() = 0;
  };
}




#endif
