#include <gtest/gtest.h>

#if 0
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
#endif

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

TEST(TestfixtureTestsuit:public testing::Test){

    protected:
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

class TestfixtureTestsuit:public testing::test{

    protected:
    A* aptr;
    B* bptr;
    C* cptr;

void SetUp()
{
 this->cptr = new C();
  this->bptr = new B(cptr);
   this->aptr = new A(bptr);
}

void  TearDown()
{
delete cptr;
delete bptr;
delete aptr;

}
};
//Test fixture 

TEST_F(TestfixtureTestsuit,operationTrueTest){

 
    ASSERT_TRUE(aptr->operation());    

}
TEST_F(TestfixtureTestsuit,operationFalseTest){


    ASSERT_FALSE(aptr->operation());       

}

}
TEST(TestfixtureTestsuit,operationTest){

   C cobj;
    B bobj(&cobj);
    A obj(&bobj);
    ASSERT_FALSE(obj.operation);    

}