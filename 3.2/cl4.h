#ifndef _CL4_H_
#define _CL4_H_
#include "cl_base.h"
class cl4 :public cl_base {
public:
    cl4(cl_base* parent, string object_name) :cl_base(parent, object_name) {};
};
#endif