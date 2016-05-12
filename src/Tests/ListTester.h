/*
 * ListTester.h
 *
 *  Created on: Mar 2, 2016
 *      Author: cody.henrichsen
 */

#ifndef TESTS_LISTTESTER_H_
#define TESTS_LISTTESTER_H_

#include "../Model/CtecList.cpp"
#include <string.h>


class ListTester
{
private:
	int passCount;
	std::string passMessage;
	void setUp();
	void tearDown();
	CtecList<int> * testIntList;
	CtecList<std::string> * testStringList;
public:
	ListTester();
	void allTests();
	void testConstructor();
	void testAdds();
	void testRemoves();
	void testGets();
	void testSet();
	void testSize();
};

#endif /* TESTS_LISTTESTER_H_ */
