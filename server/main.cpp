#include "application.h"

int main(int argc, char *argv[])
{
    TDepartment d;
    TApplication a(argc, argv, d);
    return a.exec();
}
