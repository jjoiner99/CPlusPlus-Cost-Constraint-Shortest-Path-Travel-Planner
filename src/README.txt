
This folder contains the following:

  A C++ directed graph class in file Graph.h.  The class
    uses an adjacency list data structure and allows
    two edge weights.  It also includes member functions
    which implement various fundamental graph algorithms.

  Several driver programs which read graphs and apply
    particular algorithms.  See, for example dfs.cpp

  Several input files encoding graphs in a simple but
    flexible format.  Sample graph files have a .g 
    extension.

  A makefile which compiles the various executables.

  CPath Algorithm:
    Team Members: 
      James Joiner (jjoine4) and Sogol Mirikhoozani (smirik2)
    Compilation Instructions:
      To compile the file you must simply enter the command "make cpath". You may also compile all files if you wish by entering the command "make all"
    How to Run cpath:
      After you have compiled the cpath.cpp file, you must run it using the command "./cpath <filename> <src> <dest> <budget>", where filename is the .g file containing
      your graph, src is the source vertex of your graph, dest is the destination vertex of your graph, and budget is the money you are willing to spend for the trip. 
      Upon running the program, you will be shown a list of the different path weights to your chosen destination from the source. You will also be shown the one path
      weight with the fastest arrival time that you can afford with your budget. Lastly, the program will print the quickest path from your source vertex to the destination vertex.
      
