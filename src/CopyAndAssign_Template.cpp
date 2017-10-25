// CopyAndAssign_Template.cpp : Defines the entry point for the console application.
//

#include "CopyAndAssign.h"

void func(CopyAndAssign ca_infunc){
	//copy constructor called
}
int main(int argc, char* argv[])
{
	CopyAndAssign ca1;		//no arg constructor
	CopyAndAssign ca2(ca1);	//copy constructor
	func(ca1);

	CopyAndAssign ca3;
	ca3 = ca1;				//assignment operator
}

