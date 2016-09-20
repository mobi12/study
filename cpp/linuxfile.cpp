#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <cstdio>

using namespace std;

int main()
{
    int f = 0;
    const char *f_path = "test";
    mode_t f_attrib;
    f_attrib = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    f = open(f_path, O_RDONLY);

    if (f == -1)
    {
        f = open(f_path, O_RDWR | O_CREAT, f_attrib);

        if (f != -1)
            printf("创建一个新文件");
        else
        {
            printf("无法创建新文件，程序退出");

            return 1;
        }
    }
    else
        printf("文件打开成功");

    close(f);
    return 0;
}
