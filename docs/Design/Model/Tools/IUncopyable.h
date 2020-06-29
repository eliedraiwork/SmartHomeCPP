/**
 * Project SmartHome
 * @author Elie Drai
 * @version 1.0.
 */


#ifndef _IUNCOPYABLE_H
#define _IUNCOPYABLE_H

class IUncopyable {
private:
  IUncopyable();
  IUncopyable(const IUncopyable&);
  IUncopyable & operator=(const IUncopyable&);
};

#endif //_IUNCOPYABLE_H
