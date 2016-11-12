/*
 * infoelement.cpp
 *
 *  Created on: 21-10-2016
 *      Author: wawrzyniakw
 */

#include "infoelement.h"
#include <cstdlib>
#include <iostream>
#include <string.h>

int InfoElement::getTime() {
	return time;
}

InfoElement::InfoElement(char *tinfo, int ttime) {
	info = strdup(tinfo);
	time = ttime;
}

InfoElement::InfoElement() {
	info = "";
	time = 0;
}

InfoElement::InfoElement(const InfoElement &obj) {
	info = strdup(obj.info);
	time = obj.time;
}

