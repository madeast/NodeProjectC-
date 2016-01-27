/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: emad6932
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

template <class Type>
class Node
{
private:
	Type value;  //Container for the Value stored in the node.
	Node * pointers; //Pointer to the array of Nodes that are linked to this Node.
public:
	Node();
	virtual ~Node();
	Type getValue();
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */
