












#ifndef tPrint_H_INCLUDED
#define tPrint_H_INCLUDED
#include<iostream>
#include<string.h>

//Welcome to tPrint by ToNk! a library to make your life a tiny bit easier! This is a short documentation.
//
// INSTALLATION
//		Upon placing the 'tPrint_0.4.h' file in an appropriate folder, include it inside of your main .cpp file by using #include 'tPrint_0.3'
//		Next, create a class object by writing 'tPrinter p1' ('tPrinter [any name you want]')
//		to use the functions use your obejct name and cal the function from there
//
// FUNCTIONS
//		Print(string msg)  Will simply spit out text to your console output, using cout, and an endline.
//
//		PrintStringArrayV(string x[],bool numbering) Will write out, all elements of your array, in a vertical manner. numbering = true will add numbers on every print
//
//		PrintStringArrayH(string x[]) Will write out, all elements of your array, in a horizontal manner.
//
//		PrintStringArrayI(string x[], string interlude) Will write out all your array elements in a horizontal manner, but will also put the interlude string inbetween every element
//
//		PrintIntArrayV(int x[],bool numbering) Will write out, all elements of your array, in a vertical manner. numbering = true will add numbers on every print
//
//		PrintIntArrayH(int x[]) Will write out, all elements of your array, in a horizontal manner.
//
//		PrintIntArrayI(int x[], int interlude) Will write out all your array elements in a horizontal manner, but will also put the interlude string inbetween every element
//
//		debugOn() will turn on the debugMode, providing messages as additional context for every operation
//
//		debugOff() turns off debugMode


using namespace std;

class tPrinter {
	public:
		bool debugMode;
		int actionIndex;
		string debugMessages[6] =
		{
			"-----<!> Printing String Array Vertically <!> Action Index: ",
			"-----<!> Printing String Array Horizontally <!> Action Index: ",
			"-----<!> Printing String Array  with an interlude <!> Action Index: ",
			"-----<!> Printing Int Array Vertically <!> Action Index: ",
			"-----<!> Printing Int Array Horizontally <!> Action Index: ",
			"-----<!> Printing Int Array  with an interlude <!> Action Index: ",
		};

		tPrinter(bool dM)
		{
			debugMode = dM;
			actionIndex = 1;
		}
		void Print(string msg)
		{
			cout << msg << endl;
		}
		void debugOn()
		{
			debugMode = true;
			cout << "-----<!> tPrint debug ON <!>-----" << endl;
		}
		void debugOff()
		{
			debugMode = false;
		cout << "-----<!> tPrint debug OFF <!>-----" << endl;
		}
		template <size_t N>
		void PrintStringArrayV(string(&x)[N], bool numbering)
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[0] << actionIndex << " <!>-----" << endl;
			}

			int size = N;
			if (numbering == false)
			{
				for (int a = 0; a < size; a++)
				{
					if (x[a] != "")
					{
						cout << x[a] << endl;
					}
				}
			}
			else
			{
				for (int a = 0; a < size; a++)
				{
					if (x[a] != "")
					{
						cout << a + 1 << ". " << x[a] << endl;
					}
				}
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
				actionIndex++;
			}
		}

		template <size_t N>
		void PrintStringArrayH(string(&x)[N])
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[1] << actionIndex << " <!>-----" << endl;
			}

			int size = N;
			for (int a = 0; a < size; a++)
			{
				cout << x[a] << " ";
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
				actionIndex++;
			}
			cout << endl;
		}

		template <size_t N>
		int arrayStringLenght(string(&x)[N])
		{
			return N;
		}

		template <size_t N>
		void PrintStringArrayI(string(&x)[N], string interlude)
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[2] << actionIndex << " <!>-----" << endl;
			}

			int size = N;
			cout << interlude;
			for (int a = 0; a < size; a++)
			{
				cout << x[a] << interlude;
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
					actionIndex++;
			}
			cout << endl;
		}

		template <size_t N>
		void PrintIntArrayV(int(&x)[N], bool numbering)
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[3] << actionIndex << " <!>-----" << endl;
			}

			int size = N;

			if (numbering == false)
			{
				for (int a = 0; a < size; a++)
				{
					if (x[a] != NULL)
					{
						cout << x[a] << endl;
					}

				}
			}
			else
			{
				for (int a = 0; a < size; a++)
				{
					if (x[a] != NULL)
					{
						cout << a + 1 << ". " << x[a] << endl;
					}
				}
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
					actionIndex++;
			}
		}

		template <size_t N>
		void PrintIntArrayH(int(&x)[N])
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[4] << actionIndex << " <!>-----" << endl;
			}

			int size = N;
			for (int a = 0; a < size; a++)
			{
				cout << x[a] << " ";
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
					actionIndex++;
			}
			cout << endl;
		}

		template <size_t N>
		int arrayIntLenght(int(&x)[N])
		{
			return N;
		}

		template <size_t N>
		void PrintIntArrayI(int(&x)[N], string interlude)
		{
			if (debugMode == true)
			{
				cout << endl;
				cout << debugMessages[5] << actionIndex << " <!>-----" << endl;
			}

			int size = N;
			cout << interlude;
			for (int a = 0; a < size; a++)
			{
				cout << x[a] << interlude;
			}
			if (debugMode == true)
			{
				cout << endl;
				cout << "-----<!> Ending Action Index: " << actionIndex << " -----<!>" << endl;
					actionIndex++;
			}
			cout << endl;
		}

};

#endif
