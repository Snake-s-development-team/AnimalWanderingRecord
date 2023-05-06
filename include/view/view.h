/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:45:08
 * @LastEditors: snake
 * @LastEditTime: 2023-05-06 16:03:12
 * @FilePath: \AnimalWanderingRecord\include\view\view.h
 */
#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <stdarg.h>
#include <string>
#include <windows.h>
#include <sstream>
class view
{
public:
  view();
  ~view();
  static view* getInstance();
  void WritePlot();
  void createUser();
  void UseUser();
  void WriteStr(std::string str,int speed=50);
  bool isUserTrue(std::string str);
  void LoadMap();
  void outTime();
private:
  static view* instance;
};
#endif