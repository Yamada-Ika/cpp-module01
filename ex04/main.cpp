#include <fstream>
#include <iostream>

class FileContent {
 private:
    std::string name_;
    std::string content_;

 public:
    FileContent(std::string name);
    FileContent(void);
    ~FileContent(void);
    void SetFileName(std::string name);
    void SetContent();
    void Replace(std::stirng s1, std::string s2);
};

FileContent::FileContent(std::string name) : name_(name) {}
FileContent::FileContent(void) {}
FileContent::~FileContent(void) {}
void FileContent::SetFileName(std::string name) {
  name_ = name;
}
void FileContent::SetContent() {
  std::ifstream ifs(name_);

  if (ifs.fail())
  {
      std::cerr << "Failed to open file" << std::endl;
      return;
  }
  std::string line = "";
  std::string buf;
  while (true) {
    if (std::getline(ifs, buf))
      line += buf + "\n";
    else
      break;
  }
  content_ = line;
}

typedef struct s_args {
  std::string file_name;
  std::string s1;
  std::string s2;
  bool  is_valid_args;
} t_args;

bool ValidateArgs(int argc, char *argv[], t_args &argt) {
  if (argc != 4)
    return (false);
  argt.file_name = argv[1];
  argt.s1 = argv[2];
  argt.s2 = argv[3];
  argt.is_valid_args = true;
  return (true);
}

// TODO replaceをクラスのメソッドにするか関数にするか
// 関数にしたらCっぽくなる
int main(int argc, char *argv[]) {
  t_args argt;

  ValidateArgs(argc, argv, argt);
  if (!argt.is_valid_args) {
    std::cerr << "error: Invalid argument" << std::endl;
    std::exit(1);
  }
  Replace(argt.file_name, argt.s1, argt.s2);
}
