#ifndef POPULATION_HH
#define POPULATION_HH

#include <vector>
#include "resource.hh"
#include "prey.hh"
#include "json.hpp"

/* For convenience. */
using json = nlohmann::json;

enum class Species {
    GRASS,
    BUTTERCUP,
    CLOVER,
    HONEYBEE,
    COW
};

struct Population {
public:
    Species species;
    double size;
    std::vector<Resource> resources;
    std::vector<Prey> prey;
    double reproduction_rate;
};

void from_json(const json &j, Population &p);

#endif