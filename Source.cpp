#include "conslib.h"
void main()
{
	setCursorVisibility(false);
	
	for (int i = 0;i < 1000;i++) {
		printat((i%25+i*i%25 + i*i*i%30)%50, i%20, "*");
		pause(100);
	}
	waitAnyKey();
}
// denisov.univ@gmail.com