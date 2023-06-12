#pragma once

#include <iostream>

using namespace std;

class Document {
   public:
    virtual bool is_valid() = 0;
    virtual void show() = 0;
    virtual void show_format() = 0;
};
