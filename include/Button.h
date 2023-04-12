/*
** EPITECH PROJECT, 2023
** ButtonLib
** File description:
** Button
*/

#pragma once

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ButtonStructs.h"

sfSprite *create_button(sfTexture *texture, sfVector2f scale, sfVector2f pos);
void button_destroy(sfSprite *sprite);
void button_set_position(sfSprite *sprite, sfVector2f pos);
void button_set_scale(sfSprite *sprite, sfVector2f scale);
void button_set_texture(sfSprite *sprite, sfTexture *texture);
