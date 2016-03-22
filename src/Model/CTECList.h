/*
 * CTECList.h
 *
 *  Created on: Mar 22, 2016
 *      Author: lbar8299
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"
#include <string>

template <class Type>
class CTECList : public Node<Type>
{
private:
	int size;
	ArrayNode<Type> head;
	ArrayNode<Type> end;
	void calculateSize();
	std::string searchItem;
public:
	CTECList();
	virtual ~CTECList();
	int getSize;
	void addToFront(const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int inex, const Type& value);
};



#endif /* MODEL_CTECLIST_H_ */
