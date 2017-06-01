#include <iostream>


int main()
{
  std::cout << "Please enter one of the following choices: \n";
  std::cout << "c) carnivorse           p) pianist \n"
            << "t) tree                 g) game \n";
  char ch = std::cin.get();
  while ((ch != 'c') && (ch != 'p') && (ch != 't')&& (ch != 'g')) {
      std::cin.get();  // 删除上次输入的回车！！！！
      std::cout << "Please enter a c, p, t, or g: ";
      ch = std::cin.get();

  }
  switch (ch) {
  case 'c':
      std::cout << "A maple is a carnivorse";
      break;
  case 'p':
      std::cout << "A maple is a pianist";
      break;
  case 't':
      std::cout << "A maple is tree";
      break;
  case 'g':
      std::cout << "A maple is a game";
      break;
  }
  return 0;
}

//未格式化的操作 ：
//is.get(ch)      读取下一个字节存入字符ch中。返回 is
//os.put(ch)      讲字符ch 输出到 ostream os。返回 os
//is.get()        读取下一个字节 返回 int
//is.putback(ch)    将字符放回is，返回 is
//is.unget()        将is向后移动一个字节。返回is
//is.peek()         将下一字节作为int返回，但不从流中删除它。
// 以上均是单字节操作，不会跳过空白！！
