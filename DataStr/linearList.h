//#include <iostream>
#ifndef __LINEARLIST__
#define __LINEARLIST__

template<class T>
class LinearList{
	public:
		LinearList();											//构造函数
		virtual ~LinearList();									//虚析构,基类的析构函数要被子类继承的最好写成虚析构
		LinearList(LinearList<T>&);								//拷贝构造

		virtual int size() const = 0;							//线性表的最大体积
		virtual int length() const = 0;							//线性表的长度
		virtual int search(T&) const = 0;						//在线性表中查找指定的元素
		virtual int Locate(int) const = 0;						//定位线性表中i位置元素的位置
		virtual void getData(int, T&) const = 0;				//获取i位置元素的数据
		virtual void setData(int, T&) = 0;						//设定i位置元素数据
		virtual void insert(int, T&)  = 0;						//在i位置上插入元素
		virtual void remove(int, T&)  = 0;						//删除i位置的元素
		virtual bool isEmpty() const = 0;						//判断是否是空表
		virtual bool isFull() const = 0;						//判断表时候为空
		virtual void sort() = 0;								//对表中的数据进行排序
		virtual void input() = 0;								//输入
		virtual void output() = 0;								//输出
		virtual LinearList<T> operator=(LinearList<T>&) = 0;	//复制
	private:
};

#endif //__LINEARLIST__
