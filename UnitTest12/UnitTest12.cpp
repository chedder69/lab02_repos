#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.3pek/PR6.3pek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab6_3_RecursiveTests
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSort)
        {
            int a[] = { 9, 3, 7, 5, 8 };
            int expected[] = { 3, 5, 7, 8, 9 };

            Sort(a, 5, 1, 0);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i]);
        }

        TEST_METHOD(TestSortTemplateInt)
        {
            int a[] = { 5, -2, 5, 0, -1 };
            int expected[] = { -2, -1, 0, 5, 5 };

            Sort<int>(a, 5, 1, 0);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i]);
        }

        TEST_METHOD(TestSortTemplateDouble)
        {
            double a[] = { 9.2, 3.1, 7.3, 5.4, 8.5 };
            double expected[] = { 3.1, 5.4, 7.3, 8.5, 9.2 };

            Sort<double>(a, 5, 1, 0);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i], 0.0001);
        }

        TEST_METHOD(TestSortedArray)
        {
            int a[] = { 1, 2, 3, 4, 5 };
            int expected[] = { 1, 2, 3, 4, 5 };

            Sort<int>(a, 5, 1, 0);

            for (int i = 0; i < 5; i++)
                Assert::AreEqual(expected[i], a[i]);
        }
    };
}