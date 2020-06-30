/**
 * Project: SmartHomeCPP
 * @file IUncopyable.cpp
 * @author Elie Drai
 * @version 1.0 28/06/2020
 *
*/

#include "IUncopyable.h"
using namespace tools;

IUncopyable::IUncopyable(const IUncopyable& uncopyable)
{

}


IUncopyable& IUncopyable::operator=(IUncopyable& const uncopyable)
{
	return uncopyable;
}
