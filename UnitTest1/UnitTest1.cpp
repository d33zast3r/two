#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication22/ConsoleApplication22.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int* a = new int[3];
			a[0] = 1;
			a[1] = 7;
			a[2] = -2;
			quicksort q1(a, 3);
			vector<int> b = q1.sort();
			vector<int> c;
			c.push_back(-2);
			c.push_back(1);
			c.push_back(7);
			for (int i = 0; i < 3; i++) {
				Assert::AreEqual(b[i], c[i]);
			}
			
		}
		TEST_METHOD(TestMethod2)
		{
			int* a = new int[4];
			a[0] = 1;
			a[1] = 90;
			a[2] = -90;
			a[3] = 0;
			quicksort q1(a, 4);
			vector<int> b = q1.sort();
			vector<int> c;
			c.push_back(-90);
			c.push_back(0);
			c.push_back(1);
			c.push_back(90);
			for (int i = 0; i < 4; i++) {
				Assert::AreEqual(b[i], c[i]);
			}

		}
	};
}
