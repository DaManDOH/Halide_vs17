#pragma once
#ifndef __DCWUTILITY_H_20180630__
#define __DCWUTILITY_H_20180630__

#include <iostream>

/*
* A non-external pause
*/
void dcwPause() {
	std::cout << "Enter key to continue..." << std::endl;
	char pauseBuff[2];
	std::cin.read(pauseBuff, 1);
}

/*
* Check endian-ness
*
* Returns true if big endian, false otherwise.
*/
bool dcwBigEndianness() {
	unsigned __int32 value = 0x0a000007;
	char * valueView = (char*)&value;
	return valueView[3] == '\n';
}

#endif /* __DCWUTILITY_H_20180630__ */
