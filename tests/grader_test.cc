#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

using namespace std;

int grade = 0;

TEST(CPPLibTest, ReturnIntro) {
  CPPLib cpplib;
  std::string actual = cpplib.PrintIntro();
  std::string expected = "";
  EXPECT_NE(expected, actual)<< "Error: Please fill up PrintIntro!";
  if (expected != actual){
    grade += 10;
    std::cout << "Grade: " << "10/10"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/10"<< std::endl;
  }
}

TEST(CPPLibTest, CalculateFactorial1) {
  CPPLib cpplib;

  std::vector<double> inputs = {1, 2, 3, 4, 5, 6, 15};
  std::vector<double> actual;

  for (auto &in : inputs) actual.push_back(cpplib.CalFactorial(in));

  std::vector<double> expected = {1, 2, 6, 24, 120, 720, 1307674368000};
  EXPECT_EQ(expected, actual) << "Error: The factorial calculation was wrong!";
  if (expected == actual){
    grade += 15;
    std::cout << "Grade: " << "15/15"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/15"<< std::endl;
  }
}

TEST(CPPLibTest, CalculateFactorial2) {
  CPPLib cpplib;
  std::vector<double> inputs = {0};
  std::vector<double> actual;
  for (auto &in : inputs) actual.push_back(cpplib.CalFactorial(in));
  std::vector<double> expected = {1};
  EXPECT_EQ(expected, actual) << "Error: 0! = 1";
  if (expected == actual){
     grade += 5;
     std::cout << "Grade: " << "5/5"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/5"<< std::endl;
  }
}

TEST(CPPLibTest, CalculateFactorialException1) {
  CPPLib cpplib;
  std::vector<double> inputs = {-1, -2, -100};
  std::vector<double> actual;
  for (auto &in : inputs) actual.push_back(cpplib.CalFactorial(in));
  std::vector<double> expected = {-1, -1, -1};
  EXPECT_EQ(expected, actual) << "Error: Please deal with exception!";
  if (expected == actual) {
    grade += 5;
    std::cout << "Grade: " << "5/5"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/5"<< std::endl;
  }
}

TEST(CPPLibTest, Flatten2DVector_HandlesNoneEmpty) {
  CPPLib cpplib;
  std::vector<std::vector<int>> inputs = {{1, 2, 3, 4},{5,6},{7,8}};
  std::vector<int> expect = {1,2,3,4,5,6,7,8};
  EXPECT_EQ(cpplib.Flatten2DVector(inputs), expect);
  if(cpplib.Flatten2DVector(inputs)==expect){
      grade += 10;
      std::cout << "Grade: " << "10/10"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/10"<< std::endl;
  }
}

TEST(CPPLibTest, Flatten2DVector_HandlesPartialEmpty) {
  CPPLib cpplib;
  std::vector<std::vector<int>> inputs = {{1, 2, 3},{},{4,5}};
  std::vector<int> expect = {1,2,3,4,5};
  EXPECT_EQ(cpplib.Flatten2DVector(inputs), expect);
	if(cpplib.Flatten2DVector(inputs)==expect){
    grade += 5;
    std::cout << "Grade: " << "5/5"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/5"<< std::endl;
  }
}

TEST(CPPLibTest, Flatten2DVector_HandlesEmpty) {
  CPPLib cpplib;
  std::vector<std::vector<int>> inputs = {};
  std::vector<int> expect = {};
  EXPECT_EQ(cpplib.Flatten2DVector(inputs), expect);
	if(cpplib.Flatten2DVector(inputs)==expect){
    grade += 5;
    std::cout << "Grade: " << "5/5"<< std::endl;
  } else {
    std::cout << "Grade: " << "0/5"<< std::endl;
  }
  std::cout << "Total Grade: " << grade << "/55"<< std::endl;
}
