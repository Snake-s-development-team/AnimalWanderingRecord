/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:37:44
 * @LastEditors: snake
 * @LastEditTime: 2023-04-29 19:22:17
 * @FilePath: \AnimalWanderingRecord\src\controller\controller.cpp
 */
#include "controller/controller.h"
#include "view/view.h"
#include "word/word.h"
#include <iostream>
controller::controller() {}
controller::~controller() {}
controller *controller::instance = nullptr;
controller *controller::getInstance()
{
    if (instance == nullptr)
    {
        instance = new controller();
    }
    return instance;
}
void controller::start()
{
    controller::getInstance()->init();
    while (word::getInstance()->money >= 0)
    {
    }
    finish();
}
void controller::finish() { system("pause"); }
void controller::init()
{
    system("chcp 65001");
    system("cls");
    SetConsoleTitle("动物流浪记1.0.0");
    system("mode con cols=100 lines=30");
    SetWindowLongPtrA(GetConsoleWindow(), GWL_STYLE,
                      GetWindowLongPtrA(GetConsoleWindow(), GWL_STYLE) &
                          ~WS_SIZEBOX & ~WS_MAXIMIZEBOX & ~WS_MINIMIZEBOX);
    if (word::getInstance()->users.empty())
    {
        const char *str[] = {"请注册你的账号"};
        int count = sizeof(str) / sizeof(str[0]);
        view::getInstance()->out<const char *>('\n', count, str);
    }
    view::getInstance()->WritePlot();
}