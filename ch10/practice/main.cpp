#include <iostream>
#include <string>

class my_except : std::exception
{
  const char *message;

public:
  my_except(const char *message) : message(message)
  {
  }
  const char *what() const noexcept override
  {
    return message;
  }
};

int main()
{
  try
  {
    throw my_except{"this is my_except"};
  }
  catch (my_except &e)
  {
    std::cout << e.what() << std::endl;
  }
}