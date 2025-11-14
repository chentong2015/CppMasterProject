#include <cstdio>
#include <string>

// This program opens two files:
// fclose to close the first file and
// _fcloseall to close all remaining files.

FILE *stream, *stream2;

int main() {
    errno_t err = 0;

    // Open for read
    // fail if file "crt_fopen_s.c" doesn't exist
    // err = fopen_s(&stream, "crt_fopen_s.c", "r");
    if(err == 0) {
        printf("The file 'crt_fopen_s.c' was opened\n");
    } else {
        printf("The file 'crt_fopen_s.c' was not opened\n");
    }

    // Open for write
    // err = fopen_s( &stream2, "data2", "w+, ccs=UTF-8");
    if(err == 0) {
        printf( "The file 'data2' was opened\n" );
    } else {
        printf("The file 'data2' was not opened\n");
    }

    // Close stream if it isn't NULL
    if(stream) {
        err = fclose( stream );
        if (err ==0){
            printf("The file 'crt_fopen_s.c' was closed\n");
        } else {
            printf("The file 'crt_fopen_s.c' was not closed\n");
        }
    }

    // All other files are closed
    // int numclosed = _fcloseall( );
    // printf("Number of files closed by _fcloseall: %u\n", numclosed);
    
    return 0;
}
