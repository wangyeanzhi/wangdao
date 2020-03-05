#include <iostream>

using std::cout;
using std::endl;

namespace A
{
  void print()
  {
    cout << "A::print" <<endl;
  }
}

int main(int argc,char **argv)
{
  A::print();
  return 0;
}

