/*
 * infoelement.cpp
 *
 *  Created on: 21-10-2016
 *      Author: wawrzyniakw
 */

#include "infoelement.h"
#include <cstdlib>
#include <iostream>

int InfoElement::getTime() {
	return time;
}

InfoElement::InfoElement(const std::string& tinfo, int ttime)
	:info(tinfo),time(ttime)
{
}
