#ifndef RESOURCE_HH
#define RESOURCE_HH

#include "json.hpp"

/* For convenience. */
using json = nlohmann::json;

enum class ResourceType {
    WOODLAND,
    GRASSLAND,
    DESERT,
    SCRUB,
    SAVANNAH,
    JUNGLE,
    TAIGA,
    TUNDRA,
    INSECT_POLLINATED_FLOWER,
    INSECT_POLLINATION,
    NITROGEN,
    WATER
};

struct Resource {
public:
    ResourceType type;
    double consumption;
    double affinity;
};

void from_json(const json &j, Resource &resource);

#endif