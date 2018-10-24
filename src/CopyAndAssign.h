#pragma once
class CopyAndAssign
{
public:
	//NEED TO ADD A CONSTRUCTOR 
	//here is a single argument, could be multiple
	CopyAndAssign();

	virtual ~CopyAndAssign();

//private:
	//NOTE: make the following declarations private
	//and you cannot copy or assign!  But friends and object 
	//member functions can still access them.  You can 
	//eliminate this too by not defining either in the 
	//cpp file
	
	// overloaded assignment
	CopyAndAssign &operator=(const CopyAndAssign &other);

	//copy constructor
	CopyAndAssign(const CopyAndAssign &other);

private:	
	//Edit the following
	virtual void copy(const CopyAndAssign &other);
	virtual void destroy(void);

	//to illustrate
	char *cp;
};


