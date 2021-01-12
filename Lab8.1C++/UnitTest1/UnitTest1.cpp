#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1C++/Lab8.1C++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[128] = "ononon";
			Assert::AreEqual(5, Count(str));

		}
	};
}
