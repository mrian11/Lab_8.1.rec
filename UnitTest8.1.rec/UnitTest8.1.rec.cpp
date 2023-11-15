#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_8.1.rec/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Count("d,-g..g,-", 0), 2);
		}
	};
}
