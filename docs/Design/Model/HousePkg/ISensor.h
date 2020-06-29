/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _ISENSOR_H
#define _ISENSOR_H

#include "IAgent.h"
#include "Caster.h"


class ISensor: public IAgent, public Caster {
public: 
    
/**
 * See further if this operation should be concretized inside ISensor.
 */
virtual void createEvent() = 0;
};

#endif //_ISENSOR_H