/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-21 21:44:50
 * @LastEditors: snake qzrobot_snake@outlook.com
 * @LastEditTime: 2023-05-02 21:12:25
 * @FilePath: \AnimalWanderingRecord\src\main.cpp
 */
#include "controller/controller.h"
int main()
{
    controller::getInstance()->start();
    return 0;
}