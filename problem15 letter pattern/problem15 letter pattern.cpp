#include <iostream>
#include <string>
using namespace std;



int readNumber(string msg)
{
	int num;
	do
	{
		cout << msg << endl;
		cin >> num;
	} while (num < 1 || num >26);

	return num;
}

char getLetter(int num)
{
	return char(num + 64);
}

void printLetterPattern(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			cout << getLetter(i);
		}
		cout << endl;
	}
}

int main()
{
	printLetterPattern(readNumber("enter number?"));
}

//int readNumber(string msg)
//{
//    int num;
//    cout << msg << endl;
//    cin >> num;
//    return num;
//}
//
//void printInvertedPattern(int num)
//{
//    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//
//    for (int x = 0; x <= num - 1; x++)
//    {
//        for (int i = 0; i <= x; i++)
//        {
//            cout << str[x];
//        }
//        cout << "\n";
//    }
//}
//
//int main()
//{
//    printInvertedPattern(readNumber("Please enter number?"));
//
//    return main();
//}