#include <iostream>
#include <limits.h>
#include <unistd.h>
int main(){

  char buf[PATH_MAX];
  if(getcwd(buf,sizeof(buf)) == nullptr){
    std::cerr << "mcu-pwd error : failed to get current directory" << '\n';
    return 1;
  }

  std::cout << "pwd : "<< buf << '\n';
  return 0;
  
}
