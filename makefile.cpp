#include <fstream>

int makefile_main() {

    std::ofstream outfile;

    char filename[100];

    printf("만들 file name : ");
    scanf("%s", filename);
    outfile.open(filename, std::ios_base::app);
    outfile << "Data";
    return 0;
}
