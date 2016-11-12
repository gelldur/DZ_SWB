/*
 * infoelement.h
 *
 *  Created on: 21-10-2016
 *      Author: wawrzyniakw
 */

#ifndef INFOELEMENT_H_
#define INFOELEMENT_H_

#include <string>

class InfoElement {
public:
	std::string info; // information
	int time = 0; // time_to_show

	int getTime();

	InfoElement(const std::string& tinfo, int ttime);

	InfoElement() = default;
};

#endif /* INFOELEMENT_H_ */
