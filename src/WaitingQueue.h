/**
 * Project: SmartHomeCPP
 * @file WaitingQueue.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#ifndef _WAITINGQUEUE_H
#define _WAITINGQUEUE_H

#include "IUncopyable.h"
#include "Event.h"
#include <queue>

namespace event
{
    /**
     * Class WaitingQueue
     * @doc:
     * Intends to represent a queue of event to treat
     * Singleton pattern
     */
    class WaitingQueue : public tools::IUncopyable
    {
    private:
        /**
         * Singleton concretization
         */
        static WaitingQueue instance;

        /////////////////////////////////////
        ////////////  CONSTRUCTOR ///////////
        /////////////////////////////////////

        /**
         *  Default constructor
         *  Private access
         */
        WaitingQueue();

        /////////////////////////////////////
        //////////////  FIELDS //////////////
        /////////////////////////////////////
        std::queue<event::Event> events;

    public:
        /**
         * Singleton concretization
         */
        static WaitingQueue& getInstance();

        /////////////////////////////////////
        //////////////  METHODS /////////////
        /////////////////////////////////////

        /**
         *  Dequeue function
         *  Remove from the queue the next event to process
         *  Handle the empty queue case
         *  @return the next event in the WaitingQueue
         */
        event::Event& dequeue();

        /**
         *  Enqueue function
         *  Enqueue an event into the waiting waiting queue
         */
        void enqueue(const event::Event p_event);

        /**
         *  Empty function
         *  Check if the queue is empty
         *  @return true if the queue is empty, false otherwise
         */
        bool empty() const;


    };
}

#endif
