#include <gtest.h>
#include "calculate.h"


TEST(calculator_can_alg_summ1){
string str="a+b";
EXPECT_EQ("ab+",postfix_note(str));
}

TEST(calculator_can_alg_summ2){
string str="a-b";
EXPECT_EQ("ab-",postfix_note(str));
}

TEST(calculator_can_mult){
string str="a*b";
EXPECT_EQ("ab*",postfix_note(str));
}

TEST(calculator_can_div){
string str="a/b";
EXPECT_EQ("ab/",postfix_note(str));
}

TEST(calculator_can_div_and_brack){
string str="a/(b+c)";
EXPECT_EQ("abc+/",postfix_note(str));
}

TEST(calculator_v1){
string str="a*(b+c-d)+(d/(f-c)-(k+l)/s)";
EXPECT_EQ("abc+d-*dfc-/kl+s/-+",postfix_note(str));
}

TEST(trow_calculator_v1_with_no_one_brk){
string str="a*(b+c-d)+(d/(f-c)-(k+l)/s";
ASSERT_ANY_THROW(postfix_note(str));
}
TEST(calculator_can_div_and_brack_and_mult){
string str="a/(b+c)*d";
EXPECT_EQ("abc+/d*",postfix_note(str));
}
