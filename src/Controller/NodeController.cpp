/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: emad6932
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this->myNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
			notHipsterInts->set(index, (23 * index));
	}

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts->get(index) << endl;
	}
}
