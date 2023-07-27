#include "gtest/gtest.h"
using testing::Types;

class ITempsnr{
public:
   virtual int getOutsideTemp() = 0;

};
class ModelATempsensor::public ITempsnr{
public:
int getOutsideTemp() { return 23;}


};
class ModelBTempsensor::public ITempsnr {
public:
int getOutsideTemp() { return 23;}
};

class AutoTepmRe{
ITempsnr* tempsensorptr;
public:
 AutoTepmRe(ITempsnr * addr):tempsensorptr{addr}{}

 void regulaterTemp()
 {
this->tempsensorptr->getOutsideTemp();

 }

};

template <typenmae T>
class TempSensorFixture:public testing::Test{
protected:
  

 TemsensorFixture():objuntertest{}
 ITempsnr * objuntertest;
}


template <typename T>
I* ITempsnr();
template <>
I* createObject<ModelATempsensor>() { return new ModelATempsensor(); }
template <>
I* createObject<ModelBTempsensor>() { return new ModelBTempsensor(); }



class ModeATemperatueFixture:public testing::test
{
protected:
 ModelATempsensor objuterTest;

}
TEST_F(ModeATemperatueFixture,getTemptest)
{
ASSERT_EQ(objuterTest.getOutsideTemp(),23);

}



class ModelBTempsensor:public testing::test
{
protected:
 ModelBTempsensor objuterbTest;

}

TEST_F(ModelBTempsensor,getTemptest)
{
ASSERT_EQ(objuterbTest.getOutsideTemp(),23);

}

typedef Types<ModelATempsensor,ModelBTempsensor> Implementations;

TYPED_TEST_SUITE(TempSensorFixture, Implementations);

TYPED_TEST(TempSensorFixture,getTemptest)
{
    ASSERT_EQ(objuterbTest.getOutsideTemp(),23);
}