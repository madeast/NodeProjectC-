/*
 * CtecList.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: emad6932
 */

#include "CtecList.h"
#include "assert.h"

template<class Type>
CtecList<Type>::CtecList()
{
	this->size= 0;
	this->head = nullptr;
	this->end = nullptr;

}

template <class Type>
CtecList<Type>::~CtecList()
{

}

template<class Type>
Type CtecList<Type>:: removeFromFront()
{

	Type returnValue; //In case we need to use the value we are removing.

	assert(size > 0);
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead;
	newHead = head->getNext();

	//Get what was in head node!
	returnValue = head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;
}

template<class Type>
Type CtecList<Type>:: removeFromIndex(int index)
{

	Type returnValue; //In case we need to use the value we are removing.

	assert(size > 0);
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >= 0 && index < size);
}

template <class Type>
Type CtecList<Type> :: removeFromEnd()
{
	//loop over size
	//or
	//loop until getNext                                                      ->getNext() == nullptr
}
