/*
template<class Type>
CTECArray<Type>:: get(int position)
{

} * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: emad6932
 */

#include "CTECArray.h"
#include <assert.h>

using namespace std;


template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	// TODO Auto-generated constructor stub
	this->size = size;
	this->head = nullptr;

	assert(size > 0);

	if(size <= 0)
	{
		cerr << "Impossible!" << endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;
		}
		else
		{
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;
		}
	}

}

template<class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
		delete deleteMe->getNext();
		deleteMe = head;
	}

	delete head;
}

template<class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template<class Type>
Type CTECArray<Type>:: get(int position)
{
	//Bounds check for size and negative.


		assert(position < size && position >= 0);


		ArrayNode<Type> * current = head;
		//Inclusive because I am inside the bounds guaranteed :D
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue(); //Grab the value stroed in the Node
								//Return a pointer to the value
			}
	}
}

template<class Type>
void CTECArray<Type>:: set(int position, const Type& value)
{

	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	for(int spot = 0; spot <= position; spot++)
	{
		if(position != spot )
			{
				 current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
	}

}



