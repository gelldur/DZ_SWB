#include "./main.h"
#include "dbgPrint.h"
using namespace std;

int main()
{
	CPrinter::setDebugLevel(1);
	ERR_PRINT("Hello makefiles");
    // printMessage();
    return 0;
}
