#include <cstdlib>
#include <iostream>
#include "../Library/Interface/CrossPlatformLoad.h"

int main() {
  hello();
  
  IMessage *face = Message("好大的太阳");
  face->ShowMsg();
  face->SetStr("再见，太阳系");
  face->ShowMsg();
  std::cout << face->GetStr() << std::endl;
  face->SetStr("我回来了，太阳系");
  face->ShowMsg();
  std::cout << face->GetStr() << std::endl;
  return 0;
}
