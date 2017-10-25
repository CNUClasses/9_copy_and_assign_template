#pragma once
class CopyAndAssign
{
public:
	//NEED TO ADD A CONSTRUCTOR 
	//here is a single argument, could be multiple
	CopyAndAssign();

	virtual ~CopyAndAssign();

	// overloaded assignment
	CopyAndAssign &operator=(CopyAndAssign const &other);

	//copy constructor, destructor
	CopyAndAssign(CopyAndAssign const &other);

private:
	//Edit the following
	virtual void copy(CopyAndAssign const &other);
	virtual void destroy(void);

	//to illustrate
	char *cp;
};


