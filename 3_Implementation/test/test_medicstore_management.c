#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <medicstore_management.h>
#define PROJECT_NAME    "Medical_store_management_system"

/* Prototypes for all the test functions */
void test_addentry(void);
void test_display(void);
void test_deleteentry(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add entry", test_addentry);
  CU_add_test(suite, "display", test_display);
  CU_add_test(suite, "delete entry", test_deleteentry);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

struct medicine
{
    int price,stock;
    char name[50],mfg_date[12],exp_date[12];
}m[100];
struct returned_struct = {1,1,a,1,1};
struct expected_struct = {2,2,b,2,2};

test_struct(expected_struc,returned_struct)
{
  TEST_ASSERT_EQUAL(expected_struct.price,returned_struct.price);
  TEST_ASSERT_EQUAL(expected_struct.stock,returned_struct.stock);
  TEST_ASSERT_EQUAL(expected_struct.name,returned_struct.name);
  TEST_ASSERT_EQUAL(expected_struct.mfg_date,returned_struct.mfg_date);
  TEST_ASSERT_EQUAL(expected_struct.exp_date,returned_struct.exp_date);
}
/* Write all the test functions 
void test_addentry(void) {
  CU_ASSERT(a == addentry(a));
  
 /* Dummy fail
  CU_ASSERT(a == addentry(a));
}

void test_display(void) {
  CU_ASSERT(a == display(a,1));
  
  /* Dummy fail
  CU_ASSERT(1 == display(a,1));
}

void test_deleteentry(void) {
  CU_ASSERT(0 == deleteentry(a,2));
  
  /* Dummy fail
  CU_ASSERT(2 == deleteentry(c,4));
}
*/

