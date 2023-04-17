#include "base_node.h"
#include "base_edge.h"

int main(void)
{
	using node_t = BaseNode;
	using edge_t = Edge<node_t>;

	node_t node_1 = node_t(0);
	node_t* node_2 = new node_t(0);

	return 0;
}
