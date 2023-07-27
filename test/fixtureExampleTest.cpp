#include <gtest/gtest.h>
class C{};
class B{
 B* ptr;
    public:
    A(C* addressofobject):ptr{addressofobject}
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
    B(B* addressofobject):ptr{addressofobject}
    {

    }     
};

TEST("TestfixtureTestsuit","operationTest" ){

    C bobj;
    B bobj(&cobj);
    A obj(&bobj);
    ASSERT_TURE(obj.operation);    

}
TEST("TestfixtureTestsuit","operationTest" ){

    C bobj;
    B bobj(&cobj);
    A obj(&bobj);
    ASSERT_FLASE(obj.operation);    

}