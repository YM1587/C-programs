/* Basics of function
function is basically a set of statements that takes inputs,perform some computation and produces output
SYNTAX: Return_type function_name(set _of_inputs);
REASONS OF USING FUNCTIONS
1. Reusability
2. Abstruction(allowing programmer to focus on what the code does and not how it does it)
3. Modularity-enables breakdown of coplex tasks into smaller ,manageable inits*/

#include<stdio.h>
int areaOfRectangle(int length,int breadth)
{
	int area;
	area=length*breadth;
	return area;
}
int main(int argc, char** argv)
{
	int l=10,b=5;
	int area=areaOfRectangle(l,b);
	printf("%d\n",area);
	
    l=100,b=5;
	area=areaOfRectangle(l,b);
	printf("%d\n",area);
 
}
/*FUNCTION DECLARATION
Also called function prototype and it means declaring the properties of a function to the compiler
it informs the ccompiler of the function name,function parameters and return value data type
ie int fun(int,char);
 PROPERTIES
 1. Name of function is :fun
 2. Return type of the function: int
 3. Number of parameters are :2(int and char)*/
 
 
 
 