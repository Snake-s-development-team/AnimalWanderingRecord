/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:41:36
 * @LastEditors: snake qzrobot_snake@outlook.com
 * @LastEditTime: 2023-05-06 15:46:09
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
  int money = 1;
  std::vector<user> users;
  user current;

private:
  static word* instance;
};
#endif