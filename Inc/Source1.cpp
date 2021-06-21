/*
 * Source1.cpp
 *
 *  Created on: Jun 20, 2021
 *      Author: Eyal
 */

#include <iostream>
#include "Source1.h"

using namespace std;

bool HelloWorld(void)
{
	 cout << "Hello World!\r\n";

	 if(HELLO_WORLD==10)
		 cout << "Hello World = 10";
	 else
		 return false;

	 return true;
}


