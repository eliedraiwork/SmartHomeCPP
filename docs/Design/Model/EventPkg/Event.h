/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _EVENT_H
#define _EVENT_H

class Event {
private: 
    Time timestamp;
    EventType type;
    object payload;
    string location;
    int sender;
};

#endif //_EVENT_H