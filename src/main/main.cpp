#include <iostream>
#include "common.hpp"
using namespace std;
/*#include <gtest/gtest.h>
TEST(main, Add)
{
  ASSERT_EQ(2, add(1, 1));
  ASSERT_EQ(5, add(3, 2));
  ASSERT_EQ(10, add(7, 3));
}
TEST(main, Sub)
{ 
   ASSERT_EQ(3, sub(5, 2));
   ASSERT_EQ(-10, sub(5, 15));
}*/
//int main() {
int main(int argc, char **argv) {
//	testing::InitGoogleTest(&argc, argv);
 //  	return RUN_ALL_TESTS();
	cout << "CMake:> Add Sub Mul Div\t" << add(20,30) << "\t" << sub(30,20)<<"\t" << mul(20,30) <<"\t" << divide(30,20) << endl;
       return(0);
}
