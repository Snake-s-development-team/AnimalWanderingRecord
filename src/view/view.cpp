/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:46:28
 * @LastEditors: snake qzrobot_snake@outlook.com
 * @LastEditTime: 2023-05-06 15:46:56
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
    std::string plot[] = {
"****************************************************************************************************",
"*                                                                                                  *",
"*                                           动物流浪记                                             *",
"*                                                                                                  *",
"*    你是一只" + word::getInstance()->current.name + ",早晨醒来,你发现你在荒野,你被主人丢弃了.你要想办法存活下去.这个世界很危险,你  *",
"*                                                                                                  *",
"* 会被各种凶猛的动物给吃掉，你也可以吃掉其他比你弱小的动物来充饥。你得做出合适的举动来对应各种突发 *",
"*                                                                                                  *",
"* 事件来保证自己的生命安全，如果你死了，那你就永远死了。请珍惜自己只有一次的生命。注意，生命只有一 *",
"*                                                                                                  *",
"* 次！注意,生命只有一次！注意，生命只有一次！请远离凶猛动物! 请远离凶猛动物! 请远离凶猛动物!       *",
"*                                                                                                  *",
"*     你可以选择重新找回主人，回归主人的怀抱；你也可以选择漂流在外，在野外为所欲为；你还可以报复主 *",
"*                                                                                                  *",
"* 人,让主人去世(狗头)；甚至可以把设计陷阱把主人坑进陷阱，折磨主人......                            *",
"*                                                                                                  *",
"*     祝你好运       ヾ(≧▽≦*)o                                                                  *",
"*                                                                                                  *",
"****************************************************************************************************" };
    int count = sizeof(plot) / sizeof(plot[0]);
    for (int i = 0;i < count;i++)
    {
        WriteStr(plot[i]);
    }
}
void view::WriteStr(std::string str, int speed)
{
    for (int i = 0;i < str.length();i++)
    {
        std::cout << str[i];
        if (str[i] != '*' && str[i] != ' ')Sleep(50);
    }
    std::cout << std::endl;
}
void view::createUser()
{
    std::cout << "您似乎没有用户,创建一个吧" << std::endl;
    std::string username;
    std::string password;
    do {
        std::cout << "请输入你的名字(不能含有  \\  ,  <  ,  >  ):" << '\n';
        std::cin >> username;
    } while (isUserTrue(username));
    do {
        std::cout << "请输入你的密码(不能含有  \\  ,  <  ,  >  ):" << '\n';
        std::cin >> password;
    } while (isUserTrue(password));
    system("cls");
    user test(username, password, 10000);
    word::getInstance()->users.push_back(test);
}
bool view::isUserTrue(std::string str) {
    for (int i = 0;i < str.length();i++)
    {
        if (str[i] == '\\' || str[i] == '<' || str[i] == '>')return true;
    }
    return false;
}
void view::UseUser() {
    std::cout << "请选择你的用户:" << std::endl;
    for (int i = 0;i < word::getInstance()->users.size();i++)
    {
        std::cout << "    " << i + 1 << ": " << word::getInstance()->users[i].name << std::endl;
    }
    int choose;
    std::cin >> choose;
    std::stringstream test_name;
    for (int i = word::getInstance()->users[choose - 1].name.length();i < 8;i++)test_name << " ";
    test_name << word::getInstance()->users[choose - 1].name;
    word::getInstance()->current.name = test_name.str();
    word::getInstance()->current.password = word::getInstance()->users[choose - 1].password;
    word::getInstance()->current.money = word::getInstance()->users[choose - 1].money;
    system("cls");
}
void view::LoadMap()
{
    std::string map[] = {
        "****************************************************************************************************",
        "*..........................                                                                        *",
        "*..........................                                                                        *",
        "*....$$$$$$$$$$$$$$$$$$$$$$                                                                        *",
        "*....$                    $                                                                        *",
        "*....$                    $                                                                        *",
        "*....$       乡银行       $                                                                        *",
        "*....$                    $                                                                        *",
        "*....$                    $                                                                        *",
        "*....$$$$$$$$$   $$$$$$$$$$                                                                        *",
        "*....        |   |                                                                                 *",
        "*..........................                                                                        *",
        "*..........................                                                                        *",
        "****************************************************************************************************"
    };
    int count = sizeof(map) / sizeof(map[0]);
    for (int i = 0;i < count;i++)
    {
        WriteStr(map[i], 5);
    }
}