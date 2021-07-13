#include "unity.h"

#include "prototypes.h"
#define PROJECT_NAME    "Sortingalgo"

// Prototypes for all the test functions 

void test_BubbleSort(void);
void test_InsertionSort(void);
void test_QuickSort(void);
void test_MergeSort(void);


// Required by the unity test framework */
void setUp(){}
void tearDown(){}

// Start of the application test 
int main()
{
// Initiate the Unity Test Framework 
  UNITY_BEGIN();

// Run Test functions 
  RUN_TEST(test_BubbleSort);
  RUN_TEST(test_InsertionSort);
  RUN_TEST(test_QuickSort);
  RUN_TEST(test_MergeSort);
  
  // Close the Unity Test Framework 
  return UNITY_END();
}

// Write all the test functions  
void test_BubbleSort(void) {
 int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=BubbleSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  
}

void test_InsertionSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=InsertionSort(list,3);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
  
  
}

void test_QuickSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=QuickSort(list,0,2);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
}

void test_MergeSort(void) {
   int expected[]={10, 12, 13};
   int list[]={10, 13, 12};
   int* actual=MergeSort(list,0,2);
   TEST_ASSERT_EQUAL_INT_ARRAY(expected,actual,3);
}



