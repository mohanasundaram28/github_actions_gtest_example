#include <gtest/gtest.h>
class C{};
class B{
 C* ptr;
    public:
B(C* addressofobject):ptr{addressofobject}
    {
        
    }
    bool operation()
    {
        return(true);
    }

};
class A{

    B* ptr;
    public:
    A(B* addressofobject):ptr{addressofobject}
    {

    }     
};

TEST(TestfixtureTestsuit,operationTest){

    C cobj;
    B bobj(&cobj);
    A obj(&bobj);
    ASSERT_TRUE(obj.operation);    

}
TEST(TestfixtureTestsuit,operationTest){

   C cobj;
    B bobj(&cobj);
    A obj(&bobj);
    ASSERT_FALSE(obj.operation);    

}