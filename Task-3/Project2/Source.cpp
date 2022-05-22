#include <stdio.h>
#include<string>
#include <sys/stat.h>

using namespace std;


int main()
{
    struct stat size;
    stat("trpo.txt", &size);
    printf("file size: %d", size.st_size);
    

    return 0;
}
