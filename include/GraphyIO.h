#ifndef __GRAPHYIO_H__
#define __GRAPHYIO_H__

#include <string>

namespace Graphy {
    class Graph;

    namespace IO {
        bool readGmlFile( Graph& G, const std::string& fname );
    }
}

#endif
