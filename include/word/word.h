/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:41:36
 * @LastEditors: snake
 * @LastEditTime: 2023-04-30 11:21:51
 * @FilePath: \AnimalWanderingRecord\include\word\word.h
 */
#ifndef WORD_H
#define WORD_H
#include <user/user.h>
#include <vector>
class word
{
public:
  word();
  ~word();
  static word* getInstance();
  int money = -1;
  std::vector<user> users;
  user current;

private:
  static word* instance;
};
#endif