#include <iostream>
using namespace std;

class Animal
{
    public:
 // constructors
    Animal() {

        cout<<"In constructor of animal"<<endl;

    }
    ~Animal() {
        cout<<"In destructor of animal"<<endl;
    }

    //accessors
    int getAge() const {  return mAge; }
    void setAge(int age ) { mAge = age;}
    int getWeight() const { return mWeight; }
    void setWeight(int weight ) { mWeight = weight; }

 //Other methods
    void speak() {
        cout<<" I speak"<<endl;

    }
    void sleep() const {

     cout<< " I sleep "<<endl;
    }

    public:

    int mHeight;

    private:
        int mColor;

    protected:
    int mAge;
    int mWeight;
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

 // Other methods
    bool isWatchDog() {
       mHeight = 9;
       mAge = 7;

       return 1;
    }
    int howMuchItEats() {
        return 5;

    }

    //override
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

    void checkAccess(){
      mHeight = 8;

    }

};

int main(){

    Dog d;
    //d.mHeight = 6;
    sportsDog sd;
    Animal a;
    a.mHeight = 8;

}
