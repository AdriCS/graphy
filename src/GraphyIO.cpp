#include "GraphyIO.h"

#include <iostream>

#include "Graph.h"

#include "ogdf/fileformats/GraphIO.h"

namespace Graphy {
    namespace IO {
        bool readGmlFile( Graph& G, const std::string& fname ) {
            return ogdf::GraphIO::readGML(
                        G.getAttributes(),
                        G.getGraph(),
                        fname
            );
		}
    }
}
