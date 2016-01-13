#include <iostream>
#include <stdlib.h>
#include "linearList.h"

const int defaultSize = 100;
template<class T>
class SeqList : public LinearList<T>{
	public:
		SeqList(int theValue = defaultSize);
		~SeqList(){ delete []data; data = NULL;}
		SeqList(SeqList<T>&);

		inline int size() const{ return maxSize; }
		inline int length() const{ return last + 1; }
		int search(T&) const;
		int Locate(int) const;
		const T& getData(int) const;
		void setData(int, T&);
		void remove(int, T&);
		void insert(int, T&);
		inline bool isEmpty() const{ return (last == -1) ? true : false; }
		inline bool isFull() const{return (last = maxSize - 1) ? true : false;} 
		void sort();
		void input();
		void output();
		SeqList<T> operator=(SeqList<T>&);

	private:
		T* data;		//存放数组
		int maxSize;	//最大能容纳数据的个数
		int last;		//当前所存表项的最后位置，a[0]的位置
};
