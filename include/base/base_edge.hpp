#ifndef EDGE_H
#define EDGE_H

//------------------------------------------------------------
// EDGE
//------------------------------------------------------------

template<typename node1_t, typename node2_t = node1_t>
struct Edge
{
    node1_t first;
    node2_t second;

    // node_first -> node_second
    Edge(node1_t node_first, node2_t node_second) : first(node_first), second(node_second) {}
    bool operator<(Edge<node1_t,node2_t> const& edge);
};

//------------------------------------------------------------
// EDGE - OVERLOAD STD::COUT
//------------------------------------------------------------
// normal
template<typename node1_t, typename node2_t = node1_t>
std::ostream& operator<<(std::ostream& output, Edge<node1_t,node2_t>& edge) {
    output << "Edge: (" << edge.first << ", " << edge.second << ")";
    return output;
}

//------------------------------------------------------------
// EDGE - OVERLOAD COMPARASION OPERATOR
//------------------------------------------------------------
// lexicographical

template<typename node1_t, typename node2_t>
bool Edge<node1_t, node2_t>::operator<(Edge<node1_t, node2_t> const& edge)
{
    if (first < edge.first) { return true; }
    if ((first == edge.first) && (second < edge.second)) { return true; }
    return false;
};

#endif
