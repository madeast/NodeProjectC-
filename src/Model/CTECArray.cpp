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
#include "Node.h"
using namespace std;


template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	// TODO Auto-generated constructor stub

}

template<class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template<class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template<class Type>
Type* CTECArray<Type>:: get(int position)
{
	//Bounds check for size and negative.
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> *current = head;
		//Inclusive because I inside the bounds guaranteed :D
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template<class Type>
void CTECArray<Type>:: set(int position, Type value)
{

	if(position >= size || position < 0)
	{
		cerr << "Don't do that." << endl;
	}
	else
	{

	}
}


	int getSize();
	Type get(int position);
	void set(int position ,Type value);
