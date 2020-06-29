/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _ICONTROLLER_H
#define _ICONTROLLER_H

#include "IAgent.h"
#include "Subscriber.h"


class IController: public IAgent, public Subscriber {
public: 
    
virtual void performAction() = 0;
};

#endif //_ICONTROLLER_H