#include <iostream>
using namespace std;

class Human
{

private:
    int height;
    int age = 9;

public:
    int weight;

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }

    // int getHeight() {                        //cannot access private memeber of parent class
    //     return this->height;
    // }
};

int main()
{

    Male m1;
    // cout << m1.height << endl;

    Male m2;
    // cout << m2.age << endl;
    cout << m2.weight << endl;
    // cout << m2.height << endl;

    cout << m2.color << endl;

    m2.setWeight(84);
    cout << m2.weight << endl;
    m2.sleep();
    cout << m2.getAge() << endl;

    return 0;
}