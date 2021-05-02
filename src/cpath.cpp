
#include <iostream>
#include "Graph.h"

int main(int argc, char *argv[])
{
    graph g;

    if(argc != 5){
        std::cout << "usage: ./cpath <file> <s> <d> <budget>";
        return 0;
    }
    else{
        if(!g.read_file(argv[1])){
            std::cout << "could not open file '" << argv[1] << "'\n";
            return 0;
        }
    }

    std::vector<std::vector<graph::option>> cpath_rpt(g.num_nodes());
    std::vector<std::vector<int>> cpath_path_report(g.num_nodes());
    std::cout << "\nADJACENCY-LIST REPRESENTATION:\n\n";
    g.display();
    std::cout << "\nEND ADJACENCY LIST:\n\n";

    if(!g.cpath(argv[2], cpath_rpt, cpath_path_report)){
        std::cout << "cpath failed -- bad source vertex name '" << argv[2] << "'\n";
        return 0;
    }
    else{
        std::cout << "\nCPATH REPORT:\n\n";
        g.disp_cpath_report(cpath_rpt, cpath_path_report, atoi(argv[2]), atoi(argv[3]), atof(argv[4]));
        std::cout << "\nEND CPATH REPORT\n\n";
    }

    return 0;
}