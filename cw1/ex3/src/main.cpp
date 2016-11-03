#include "../main.h"
#include "../lib/libPrint/libPrint.h"

using namespace std;

int main()
{
	CPrinter::setDebugLevel(1);
    ERR_PRINT("Hello makefiles");
    return 0;
}
