#pragma once
#ifndef __DCWPAUSE_H_20180417__
#define __DCWPAUSE_H_20180417__

#include <iostream>

// A non-external pause
void dcwpause() {
	std::cout << "Any key to exit..." << std::endl;
	char pauseBuff[2];
	std::cin.read(pauseBuff, 1);
}

#endif