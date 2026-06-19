#ifndef CPPS_NODE_DOMAIN_CPPS_HEAD_
#define CPPS_NODE_DOMAIN_CPPS_HEAD_




namespace cpps
{
	struct cpps_node_domain
	{
		cpps_node_domain(node *n,cpps_node_domain* p, char t, std::string nm);

		cpps_node_domain* parent;
		node			* nodedomain;
		usint8			  domainType;
		std::string		  name;
	};
}
#endif //CPPS_NODE_DOMAIN_CPPS_HEAD_