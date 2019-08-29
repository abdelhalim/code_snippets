#include <boost/interprocess/managed_shared_memory.hpp>
#include <functional>
#include <iostream>

using namespace boost::interprocess;

int main()
{

  managed_shared_memory managed_shm{open_or_create, "Boost", 1024};
  std::cout << *managed_shm.find<int>("Integer").first << '\n';
  std::cout << *managed_shm.find<float>("Float").first << '\n';
}
