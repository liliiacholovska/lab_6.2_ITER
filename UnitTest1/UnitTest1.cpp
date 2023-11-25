#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2(1)/lab6.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFindMinMax)
		{
			const int n = 5;
			int arr[n] = { 1, 2, 3, 4, 5 };

			int minValue = INT_MAX, maxValue = INT_MIN;
			findMinMax(arr, n, minValue, maxValue);

			Assert::AreEqual(1, minValue);
			Assert::AreEqual(5, maxValue);
		}
	};
}
