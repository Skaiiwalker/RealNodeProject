/*
 * ArrayNode.cpp
 *
 *  Created on: Mar 22, 2016
 *      Author: lbar8299
 */

#include "ArrayNode.h"

template<class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>()
{
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(const Type& value) : Node<Type>(value)
{
	this->value = value;
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(const Type& value, ArrayNode<Type> * next) : Node<Type>(value)
{
	this->value = value;
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::~ArrayNode()
{
	//TODO Auto-generated destructor stub
}

template <class Type>
void ArrayNode<Type> :: setNext(ArrayNode<Type> * next)
{
	this->next = next;
}

template<class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this->next;
}



