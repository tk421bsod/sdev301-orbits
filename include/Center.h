#pragma once

#include <bn_sprite_ptr.h>

class Center {
    public:
        Center(bn::fixed_point starting_position, bn::fixed mass, bn::fixed speed);
        
        void update();
        void set_mass(bn::fixed new_mass);

        bn::fixed_point position();
        bn::fixed mass();
    private:
        bn::sprite_ptr _sprite;
        bn::fixed _mass; 
        bn::fixed _speed;
    };