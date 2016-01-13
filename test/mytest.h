#ifndef __COPERATION
#define __COPERATION

class COperation{
	public:
		int m_first;
		int m_second;
	public:
		virtual double getResult();
};

class AddOperation : public COperation{
	public:
		AddOperation(int hls, int rhs);
	public:
		virtual double getResult();
};


class Context{
	public:
		Context(COperation* theOP);
		double getResult();
	private:
		COperation* myOP;
};


#endif //__COPERATION
