
#include "CopyAndAssign.h"
#include <string.h>

CopyAndAssign::CopyAndAssign(){
	
	//create some memory for Demp purposes
	cp=new char[20];
	memset(cp,0,20);
	memcpy(cp,"I Like Flowers",14);
}

//DO NOT EDIT...destructor
CopyAndAssign::~CopyAndAssign()
{
	//tidy up pointers
	destroy(); 
}

////DO NOT EDIT...assignment operator
CopyAndAssign& CopyAndAssign::operator=( const CopyAndAssign& rhs )
{
	//only take action if not auto-assignment
	if ( this != &rhs )
		copy( rhs );

	// return (reference to) current object for
	// chain-assignments
	return *this;
}

//ADD INITIALIZER LISTS IF USED...copy constructor
//OTHERWISE DO NOT EDIT
CopyAndAssign::CopyAndAssign( const CopyAndAssign &rhs)
{
	copy( rhs );
}

//EDIT THIS...copy other objects data
void CopyAndAssign::copy (const CopyAndAssign &rhs )
{
	//free existing memory
	destroy ();
	
	//be sure to put POINTER deep copy here
	//as well as other resources such as DB connections
	//open files, network sockets etc.
	//And also other member variables
	//ex. memcpy(m_pbString, rhs.m_pbString, m_dwLen);	
	int lenPlusNull = strlen(rhs.cp)+1;
	cp = new char[lenPlusNull];
	memcpy(cp,rhs.cp,lenPlusNull);
}

//EDIT THIS...deallocate and initialize 
void CopyAndAssign::destroy ()
{
	//free memory and initialize
	if (cp)
		delete [] cp;
	cp = NULL;
}
