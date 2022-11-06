// xlog.h
#ifndef XLOG_H
#define XLOG_H
//__declspec(dllexport)
//__declspec(dllexport) 导出XLog类的函数到lib文件中
// xlog库文件调用 dllexport
// test_xlog 调用 dllimport
#ifndef _WIN32
#define XCPP_API
#else
#ifdef xlog_EXPORTS
#define XCPP_API __declspec(dllexport) //库项目调用
#else
#define XCPP_API __declspec(dllimport) //调用库项目调用
#endif
#endif
class XCPP_API XLog
{
public:
    XLog();
};
#endif
/*
102cmake_lib/
├── CMakeLists.txt
├── test_xlog
│ ├── CMakeLists.txt
│ └── test_xlog.cpp
└── xlog
    ├── CMakeLists.txt
    ├── xlog.cpp
    └── xlog.h

*/