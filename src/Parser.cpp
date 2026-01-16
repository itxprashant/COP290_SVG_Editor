#include "GraphicsObject.hpp"
#include <string>
#include <vector>
using namespace std;

class objectTable {
public:
  vector<GraphicsObject> table;
};

class svgParser {
  objectTable table;

public:
  void parse(string svgString) {}

  void save() {}
  void render() {}
};
