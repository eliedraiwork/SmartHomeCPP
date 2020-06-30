/**
 * Project: SmartHomeCPP
 * @file IUncopyable.h
 * @author Elie Drai
 * @version 1.0 28/06/2020
*/

#ifndef _IUNCOPYABLE_H
#define _IUNCOPYABLE_H

namespace tools
{
    /**
     * Class IUncopyable
     * @doc:
     * This class intends to define all the instances in the Project
     * which will be uncopyable
     * To do so, make the copy-constructor and the '=' operator to be private.
     */
    class IUncopyable
    {
    private:
        IUncopyable(const IUncopyable&);
        IUncopyable& operator=(IUncopyable& const);
    };
}




#endif
