/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 19:47:30
 * @LastEditors: fox
 * @LastEditTime: 2023-04-29 20:05:25
 * @FilePath: \AnimalWanderingRecord\src\user\user.cpp
 */
#include "user/user.h"
user::user() {}
user::user(std::string username, std::string password, int money, int year, int month, int day)
{
    this->money = money;
    this->password = password;
    this->name = username;
    this->day = day;
    this->month = month;
    this->year = year;
}
user::~user() {}