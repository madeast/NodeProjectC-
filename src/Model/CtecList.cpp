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

template <class Type>
int CtecList<Type> :: getSize()
	/**
	 * Function to return the number of nodes in the list.
	 * Postcondition: The value of count is returned.
	 */

	return size;
}

template<class Type>
Type CtecList<Type>:: removeFromFront()
{

	Type returnValue; //In case we need to use the value we are removing.

	assert(this->size > 0);
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead;
	newHead = head->getNext();

	Type thingToRemove;
	//Get what was in head node!
	thingToRemove = returnValue = head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	this->calculateSize();

	return thingToRemove;
}

template<class Type>
Type CtecList<Type>:: removeFromIndex(int index)
{

	Type returnValue; //In case we need to use the value we are removing.

	assert(this->size > 0);

	assert(size > 0 && index >= 0 && index < size);

	Type thingToRemove;

	ArrayNode<Type> * previous, deleteMe, newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index +1; spot++)
		{

		}

		this->calculateSize();
	}

	return thingToRemove;
}

/**
 * Calculates the size of the list by iterating over all of the nodes in the list
 */

template <class Type>
void CtecList<Type> :: calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++;
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer= counterPointer->getNext();
			count++;

		}
		this->size = count;
	}
}

template <class Type>
Type CtecList<Type> :: removeFromEnd()
{
	//loop over size
	//or
	//loop until getNext->getNext() == nullptr
	//Before return the variable call calculateSize().
	Type valueToRemove;

	ArrayNode<Type> * current = head;
	while(current->getNext()->getNext() != nullptr)
	{
		current = current++;
	}
	current = valueToRemove;

	if(current->getNext()->getNext() == nullptr)
	{
		delete current;
	}
	else
	{

	}

	this->calculateSize();
	return valueToRemove();
}

template <class Type>
void CtecList<Type> :: addToFront(Type value)
{
	//Function to insert newNode at the beginning of the list.
	//Postcondition: First points to the new List, newItem is
	//inserted at the end of the list, last points to the
	// last node in the list, and count is incremented by 1.

	ArrayNode<Type> * newNode; //Pointer to create the new node.

	newNode = new CtecList<Type>;
	newNode->value = value;
	newNode->getNext() = head;
	head = newNode;
	count++;

	if(end == NULL)
	{
		end = newNode;
	}
}

template <class Type>
void CtecList<Type> :: addToEnd(Type value)
{
	/**
	 * Function to insert newItem at the end of the list.
	 * Postcondition: first points to the new list, newItem is
	 * inserted at the beginning of the list, last points to
	 * the last node in the list, and count is incremented by
	 * 1.
	 */

}

template <class Type>
void CtecList<Type> :: addAtIndex(int index, Type value)
{

}

template <class Type>
Type CtecList<Type> :: getFront()
{
	/**
	 * Function to return the last element of the list.
	 * Precondition: The list must exist and must not be empty.
	 * Postcondition: If the list is empty, the program
	 * terminates; otherwise, the last
	 * element of the list is returned.
	 */
}

template <class Type>
Type CtecList<Type> :: getEnd()
{
	/**
	 * Function to return the last element of the list.
	 * Precondition: The list must exist and must not be empty.
	 * Postcondition: If the list is empty, the program terminates;
	 * 	otherwise, the first element of the list is returned.
	 */
}

template <class Type>
Type CtecList<Type> :: getFromIndex(int index)
{
	/**
	 * Function to determine whether searchItem is in the list.
	 * Postcondition: If the list is empty, the program
	 * terminates; otherwise, the last
	 * element of the list is returned.
	 */

	for(int index = 0; index <= 5; index++)
	{
		return
	}
}

template <class Type>
Type set(int index, Type value)
{

}


