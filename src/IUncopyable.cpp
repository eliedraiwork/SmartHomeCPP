/**
 * Project: SmartHomeCPP
 * @file IUncopyable.cpp
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#include "IUncopyable.h"

IUncopyable::IUncopyable(const IUncopyable& uncopyable)
{

}


IUncopyable::IUncopyable& operator=(const IUncopyable& uncopyable)
{
  return uncopyable;
}
