#ifndef __GRAPH_H__
#define __GRAPH_H__

#include "ogdf/basic/Graph.h"
#include "ogdf/basic/GraphAttributes.h"

namespace Graphy {
    class Graph {
    public:
        Graph();
        inline const ogdf::Graph& getGraph() const;
        inline ogdf::Graph& getGraph();
        inline const ogdf::GraphAttributes& getAttributes() const;
        inline ogdf::GraphAttributes& getAttributes();
    private:
        ogdf::Graph g;
        ogdf::GraphAttributes ga;
    };
    /***********************************************/
    const ogdf::Graph& Graph::getGraph() const {
        return g;
    }
    ogdf::Graph& Graph::getGraph() {
        return g;
    }

    const ogdf::GraphAttributes& Graph::getAttributes() const {
        return ga;
    }
    ogdf::GraphAttributes& Graph::getAttributes() {
        return ga;
    }
}

#endif
