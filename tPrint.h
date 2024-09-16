












#ifndef tPrint_H_INCLUDED
#define tPrint_H_INCLUDED
#include<iostream>
#include<string.h>

//Welcome to tPrint by ToNk! a library to make your life a tiny bit easier! This is a short documentation.
// 
//Print(string msg)  Will simply spit out text to your console output, using cout, and an endline.
// 
//PrintStringArrayV(string x[],bool numbering) Will write out, all elements of your array, in a vertical manner. numbering = true will add numbers on every print
//
//PrintStringArrayH(string x[]) Will write out, all elements of your array, in a horizontal manner.
//
//PrintStringArrayI(string x[], string interlude) Will write out all your array elements in a horizontal manner, but will also put the interlude string inbetween every element
//
//PrintIntArrayV(int x[],bool numbering) Will write out, all elements of your array, in a vertical manner. numbering = true will add numbers on every print
//
//PrintIntArrayH(int x[]) Will write out, all elements of your array, in a horizontal manner.
//
//PrintIntArrayI(int x[], int interlude) Will write out all your array elements in a horizontal manner, but will also put the interlude string inbetween every element

using namespace std;
void Print(string msg)
{
	cout << msg << endl;
}

void PrintStringArrayV(string x[], bool numbering)
{
	int n;
	if (numbering == false)
	{
		for (int a = 0; a < sizeof(x); a++)
		{
			if (x[a] != "")
			{
				cout << x[a] << endl;
			}
		}
	}
	else
	{
		for (int a = 0; a < sizeof(x); a++)
		{
			if (x[a] != "")
			{
				cout << a + 1 << ". " << x[a] << endl;
			}
		}
	}
}

void PrintStringArrayH(string x[])
{
	int n;
	for (int a = 0; a < sizeof(x); a++)
	{
		cout << x[a] << " ";
	}
}

void PrintStringArrayI(string x[], string interlude)
{
	int n;
	cout << interlude;
	for (int a = 0; a < sizeof(x); a++)
	{
		cout << x[a] << interlude;
	}
}


void PrintIntArrayV(int x[], bool numbering)
{
	int n;
	
	if (numbering == false)
	{
		for (int a = 0; a < sizeof(x); a++)
		{
			if (x[a] != NULL)
			{
				cout << x[a] << endl;
			}
			
		}
	}
	else
	{
		for (int a = 0; a < sizeof(x); a++)
		{
			if (x[a]!= NULL)
			{
				cout << a + 1 << ". " << x[a] << endl;
			}
		}
	}
}

void PrintIntArrayH(int x[])
{
	int n;
	for (int a = 0; a < sizeof(x); a++)
	{
		cout << x[a] << " ";
	}
}

void PrintIntArrayI(int x[],string interlude)
{
	int n;
	cout << interlude;
	for (int a = 0; a < sizeof(x); a++)
	{
		cout << x[a] << interlude;
	}
}



#endif