#include "gtest/gtest.h"
using testing::Types;

class ITempsnr{
public:
   virtual int getOutsideTemp() = 0;

};
class ModelATempsensor:public ITempsnr{
public:
int getOutsideTemp() { return 23;}


};
class ModelBTempsensor:public ITempsnr {
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


/*fct func*/

template <typename T>
ITempsnr* createObject();
template <>
ITempsnr* createObject<ModelATempsensor>() { return new ModelATempsensor(); }
template <>
ITempsnr* createObject<ModelBTempsensor>() { return new ModelBTempsensor(); }
template <typename T>
class TempSensorFixture:public testing::Test{
protected:
   TempSensorFixture():objuntertest{createObject<T>()}{}
 ITempsnr * objuntertest;
};

typedef Types<ModelATempsensor, ModelBTempsensor> Implementations;


TYPED_TEST_SUITE(TempSensorFixture, Implementations);




TYPED_TEST(TempSensorFixture, GetTempTest)

{

    ASSERT_EQ(this->objUnderTest->getOutsideTemp(), 23);

}