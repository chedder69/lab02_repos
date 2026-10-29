#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2it/PR6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab6_2_IterativeTests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindMaxOdd)
        {
            int a[] = { 4, -7, 12, 9, -3, 6, 15, 2, 11, 8 };

            int result = FindMaxOdd(a, 10);

            Assert::AreEqual(6, result);
        }

        TEST_METHOD(TestSwapLastWithMaxOdd)
        {
            int a[] = { 4, -7, 12, 9, -3, 6, 15, 2, 11, 8 };
            int expected[] = { 4, -7, 12, 9, -3, 6, 8, 2, 11, 15 };

            SwapLastWithMaxOdd(a, 10);

            for (int i = 0; i < 10; i++)
                Assert::AreEqual(expected[i], a[i]);
        }

        TEST_METHOD(TestNoOdd)
        {
            int a[] = { 2, -4, 0, 8, 12 };
            int expected[] = { 2, -4, 0, 8, 12 };

            Assert::AreEqual(-1, FindMaxOdd(a, 5));

            SwapLastWithMaxOdd(a, 5);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i]);
        }

        TEST_METHOD(TestNegativeOdd)
        {
            int a[] = { -9, -3, -7, 4 };
            int expected[] = { -9, 4, -7, -3 };

            SwapLastWithMaxOdd(a, 4);

            for (int i = 0; i < 4; i++)
                Assert::AreEqual(expected[i], a[i]);
        }
    };
}