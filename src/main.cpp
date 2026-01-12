#include <bn_color.h>
#include <bn_backdrop.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(20, 20, 31));

    if (bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(31, 20, 20));
    }

    while(true) {
        bn::core::update();
    }
}