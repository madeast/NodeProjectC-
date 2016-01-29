/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: emad6932
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
using namespace std;

class NodeController
{
private:
	Node<int> myNode;
	ArrayNode<string> stringArryaNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
