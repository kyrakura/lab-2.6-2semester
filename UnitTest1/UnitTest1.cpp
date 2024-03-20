#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.6/StudentC.h"
#include "D:\project C++ 2\lab 2.6\lab 2.6\StudentC.cpp"
#include "D:\project C++ 2\lab 2.6\lab 2.6\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			StudentC student;
			student.Init("Computer Science", "John", 25, 'M', 75.5);

			Assert::AreEqual("Computer Science", student.getSpec().c_str());
			Assert::AreEqual("John", student.getMan().getName().c_str());
			Assert::AreEqual(25, student.getMan().getAge());
			Assert::AreEqual('M', student.getMan().getGender());
			Assert::AreEqual(75.5, student.getMan().getWeight());
		}
	};
}
