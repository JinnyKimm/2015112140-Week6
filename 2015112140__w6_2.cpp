#include<iostream>
using namespace std;

template <typename T>
class Vector2D
{
public:
   T x_, y_;
};

int main(void)
{
   Vector2D<int> my_vector;
   my_vector.x_ = 1;
   my_vector.y_ = 2;
   Vector2D<float> my_vector2;
   my_vector2.x_ = 3.24f;
   my_vector2.y_ = 13.44f;
   Vector2D<double> my_vector3;
   my_vector3.x_ = 3.23460;
   my_vector3.y_ = 1335.9;
   cout << my_vector.x_ << endl;
   cout << my_vector.y_ << endl;
   cout << my_vector2.x_ << endl;
   cout << my_vector2.y_ << endl;
   cout << my_vector3.x_ << endl;
   cout << my_vector3.y_ << endl;

};