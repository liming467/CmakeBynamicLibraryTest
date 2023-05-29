#include "Message.h"

#include <iostream>
#include <string>

Message::Message(const char* m):message_(m) {}

void Message::ShowMsg()
{
  std::cout << message_ << std::endl;
}

void Message::SetStr(const char* m)
{
  message_ = m;
}

const char* Message::GetStr()
{
  return message_;
}

void hello()
{
  std::cout << "hello world test" << std::endl;
}

IMessage* NewMessage(const char* m)
{
  return new Message(m);
}