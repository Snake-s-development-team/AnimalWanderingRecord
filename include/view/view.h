/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:45:08
 * @LastEditors: fox
 * @LastEditTime: 2023-04-29 19:50:57
 * @FilePath: \AnimalWanderingRecord\include\view\view.h
 */
#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <stdarg.h>
#include <string>
class view
{
public:
  view();
  ~view();
  static view* getInstance();
  void WritePlot();
  void createUser();
  bool isUserTrue(std::string str);
private:
  static view* instance;
};
#endif