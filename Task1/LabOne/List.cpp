#include "pch.h"
#include "List.h"

/*
template<typename T>
void List<T>::push_back(T field)
{
	if (head == nullptr) {
		head = new Node<T>(field);
	}
	else {
		Node<T> *lastItemSearch = this->head;
		while (lastItemSearch->nextNode != nullptr) {
			lastItemSearch = lastItemSearch->nextNode;
		}
		lastItemSearch->nextNode = new Node<T>(field);
	}

	sizeOfList++;
}

template<typename T>
void List<T>::push_front(T field) 
{
	if (head == nullptr) {
		head = new Node<T>(field);
	}
	else {
		Node<T> *firstItem = this->head;
		head = new Node<T>(field);
		head->nextNode = firstItem;
	}

	sizeOfList++;
}

template<typename T>
void List<T>::pop_back() 
{
	if (head != nullptr) {
		Node<T> *penultimateItemSearch = this->head;

		if (head->nextNode == nullptr) {
			delete penultimateItemSearch;
			head = nullptr;
		} else {
			while (penultimateItemSearch->nextNode->nextNode != nullptr) {
				penultimateItemSearch = penultimateItemSearch->nextNode;
			}

			delete penultimateItemSearch->nextNode;
			penultimateItemSearch->nextNode = nullptr;
		}

		sizeOfList--;
	}
}


template<typename T>
void List<T>::pop_front() 
{
	if (head != nullptr) {
		Node<T> *firstElem = this->head;

		if (head->nextNode == nullptr) {
			delete firstElem;
			head = nullptr;
		} else {
			head = head->nextNode;
			delete firstElem;
		}

		sizeOfList--;
	}
}


template<typename T> 
void List<T>::insert(T field, int index) 
{
	if (index < 0) throw invalid_argument("Index must be >= 0");
	if (index > sizeOfList) throw invalid_argument("Index is larger than size of list");


	if (index == 0) push_front(field);
	else {
		Node<T> *newItem = new Node<T>(field);
		Node<T> *beforeNewItem = this->head;

		int currentIndex = 0;

		while (currentIndex + 1 != index) {
			beforeNewItem = beforeNewItem->nextNode;
			currentIndex++;
		}

		newItem->nextNode = beforeNewItem->nextNode;
		beforeNewItem->nextNode = newItem;

		sizeOfList++;
	}
}


template<typename T>
T List<T>::At(int index)
{
	if (index < 0) throw invalid_argument("Index must be >= 0");
	if (index > sizeOfList) throw invalid_argument("Index is larger than size of list");

	Node<T> *itemSearch = this->head;
	int currentIndex = 0;

	while (itemSearch != nullptr) {
		if (currentIndex == index) return itemSearch->field;
		currentIndex++;
	}
}

template<typename T>
void List<T>::remove(int index)
{
	if (index < 0) throw invalid_argument("Index must be >= 0");
	if (index > sizeOfList) throw invalid_argument("Index is larger than size of list");

	if (index == 0) pop_front();
	else {
		Node<T> *beforeDeleted = this->head;
		int currentIndex = 0;

		while (currentIndex + 1 != index) {
			beforeDeleted = beforeDeleted->nextNode;
			currentIndex++;
		}

		delete beforeDeleted->nextNode;
		beforeDeleted->nextNode = nullptr;
		
		sizeOfList--;
	}
}

template<typename T>
void List<T>::set(T field, int index)
{
	if (index < 0) throw invalid_argument("Index must be >= 0");
	if (index > sizeOfList) throw invalid_argument("Index is larger than size of list");

	Node<T> *itemSearch = this->head;
	int currentIndex = 0;

	while (currentIndex != index) {
		itemSearch = itemSearch->nextNode;
		currentIndex++;
	}

	itemSearch->field = field;
}


template<class T> ostream &operator<<(ostream &out, List<T> list)
{
	int currentIndex = 0;
	while (currentIndex < list.getSize()) {
		out << currentIndex << " element is {" << list.At(currentIndex) << "} " << endl;
		currentIndex++;
	}

	return out;
}
*/