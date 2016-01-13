#include <iostream>
#include <stdlib.h>
#include "seqList.h"

template<class T>
SeqList<T>::SeqList(int theSize){
	data = NULL;
	maxSize = theSize, last = -1;
	try{
		data = new T[maxSize + 1];
		if(NULL == data)
			std::cerr << "constructure failure!" << std::endl;
	}
	catch(std::exception& e){
		
	}
}

template<typename T>
SeqList<T>::SeqList(SeqList<T>& lhs){
	maxSize = lhs.size();	
	last = lhs.length() - 1;
	data = new T[maxSize];
	if(NULL == data)
		std::cerr << " copy constructure failure!" << std::endl;
	for(int i = 1; i < lhs.last-1; ++i)
		data[i - 1] = hls.getData(i);
}

//int SeqList::search(T&) const
//int SeqList::Locate(int) const
//void SeqList::setData(int, T&)
//void SeqList::remove(int, T&)
//void SeqList::insert(int, T&)
//void SeqList::sort()
//void SeqList::input()
//void SeqList::output()
//SeqList<T> SeqList::operator=(SeqList<T>&)

