#ifndef BASENODE_H
#define BASENODE_H

#include <cstddef>
#include <iostream>
#include <functional>


struct BaseNode
{
    std::size_t node_id;

    BaseNode() : node_id(0) {};
    BaseNode(std::size_t id) : node_id(id) {};
    
    bool operator<(BaseNode const& node) const;
    bool operator==(BaseNode const& node) const;
};

//------------------------------------------------------------
// NODE - OVERLOAD COMPARASION OPERATOR FOR NODE
//------------------------------------------------------------


inline bool BaseNode::operator<(BaseNode const& node) const {
    return (node_id < node.node_id);
};

inline bool BaseNode::operator==(BaseNode const& node) const {
    return (node_id == node.node_id);
};

//------------------------------------------------------------
// NODE - OVERLOAD STD::COUT
//------------------------------------------------------------

inline std::ostream& operator<<(std::ostream& output, BaseNode const& node) {
    output << "Node: (" << node.node_id << ")";
    return output;
}

//------------------------------------------------------------
// NODE - OVERLOAD STD::HASH
//------------------------------------------------------------

template<>
struct std::hash<BaseNode> {
    std::size_t operator()(BaseNode node) const noexcept {
        return node.node_id;
    }
};

#endif
