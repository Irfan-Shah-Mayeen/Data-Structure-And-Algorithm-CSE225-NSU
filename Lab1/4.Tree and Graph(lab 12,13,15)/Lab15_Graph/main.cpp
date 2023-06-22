#include <iostream>
#include "graphtype.cpp"
using namespace std;

int main()
{
    //1. generate given graph

    GraphType<char>graph;
    graph.AddVertex('A');
    graph.AddVertex('B');
    graph.AddVertex('C');
    graph.AddVertex('D');
    graph.AddVertex('E');
    graph.AddVertex('F');
    graph.AddVertex('G');
    graph.AddVertex('H');

    //FOR A
    graph.AddEdge('A','B',1);
    graph.AddEdge('A','C',1);
    graph.AddEdge('A','D',1);

    //FOR B
    graph.AddEdge('B','A',1);
    //for C nothing
    //for D
    graph.AddEdge('D','A',1);
    graph.AddEdge('D','E',1);
    graph.AddEdge('D','G',1);

    //for E nothing
    //for F
    graph.AddEdge('F','H',1);

    //for G
    graph.AddEdge('G','F',1);
    //for H
    graph.AddEdge('H','E',1);

   //2.print the outdegree of the vertex D
   cout<< graph.OutDegree('D')<<endl;
   //3.print if there is an edge between vertices A and D
   if(graph.FoundEdge('A','D'))
    cout<<"There is an edge"<<endl;
   else
     cout<<"There is no edge"<<endl;

   //4.print if there is an edge between vertices B and D
   if(graph.FoundEdge('B','D'))
    cout<<"There is an edge"<<endl;
   else
     cout<<"There is no edge"<<endl;

     //5.DFS for B to E
     graph.DepthFirstSearch('B','E');
     //6.DFS for E to B
     graph.DepthFirstSearch('E','B');
     //7.BFS for B to E
     graph.BreadthFirstSearch('B','E');
     //8.BFS for E to B
     graph.BreadthFirstSearch('E','B');

    //modify BFS function create a new function BreadFirstSearchLength
    //9.length to B to E
     graph.BreadthFirstSearchLength('B','E');





    return 0;
}
