#include "doctor_data.h"

namespace heaven {
        Vessel::Vessel(std::string name, int generation, star_map::System current_system){
            this->name = name;
            this->generation = generation;
            this->current_system = current_system;
        }
    
        Vessel Vessel::replicate(std::string name){
            int new_generation = this->generation+1;
            return Vessel(name, new_generation);
        }
    
        void Vessel::make_buster(){
            this->busters++;
        }
    
        bool Vessel::shoot_buster(){
            if(this->busters > 0){
                busters--;
                return true;
            }
            else{
                return false;
            }
        }
    
        std::string get_older_bob(const Vessel& vessel_1, const Vessel& vessel_2){
            return vessel_1.generation < vessel_2.generation ? vessel_1.name : vessel_2.name;
        }
    
        bool in_the_same_system(const Vessel& vessel_1, const Vessel& vessel_2){
            return vessel_1.current_system == vessel_2.current_system;
        }
}