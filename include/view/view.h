/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:45:08
 * @LastEditors: snake
 * @LastEditTime: 2023-05-06 17:30:46
 * @FilePath: \AnimalWanderingRecord\include\view\view.h
 */
#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <stdarg.h>
#include <string>
#include <windows.h>
#include <sstream>
#include <conio.h>
#include <vector>
#include "user/user.h"
class view
{
public:
  view();
  ~view();
  static view* getInstance();
  void WritePlot();
  void CreateUser();
  void UseUser();
  void WriteStr(std::string str, int speed = 50);
  bool IsUserTrue(std::string str);
  void LoadMap();
  void OutTime();
  int Choose(std::string str[], int count);
  int Choose(std::vector<user> str, int count);
  std::string JudgmentStatus();
private:
  static view* instance;
};
#endif