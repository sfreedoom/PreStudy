#ifndef __CONSTRUCTOR_H
#define __CONSTRUCTOR_H

class Test{
	public:
		Test(const char* theData = nullptr);
		Test(Test&& t);
		Test& operator=(Test&& t);
		Test(const Test& t);
		Test& operator=(const Test& t);
		~Test();

	public:
		friend std::ostream& operator<<(std::ostream& theOutput, const Test& t);

	private:
		char* m_pData;
};

#endif //__CONSTRUCTOR_H
