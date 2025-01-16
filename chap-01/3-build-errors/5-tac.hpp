#pragma once

struct Tic;

#include "5-tic.hpp"

struct Tac {
    // Invert value with tic.
    void swap(Tic& tic);

    int value = 0;
};
