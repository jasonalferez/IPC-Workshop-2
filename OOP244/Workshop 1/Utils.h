#pragma once
#ifndef FOURTHHEADER_UTILS_H // replace with relevant names
#define FOURTHHEADER_UTILS_H

namespace sdds {
	void flushkeys();
	bool ValidYesResponse(char ch);
	bool yes();
	void readCstr(char cstr[], int len);
	int readInt(int min, int max);

}

#endif