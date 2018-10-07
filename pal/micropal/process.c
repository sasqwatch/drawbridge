#include <pal.h>
#include <unistd.h>

void DkProcessExit(PAL_NUM exitCode) {
	_exit(exitCode);
}
