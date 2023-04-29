/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:46:28
 * @LastEditors: fox
 * @LastEditTime: 2023-04-29 20:15:39
 * @FilePath: \AnimalWanderingRecord\src\view\view.cpp
 */
#include "view/view.h"
#include "word/word.h"
view::view() {}
view::~view() {}
view* view::instance = nullptr;
view* view::getInstance()
{
    if (instance == nullptr)
    {
        instance = new view();
    }
    return instance;
}
void view::WritePlot()
{
    const char* plot[] = { "****************************************************"
                          "************************************************",
                          "*                                                   "
                          "                                               *",
                          "****************************************************"
                          "************************************************" };
    int count = sizeof(plot) / sizeof(plot[0]);
    for (int i = 0;i < count;i++)
    {
        std::cout << plot[i] << std::endl;
    }
}
void view::createUser()
{
    std::string username;
    std::string password;
    do {
        std::cout << "请输入你的名字" << '\n';
        std::cin >> username;
    } while (isUserTrue(username));
    do {
        std::cout << "请输入你的密码:" << '\n';
        std::cin >> password;
    } while (isUserTrue(password));
    user test(username, password, 10000);
    word::getInstance()->users.push_back(test);
}
bool view::isUserTrue(std::string str) {
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == ' ' || str[i] == '\\' || str[i] == '<' || str[i] == '>')return true;
    }
    return false;
}