#pragma once
#include <string>

namespace star_map {
    enum class System{
    AlphaCentauri,
    BetaHydri,
    DeltaEridani,
    EpsilonEridani,
    Omicron2Eridani,
    Sol
    };
}

namespace heaven {
    class Vessel {
    public:
        Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);
        Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();
    
        std::string name;
        star_map::System current_system;
        int generation = 0;
        int busters = 0;
    };
    std::string get_older_bob(const Vessel& vessel_1, const Vessel& vessel_2);
    bool in_the_same_system(const Vessel& vessel_1, const Vessel& vessel_2);
}