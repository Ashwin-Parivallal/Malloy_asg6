#include <vector>
class Node;
class Function;

class PoolOfNodes {
public:
  static PoolOfNodes& getInstance();
  void add(const Node* node) { nodePool.push_back(node); }
  //void add(Function* f) { funcPool.push_back(f); }
  void drainThePool();
private:
  std::vector<const Node*> nodePool;
  //std::vector<Function*> funcPool;
  PoolOfNodes() : nodePool(){}
};
