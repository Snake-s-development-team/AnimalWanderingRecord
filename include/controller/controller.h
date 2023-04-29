/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:36:04
 * @LastEditors: snake
 * @LastEditTime: 2023-04-28 16:35:13
 * @FilePath: \cppDemo\include\controller\controller.h
 */
#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <windows.h>
class controller
{
public:
  controller();
  ~controller();
  static controller* getInstance();
  void start();
  void finish();
  void init();

private:
  static controller* instance;
};
#endif