#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {

  if(argc < 2){
    std::cerr << "mcu-cat : missing file operand\n";
    return 1;
  }

  for(int i = 1; i < argc; i++){
    std::ifstream file(argv[i]);

    if(!file){
      std::cerr << "mcu-cat error : cannot open " << argv[i] << '\n';
      continue;
    }

    std::string line;

    while(std::getline(file,line)){
      std::cout << line << '\n';
    }
  }

  return 0; 
}
