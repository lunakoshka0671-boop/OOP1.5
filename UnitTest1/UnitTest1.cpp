#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.5/Man.cpp"
#include "../OOP1.5/Student.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StudentTests
{
    TEST_CLASS(ManTests)
    {
    public:

        TEST_METHOD(TestManInit)
        {
            Man man;

            Assert::IsTrue(
                man.Init("Ivan", 20, "male", 70)
            );

            Assert::AreEqual(
                std::string("Ivan"),
                man.getName()
            );

            Assert::AreEqual(20, man.getAge());

            Assert::AreEqual(
                std::string("male"),
                man.getGender()
            );

            Assert::AreEqual(70.0, man.getWeight());
        }


        TEST_METHOD(TestManSetters)
        {
            Man man;

            Assert::IsTrue(man.setName("Olena"));
            Assert::IsTrue(man.setAge(19));
            Assert::IsTrue(man.setGender("female"));
            Assert::IsTrue(man.setWeight(55));

            Assert::AreEqual(
                std::string("Olena"),
                man.getName()
            );

            Assert::AreEqual(19, man.getAge());

            Assert::AreEqual(
                std::string("female"),
                man.getGender()
            );

            Assert::AreEqual(55.0, man.getWeight());
        }


        TEST_METHOD(TestManInvalidValues)
        {
            Man man;

            Assert::IsFalse(man.setName(""));
            Assert::IsFalse(man.setAge(-1));
            Assert::IsFalse(man.setAge(121));
            Assert::IsFalse(man.setGender("unknown"));
            Assert::IsFalse(man.setWeight(0));
            Assert::IsFalse(man.setWeight(-10));
        }


        TEST_METHOD(TestManChangeMethods)
        {
            Man man;

            man.Init("Ivan", 20, "male", 70);

            Assert::IsTrue(man.ChangeName("Petro"));
            Assert::IsTrue(man.ChangeAge(21));
            Assert::IsTrue(man.ChangeWeight(75));

            Assert::AreEqual(
                std::string("Petro"),
                man.getName()
            );

            Assert::AreEqual(21, man.getAge());
            Assert::AreEqual(75.0, man.getWeight());
        }


        TEST_METHOD(TestStudentInit)
        {
            Man man;

            man.Init("Ivan", 20, "male", 70);

            Student student;

            Assert::IsTrue(
                student.Init(man, 2)
            );

            Assert::AreEqual(
                2,
                student.getCourse()
            );

            Assert::AreEqual(
                std::string("Ivan"),
                student.getMan().getName()
            );
        }


        TEST_METHOD(TestStudentCourse)
        {
            Man man;

            man.Init("Ivan", 20, "male", 70);

            Student student;

            student.Init(man, 2);

            Assert::IsTrue(
                student.ChangeCourse(3)
            );

            Assert::AreEqual(
                3,
                student.getCourse()
            );

            Assert::IsTrue(
                student.IncreaseCourse()
            );

            Assert::AreEqual(
                4,
                student.getCourse()
            );
        }


        TEST_METHOD(TestStudentInvalidCourse)
        {
            Man man;

            man.Init("Ivan", 20, "male", 70);

            Student student;

            student.Init(man, 2);

            Assert::IsFalse(
                student.ChangeCourse(0)
            );

            Assert::IsFalse(
                student.ChangeCourse(7)
            );
        }


        TEST_METHOD(TestStudentToString)
        {
            Man man;

            man.Init("Ivan", 20, "male", 70);

            Student student;

            student.Init(man, 2);

            std::string result = student.toString();

            Assert::IsTrue(
                result.find("Ivan") != std::string::npos
            );

            Assert::IsTrue(
                result.find("course = 2") != std::string::npos
            );
        }
    };
}
