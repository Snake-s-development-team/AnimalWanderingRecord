/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 19:43:47
 * @LastEditors: snake
 * @LastEditTime: 2023-05-06 16:22:33
 * @FilePath: \AnimalWanderingRecord\include\user\user.h
 */
#ifndef USER_H
#define USER_H
#include <string>
class user
{
public:
  user();
  user(std::string username, std::string password, int money, short year, short month, short day, short HP);
  ~user();
  std::string name;
  std::string password;
  int money;
  short day;
  short month;
  short year;
  short HP;

private:
};
#endif