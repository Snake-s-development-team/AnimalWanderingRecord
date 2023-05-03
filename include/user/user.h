/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 19:43:47
 * @LastEditors: snake
 * @LastEditTime: 2023-04-30 15:26:24
 * @FilePath: \AnimalWanderingRecord\include\user\user.h
 */
#ifndef USER_H
#define USER_H
#include <string>
class user
{
public:
  user();
  user(std::string usernmame, std::string password, int money);
  ~user();
  std::string name;
  std::string password;
  int money;

private:
};
#endif