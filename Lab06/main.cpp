/**
* @author Rob Chirpich
* @file main.cpp
* @date 11/13/19
* @brief Handles control of the program
**/
#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "QueueTester.h"

int main()
{
	QueueTester myQueueTester;
	myQueueTester.runTests();

	return 0;
}
