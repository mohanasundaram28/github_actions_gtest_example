#include "gtest/gtest.h"

class DivFunTestSuite : public testing::TestWithParam<std::tuple<int, int, int>>

{

    protected:

    DivFunTestSuite(){}

    ~DivFunTestSuite(){}

};

int divfun(int numer,int deno)
{
if(deno == 0 || deno <= 0 ){return(0);}

return(numer/ deno);

}

TEST_P(DivFunTestSuite,HandleValidinput)
{


int numeror =std::get<0>(GetParam());
int deno = std::get<1>(GetParam());
int exp_val =std::get<2>(GetParam());
int act_val = divfun(numertor,deno);
ASSERT_EQ(act_val,exp_val);


//int numertor =10;
//int deno = 2;
//int exp_val =5;
//int act_val = divfun(numertor,deno);
//ASSERT_EQ(act_val,exp_val);

}


INSTANTIATE_TEST_SUITE_P(
        divfunTestSuitExample,
        DivFunTestSuite,
        ::testing::Values(
                std::make_tuple(10,5,2),
                std::make_tuple(10,1,10),               
                std::make_tuple(200,10,21)));
                
