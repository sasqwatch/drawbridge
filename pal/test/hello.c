// Hello World for Drawbridge PAL
#include <pal.h>

int main (int argc, char **argv, char **envp) {
	PAL_HANDLE out = DkStreamOpen("dev:tty", PAL_ACCESS_WRONLY, 0, 0, 0);
	char hello[] = "Hello World!\n";
	if ( DkStreamWrite(out, 0, sizeof(hello), hello, NULL) < 0 ) {
		// failure
	}
	DkObjectClose(out);
	return 0;
}
