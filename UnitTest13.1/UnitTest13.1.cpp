#include "pch.h"
#include "CppUnitTest.h"
#include "../lab13.1/dod.h"
#include "../lab13.1/var.h"
#include "../lab13.1/sum.h"
#include "../lab13.1/lab13.1.cpp"
#include "../lab13.1/sum.cpp"
#include "../lab13.1/dod.cpp"
#include "../lab13.1/var.cpp"

using namespace nsDod;
using namespace nsVar;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			x = 1; 
			n = 0;
			a = 1.0; 

			dod();

			Assert::AreEqual(a, 0, 0.1);
		}
	};
}
