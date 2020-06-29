/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _DISPATCHER_H
#define _DISPATCHER_H

class Dispatcher {
public: 
    
static void getDispatcher();
    
void notify();
private: 
    static void dispatcher;
};

#endif //_DISPATCHER_H