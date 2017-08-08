#include <iostream>
using namespace std;

class Animal
{
    public:
 // constructors
    Animal() {
        mAge=5;
        mWeight = 10;
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

    protected:
    int mAge;
    int mWeight;
};


class Cat : public Animal
{
 public:
 // Constructors
    Cat() {
        cout<<"In constructor of cat"<<endl;
    }
    ~Cat() {

        cout<<"In destructor of cat"<<endl;
    }

 // Accessors
    std::string GetBreed() const {
        return mBreed;
    }
    void setBreed(std::string breed) {
        mBreed = breed;
    }
// Other methods
    void wagTail() {
        cout<<" Cat::I wag my tail"<<endl;
    }
    void lookForFood() {
        cout<<"I always look for food"<<endl;
    }

    protected:
    std::string  mBreed;
};

class Dog : public Animal
{
 public:
 // Constructors
    Dog() {
        cout<<"In constructor of dog"<<endl;
    }
    ~Dog() {
        cout<<"In destructor of dog"<<endl;
    }

 // Other methods
    bool isWatchDog() {
       return 1;
    }
    int howMuchItEats() {
        return 5;

    }

    //override
    void speak(){
        cout<<"dog::I bark"<<endl;
    }

};

int main(){

    Cat c;
    cout<<"age of cat "<<c.getAge()<<endl;


    Dog d;

    cout<<"Dog eats this much kg "<<d.howMuchItEats()<<endl;
    d.speak();
    c.speak();

}
