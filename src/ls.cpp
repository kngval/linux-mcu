#include <cstring>
#include <dirent.h>
#include <iostream>
int main(int argc, char *argv[]) {

  const char *path = ".";

  if (argc > 1) {
    path = argv[1];
  }

  DIR *dir = opendir(path);

  if (!dir) {
    std::cerr << "mcu-ls error : cannot open directory\n";
    return 1;
  }

  dirent *entry;

  while ((entry = readdir(dir)) != nullptr) {

    if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
      continue;
    }

    std::cout << entry->d_name << " ";
  }
  
  std::cout << std::endl;
  closedir(dir);

  return 0;
}
