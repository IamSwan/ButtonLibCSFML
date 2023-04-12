/*
** EPITECH PROJECT, 2023
** ButtonLib
** File description:
** ButtonStructs
*/

#pragma once

#include "Button.h"

typedef struct button_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f scale;
} button_t;
