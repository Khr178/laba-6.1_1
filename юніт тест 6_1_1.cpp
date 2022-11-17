#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 6_1_1/лаба 6_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест611
{
	TEST_CLASS(юніттест611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			b = main();
			Assert::AreEqual(b, 0);
		}
	};
}
