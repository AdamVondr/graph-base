#ifndef EDGE_H
#define EDGE_H

//------------------------------------------------------------
// EDGE
//------------------------------------------------------------

template<typename node_t>
struct Edge
{
    node_t first;
    node_t second;

    // node_first -> node_second
    Edge(node_t node_first, node_t node_second) : first(node_first), second(node_second) {}
    bool operator<(Edge<node_t> const& edge);
};

//------------------------------------------------------------
// EDGE - OVERLOAD STD::COUT
//------------------------------------------------------------

template<typename node_t>
std::ostream& operator<<(std::ostream& output, Edge<node_t>& edge) {
    output << "Edge: (" << edge.first << ", " << edge.second << ")";
    return output;
}

template<typename node_t>
std::ostream& operator<<(std::ostream& output, Edge<node_t*>& edge) {
    output << "Edge: (" << *edge.first << ", " << *edge.second << ")";
    return output;
}

//------------------------------------------------------------
// EDGE - OVERLOAD COMPARASION OPERATOR
//------------------------------------------------------------
// lexicographical

template<typename node_t>
bool Edge<node_t>::operator<(Edge<node_t> const& edge)
{
    if (first < edge.first) { return true; }
    if ((first == edge.first) && (second < edge.second)) { return true; }
    return false;
};

#endif
