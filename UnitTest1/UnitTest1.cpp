#include "pch.h"
#include "CppUnitTest.h"
#include "..\laba1\Point.h"
#include "..\laba1\Point.cpp"
#include "..\laba1\rectangle.h"
#include "..\laba1\rectangle.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(PointUnitTesting)
	{
	public:
	
		Point p1 = Point(1,3);
		Point p2 = Point(2,7);

		TEST_METHOD(PointParametrConstructorTests) {
		
			Assert::IsTrue(p1.get_X() == 1);
			Assert::IsTrue(p1.get_Y() == 3);
		}
		TEST_METHOD(GetPointConstructorTests) {

			Assert::IsFalse(p1.get_X() == 1);
			Assert::IsFalse(p1.get_Y() == 3);
		}
		TEST_METHOD(SetPointTests) {

			int y = 10; p1.set_Y(y);
			int x = 0; p1.set_X(x);
			Assert::AreEqual(x, p1.get_X());
			Assert::AreEqual(y,p1.get_Y());
		}
	};
	TEST_CLASS(RectangleUnitTesting)
	{
	public:

		Rectangle rect = Rectangle(Point(0,2),4,5);

		TEST_METHOD(RectangleTargetConstructorTests) {

			Assert::IsTrue(rect.get_X() != 0 && rect.get_Y() != 0);
			Assert::IsTrue(rect.get_Height() != 0);
			Assert::IsTrue(rect.get_Lenth() != 0);
		}
		TEST_METHOD(RectangleEmptyConstructorTests) {

			Assert::IsTrue(rect.get_X() == 0 && rect.get_Y() == 0);
			Assert::IsTrue(rect.get_Height() == 0);
			Assert::IsTrue(rect.get_Lenth() == 0);
		}
		TEST_METHOD(HeightAndLenthTests) {

			Assert::IsFalse(rect.get_Height() == 0);
			Assert::IsFalse(rect.get_Lenth() == 0);
		}
		TEST_METHOD(SetRectangleTests) {

			rect.set_X(3);
			rect.set_Y(7);
			rect.set_Height(8);
			rect.set_Lenth(8);

			Assert::IsTrue(rect.get_X() == 3);
			Assert::IsTrue(rect.get_Y() == 7);
			Assert::IsFalse(rect.get_Height() == 0);
			Assert::IsFalse(rect.get_Lenth() == 0);
		}

	};


	TEST_CLASS(RectangleMethods) {
	public:

		int height = 5;
		int lenth = 4;
		Rectangle rect = Rectangle(Point(0, 0), lenth, height);

		TEST_METHOD(replaceCoordinatsTests) {

			int delX = 1;
			int delY = 2;
			rect.replace(delX,delY);
			Assert::IsFalse(rect.get_X() == 10+ delX);
			Assert::IsFalse(rect.get_Y() == 8 + delY);
		}

		TEST_METHOD(reSizeTests) {

			rect.reSize(3, 5);
			Assert::IsTrue(rect.get_Lenth() == 4 + 3);
			Assert::IsTrue(rect.get_Height() == 5 + 5);
		}

		TEST_METHOD(replaceTests) {

			rect.replace(1, 3);
			Assert::IsTrue(rect.get_Height() == 0 + height);
			Assert::IsTrue(rect.get_Lenth() == 0 + lenth);
		}

		TEST_METHOD(MinimumValue_X) {

			Assert::IsTrue(rect.min_x() == 0);
		}

		TEST_METHOD(MaximumValue_X) {

			Assert::IsTrue(rect.max_x() == 0 + height);
		}

		TEST_METHOD(MinimumValue_Y) {

			Assert::IsTrue(rect.min_y() == 0);
		}

		TEST_METHOD(MaximumValu_Y) {

			Assert::IsTrue(rect.max_y() == 0 + lenth);
		}

	};
	TEST_CLASS(operatorOverload) {

		public:
			Rectangle rect1 = Rectangle(Point(0, 0), 4, 3);
			Rectangle rect2 = Rectangle(Point(0, 0), 8, 10);

			TEST_METHOD(ResizeNaOdinPostIncrement) {
				rect1++;
				Assert::IsTrue(rect1.get_Height() == 3 + 1);
				Assert::IsTrue(rect1.get_Lenth() == 4 + 1);

			}

			TEST_METHOD(ResizeNaOdinPreIncrement) {
				++rect1;
				Assert::IsTrue(rect1.get_Height() == 3 + 1);
				Assert::IsTrue(rect1.get_Lenth() == 4 + 1);
			}

			TEST_METHOD(DecreasePoctIncrement) {
				rect2--;
				Assert::IsTrue(rect2.get_Height() == 10 - 1);
				Assert::IsTrue(rect2.get_Lenth() == 8 - 1);
			}

			TEST_METHOD(DecreasePreIncrement) {
				--rect2;
				Assert::IsTrue(rect2.get_Height() == 10 - 1);
				Assert::IsTrue(rect2.get_Lenth() == 8 - 1);
			}

			TEST_METHOD(AdditionRectangles) {
				rect1 += rect2;
				Assert::IsTrue(rect1.get_Height() == 8);
				Assert::IsTrue(rect1.get_Lenth() == 10);
			}

	};

	TEST_CLASS(RectanglePointTests)
	{
	public:

		Rectangle rect1 = Rectangle(Point(0, 2), 4, 5);
		Rectangle rect2 = Rectangle(Point(0, 2), 4, 5);

		TEST_METHOD(Point_A) {

			Point A(0, 2);
			Assert::IsTrue(A.get_X() == 0);
		}

		TEST_METHOD(Point_B) {

			Point B(4, 2);
			Assert::IsTrue(B.get_X() == 4);
		}

		TEST_METHOD(Point_C) {

			Point C(4, -3);
			Assert::IsTrue(C.get_Y() == -3);
		}

		TEST_METHOD(Point_D) {

			Point D(0, -3);
			Assert::IsTrue(D.get_X() == 0);
		}

	};

	TEST_CLASS(AnotherSimpleTests) {
		Point A = Point(4, 5);
		Point B = Point(0, 0);

		TEST_METHOD(UnitTest1) {

			Assert::IsTrue(A.get_X() == 4);
			Assert::IsTrue(A.get_Y() == 5);
		}

		TEST_METHOD(UnitTest2) {

			Assert::IsFalse(A.get_Y() == 4);
			Assert::IsFalse(A.get_X() == 5);
		}

		TEST_METHOD(UnitTest3) {

			Assert::IsFalse(A.get_X() == 0);
			Assert::IsFalse(B.get_X() == 1);
		}

		TEST_METHOD(UnitTest4) {

			int Y = 4;
			A.set_Y(Y);
			Assert::IsTrue(A.get_Y()==Y);
		}

		TEST_METHOD(UnitTest5) {

			int X = 5;
			B.set_X(X);
			Assert::IsTrue(B.get_X());
		}

		TEST_METHOD(UnitTest6) {

			int X = 7;
			int Y = 10;
			B.set_X(X + Y);
			Assert::IsTrue(B.get_X() == (X+Y));
		}

		TEST_METHOD(UnitTest7) {

			int X = -3;
			int Y = -10;
			A.set_X(X+Y);
			Assert::IsTrue(A.get_X()==(X+Y));
		}

	};
}
