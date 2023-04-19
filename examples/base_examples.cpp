#include "base_node.hpp"
#include "base_edge.hpp"
#include <cassert>

int main(void)
{
	using node_t = BaseNode;
	auto print = [](auto expr) { std::cout << expr << std::endl; };

	// initialization of node with id{0}

	node_t node1 = node_t{ 1 };
	node_t* node2 = new node_t{ 2 };
	print(node1);
	print(*node2);

	// edge initialization
	Edge<node_t> edge1 = Edge<node_t>{ node1, *node2 };
	Edge<node_t*> edge2 = Edge<node_t*>{ &node1, node2 };
	Edge<node_t>* edge3 = new Edge<node_t>{ node1, *node2 };
	Edge<node_t*>* edge4 = new Edge<node_t*>{ &node1, node2 };
	print(edge1);
	print(edge2);
	print(*edge3);
	print(*edge4);

	// basic operations
	assert(!(node1 == *node2));

	return 0;
}
