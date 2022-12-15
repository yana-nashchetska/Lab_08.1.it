#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab__08_1.it/Lab__08_1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iteracijnyj
{
	TEST_CLASS(UnitTest81iteracijnyj)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char rjadok[] = "nlo";
			int k = 1;
			int t = Count(rjadok);
			Assert::AreEqual(k, t);
		}
	};
}
