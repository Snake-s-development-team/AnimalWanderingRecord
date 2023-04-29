/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:46:28
 * @LastEditors: snake
 * @LastEditTime: 2023-04-28 19:41:07
 * @FilePath: \cppDemo\src\view\view.cpp
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
    out<const char*>('\n', count, plot);
}
template <typename type> void view::out(char IntermediateSymbol, int count, ...)
{
    va_list v;
    va_start(v, count);
    va_arg(v, type);
    for (int i = 1; i <= count; i++)
    {
        std::cout << va_arg(v, type) << IntermediateSymbol;
    }
    va_end(v);
}