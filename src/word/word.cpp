/*
 * @Author: snake qzrobot_snake@outlook.com
 * @Date: 2023-04-28 15:42:26
 * @LastEditors: snake
 * @LastEditTime: 2023-04-28 16:14:44
 * @FilePath: \cppDemo\src\word\word.cpp
 */
#include "word/word.h"
word::word() {}
word::~word() {}
word* word::instance = nullptr;
word* word::getInstance()
{
    if (instance == nullptr)
    {
        instance = new word();
    }
    return instance;
}