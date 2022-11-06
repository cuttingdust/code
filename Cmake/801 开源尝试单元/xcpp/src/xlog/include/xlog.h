#ifndef XLOG_H
#define XLOG_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <memory>

#include "xconfig.h"

#ifdef _WIN32
#define DEFAULT_LOG_PATH "./"
#else
#define DEFAULT_LOG_PATH "/var/log/xcpp/"
#endif
#define DEFAULT_LOG_FILENAME "xlog.txt"

_XCPP_NAMESPACE_

enum class LogLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	FATAL
};
#define LOG(level) xcpp::XLogMessage(__FILE__, __LINE__, xcpp::LogLevel::level).stream()
#define LOGDEBUG LOG(DEBUG)
#define LOGINFO LOG(INFO)
#define LOGWARNING LOG(WARNING)
#define LOGERROR LOG(ERROR)
#define LOGFATAL LOG(FATAL)

XCPP_API bool InitXLog(const char *appname, const char *logpath = DEFAULT_LOG_PATH, const char *filename = DEFAULT_LOG_FILENAME);

XCPP_API bool CloseXLog();

class XCPP_API XWrite
{
public:
	virtual int Write(const char *msg) = 0;
	XWrite() {}
	virtual ~XWrite() {}
};

class XCPP_API XLogMessage
{
public:
	std::stringstream &stream()
	{
		return stream_;
	}
	XLogMessage();

	XLogMessage(const char *file, int line, LogLevel level);
	~XLogMessage();
	static void set_write(std::unique_ptr<XWrite> &&w) { write_ = move(w); }
	void set_name(const char *name) { name_ = name; }

private:
	std::stringstream stream_;

	static std::unique_ptr<XWrite> write_;

	std::string name_;
};

_END_NAMESPACE_

#endif