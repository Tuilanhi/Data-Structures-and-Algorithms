/*
/ File name: graph_compile_test.cpp
/ Project number: CSCE 221 Project, Spring 2022
/ Date file was created: April 22, 2022
/ Section: 511
/ Name: Nhi Vu, Joshua Hillis
/ email address: vuthuynhi@tamu.edu joshuahillis292002@tamu.edu
/ This cpp file contains the implementation of compile testing cases for Graph.h. It tests all the functions in Graph header file and check if it compiles
/ without giving errors.
*/

#include <iostream>
#include <sstream>
#include "graph.h"

int main()
{
    Graph G;
    G.add_vertex(1);
    G.add_vertex(2);
    G.add_vertex(3);
    std::cout << G.vertex_count() << std::endl;
    std::cout << G.contains_vertex(1) << std::endl;
    std::cout << G.distance(1) << std::endl;
    G.add_edge(1, 2, 3);
    G.add_edge(2, 3, 4);
    std::cout << G.edge_count() << std::endl;
    std::cout << G.contains_edge(1, 2) << std::endl;
    std::cout << G.cost(1, 2) << std::endl;
    Graph copy = G;
    G = copy;
    G.remove_vertex(1);
    G.remove_edge(1, 2);
    G.dijkstra(2);
    std::stringstream ss;
    G.print_shortest_path(3, ss);
}