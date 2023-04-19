#include "base_node.hpp"
#include "base_edge.hpp"
#include <cassert>

int main(void)
{
	using node_t = BaseNode;
	auto print = [](auto expr) { std::cout << expr << std::endl; };

	// initialization of node with id

	node_t node1 = node_t{ 1 };
	node_t* node2 = new node_t{ 2 };
	print(node1);
	print(*node2);

	// edge initialization - same type
	Edge<node_t> edge1 = Edge<node_t>{ node1, *node2 };
	Edge<node_t*> edge2 = Edge<node_t*>{ &node1, node2 };
	Edge<node_t>* edge3 = new Edge<node_t>{ node1, *node2 };
	Edge<node_t*>* edge4 = new Edge<node_t*>{ &node1, node2 };
	print(edge1);
	print(edge2);
	print(*edge3);
	print(*edge4);

	// edge initialization - different type
	auto edge5 = Edge<node_t, int>{ node1, 1 };
	auto edge6 = Edge<node_t, char>{ node1, 'X'};
	auto edge7 = Edge<node_t, node_t*>{ node1, node2 };
	print(edge5);
	print(edge6);
	print(edge7);

	return 0;
}
