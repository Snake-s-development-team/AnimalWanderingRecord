/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:45:08
 * @LastEditors: snake
 * @LastEditTime: 2023-04-28 16:51:54
 * @FilePath: \cppDemo\include\view\view.h
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
  template <typename type> void out(char IntermediateSymbol, int count, ...);

private:
  static view* instance;
};
#endif