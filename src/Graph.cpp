#include "Graph.h"

namespace Graphy {
    Graph::Graph() {
        const long attrib = ogdf::GraphAttributes::nodeGraphics
                            | ogdf::GraphAttributes::nodeId
                            | ogdf::GraphAttributes::nodeLabel
                            | ogdf::GraphAttributes::nodeType
                            | ogdf::GraphAttributes::nodeStyle
                            | ogdf::GraphAttributes::nodeTemplate
                            | ogdf::GraphAttributes::edgeArrow
                            | ogdf::GraphAttributes::edgeGraphics
                            | ogdf::GraphAttributes::edgeStyle
                            | ogdf::GraphAttributes::edgeType
        ;
        ga.init( g, attrib );
    }
}
