#include <bits/stdc++.h>
using namespace std;
class Parent
{
  public:
    int id_Parent;
};
  
class Child: public Parent
{
  public:
    int id_Child;
};
int main()
{
    Child obj1;
    obj1.id_Child = 10;
    obj1.id_Parent = 63;
    cout << "Child id is: " << obj1.id_Child << '\n';
    cout << "Parent id is: " << obj1.id_Parent << '\n';
    return 0;
}
