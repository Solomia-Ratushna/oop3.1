#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.1/Rational.h"
#include "../lab3.1/Rational.cpp"
#include "../lab3.1/Pair.h"
#include "../lab3.1/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rational A(2, 10), B(2, 10);
			Assert::AreEqual(A.ComparePairs(A, B), 3);
		}
	};
}