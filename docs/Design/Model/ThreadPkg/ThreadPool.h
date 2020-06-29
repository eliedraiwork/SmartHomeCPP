/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _THREADPOOL_H
#define _THREADPOOL_H

class ThreadPool {
public: 
    
void addEvent();
    
static void getThreadPool();
private: 
    vector<thread> threads;
    static void threadPool;
};

#endif //_THREADPOOL_H