/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: emad6932
 */

#include "ArrayNode.h"
#include <iostream>
template <class Type>

ArrayNode<Type>::ArrayNode() : Node<Type>()
{
	// TODO Auto-generated constructor stub
}

template <class Type>
ArrayNode<Type>::ArrayNode(const Type& value) : Node<Type>(value)
{
	this->setValue(value);
	this->next = nullptr;
}

template <class Type>
ArrayNode<Type>::ArrayNode(const Type& value, ArrayNode * next) : Node<Type>(value)
{
	this->setValue(value);
	this->setNext(next);
}

template <class Type>
ArrayNode<Type>::~ArrayNode()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this->next;
}

template <class Type>
void ArrayNode <Type> :: setNext(ArrayNode * next)
{
	this->next = next;
}

template <class Type>
void ArrayNode<Type> :: swap (int indexOne, int indexTwo)
{
	assert(indexOne < size && indexTwo < size);
	ArrayNode<Type> * first = get(indexOne);
	ArrayNode<Type> * second = get(indexTwo);
	ArrayNode<Type> * temp = new ArrayNode<Type>();

	temp->setValue(first->getValue());
	first->setValue(second->getValue());
	second->setValue(temp->getValue());

	delete temp;
}

