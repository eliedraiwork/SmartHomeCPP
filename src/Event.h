/**
 * Project: SmartHomeCPP
 * @file Event.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#ifndef _EVENT_H
#define _EVENT_H

#include <ctime>
#include <string>
#include <iostream>


namespace event
{
    /**
     * Enumeration EventType
     * @doc:
     * As enumeration, list different type of events
     */
    enum class EventType
    {
        TEMPERATURE,
        MOVEMENT,
        NOISE_LEVEL
    };


    /**
     * Class Event
     * @doc:
     * This class intends to describe an event
     */
    class Event
    {

    private:
        /////////////////////////////////////
        //////////////  FIELDS //////////////
        /////////////////////////////////////
        std::time_t timestamp;
        int sender;
        std::string location;
        EventType type;
        std::string payload;

        /////////////////////////////////////
        ///////////  CONSTRUCTORS ///////////
        /////////////////////////////////////

        /**
         * Default Constructor
         * Private access
         */
        Event();
    public:
        /////////////////////////////////////
        ///////////  CONSTRUCTORS ///////////
        /////////////////////////////////////

        /**
         * Constructor
         * @param p_sender(int): id of the sender
         * @param p_location(std::string): location of the event
         * @param p_type(EventType): type of the event
         * @param p_payload(std::string): optionnal, additionnal data about the event
         */
        Event(
            int p_sender,
            std::string p_location,
            EventType p_type,
            std::string p_payload
        );

        /////////////////////////////////////
        /////////////  GET/SET //////////////
        /////////////////////////////////////
        std::time_t getTimestamp();
        int getSender();
        std::string getLocation();
        EventType getType();
        std::string getPayload();

        /////////////////////////////////////
        /////////////  METHODS //////////////
        /////////////////////////////////////
        void debug()
        {
            std::cout << "Sender: " << sender << std::endl;
            std::cout << "Timestamp: " << timestamp << std::endl;
            std::cout << "Location: " << location << std::endl;
            std::cout << "Type: " << (int)type << std::endl;
            std::cout << "Payload: " << payload << std::endl;
        }


    };
}



#endif
