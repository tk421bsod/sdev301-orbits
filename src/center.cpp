#include <bn_sprite_ptr.h>

#include "bn_sprite_items_center.h"
#include "Center.h"
#include "movement.h"

Center::Center(bn::fixed_point starting_position, bn::fixed mass, bn::fixed speed) : _sprite(bn::sprite_items::center.create_sprite(starting_position)), _mass(mass),_speed(speed){};

void Center::update() {
    dPadMoveSprite(_sprite, _speed);
}

bn::fixed_point Center::position() {
    return _sprite.position();
}

void Center::set_mass(bn::fixed new_mass) {
    _mass = new_mass;
}

bn::fixed Center::mass() {
    return _mass;
}