#pragma once
class CopyAndAssign
{
public:
	//NEED TO ADD A CONSTRUCTOR 
	//here is a single argument, could be multiple
	CopyAndAssign();

	virtual ~CopyAndAssign();
private:
	// overloaded assignment
	CopyAndAssign &operator=(const CopyAndAssign &other);

	//copy constructor
	CopyAndAssign(const CopyAndAssign &other);

	//Edit the following
	virtual void copy(const CopyAndAssign &other);
	virtual void destroy(void);

	//to illustrate
	char *cp;
};


