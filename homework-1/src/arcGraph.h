
#ifndef HOMEWORK_1_ARCGRAPH_H
#define HOMEWORK_1_ARCGRAPH_H

#include "../graph.h"

template<typename T = void>
class ArcGraph : public IGraph<T> {
public:
    virtual void AddEdge(int from, int to, T &&element) {};

    ArcGraph() {};

    ArcGraph(IGraph<T> *_oth) {};

    virtual int VerticesCount() const { return 0; };

    virtual void GetNextVertices(int vertex, std::vector<int> &vertices) const {};

    virtual void GetPrevVertices(int vertex, std::vector<int> &vertices) const {};

    virtual void DeepFirstSearch(int vertex, std::vector<int> &vertices) const {};

    virtual void BreadthFirstSearch(int vertex, std::vector<int> &vertices) const {};
};

#endif //HOMEWORK_1_ARCGRAPH_H
