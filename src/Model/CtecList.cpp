/*
 * CtecList.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: emad6932
 */

#include "CtecList.h"

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
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

}


