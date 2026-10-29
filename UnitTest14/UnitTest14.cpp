#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4pek/PR6.4pek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab6_4_RecursiveTests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMinAbsIndex)
        {
            double a[] = { 4.5, 1.2, -0.5, 3, -2, 6, 0.1 };

            int result = MinAbsIndex(a, 7, 0, 0);

            Assert::AreEqual(6, result);
        }

        TEST_METHOD(TestSumAbsAfterFirstNegative)
        {
            double a[] = { 4.5, 1.2, -0.5, 3, -2, 6, 0.1 };

            double result = SumAbsAfterFirstNegative(a, 7, 0, false);

            Assert::AreEqual(11.1, result, 0.0001);
        }

        TEST_METHOD(TestCompress)
        {
            double a[] = { 4.5, 1.2, -0.5, 3, -2, 6, 0.1 };
            double expected[] = { 4.5, 3, -2, 6, 0, 0, 0 };

            Compress(a, 7, -1, 2, 0, 0);

            for (int i = 0; i < 7; i++)
                Assert::AreEqual(expected[i], a[i], 0.0001);
        }

        TEST_METHOD(TestNoNegative)
        {
            double a[] = { 1, 2, 3, 4, 5 };

            double result = SumAbsAfterFirstNegative(a, 5, 0, false);

            Assert::AreEqual(0.0, result, 0.0001);
        }

        TEST_METHOD(TestCompressAll)
        {
            double a[] = { 1, 2, 3, 4, 5 };
            double expected[] = { 0, 0, 0, 0, 0 };

            Compress(a, 5, 1, 5, 0, 0);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i], 0.0001);
        }
    };
}