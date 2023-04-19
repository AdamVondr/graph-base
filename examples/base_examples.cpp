#include "base_node.hpp"
#include "base_edge.hpp"

int main(void)
{
	using node_t = BaseNode;
	using edge_t = Edge<node_t>;

	node_t node_1 = node_t(0);
	node_t* node_2 = new node_t(0);

	return 0;
}
