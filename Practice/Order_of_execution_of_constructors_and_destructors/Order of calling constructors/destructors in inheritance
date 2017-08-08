#include <iostream>
using namespace std;

class Animal
{
    public:
 // constructors
    Animal():mAge(0),mWeight(0),mHeight(0) {

        cout<<"In constructor of animal: 0 arguments"<<endl;

    }


    ~Animal() {
        cout<<"In destructor of animal"<<endl;
    }

    //accessors
    int getAge() const {  return mAge; }
    void setAge(int age ) { mAge = age;}
    int getWeight() const { return mWeight; }
    void setWeight(int weight ) { mWeight = weight; }

    int getHeight() const { return mHeight; }
    void setHeight(int height ){ mHeight = height; }


    protected:


    int mAge;
    int mWeight;
    int mHeight;
};




class Dog : public Animal
{
 public:
 // Constructors
    Dog() {
        cout<<"In constructor of dog"<<endl;
        mBreed = "Labrador";
    }


    ~Dog() {
        cout<<"In destructor of dog"<<endl;
    }

    void speak(){
        cout<<"dog::I bark"<<endl;
    }

 protected:
    string mBreed;
};

class sportsDog : public Dog
{
 public:
 // Constructors
    sportsDog() {
        cout<<"In constructor of  sports dog"<<endl;

    }
    ~sportsDog() {
        cout<<"In destructor of sports dog"<<endl;
    }


};

int main(){

    //Dog d;
    //d.mHeight = 6;
    sportsDog sd;

}
