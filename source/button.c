/*
** EPITECH PROJECT, 2023
** ButtonLib
** File description:
** button
*/

#include "../include/button.h"

sfSprite *create_button(char *texturePath, sfVector2f scale, sfVector2f pos)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(texturePath, NULL);
        
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    return sprite;
} // Create a button

void button_destroy(sfSprite *sprite)
{
    sfSprite_destroy(sprite);
} // Destroy a button

void button_set_position(sfSprite *sprite, sfVector2f pos)
{
    sfSprite_setPosition(sprite, pos);
} // Set the position of a button

void button_set_scale(sfSprite *sprite, sfVector2f scale)
{
    sfSprite_setScale(sprite, scale);
} // Set the scale of a button

void button_set_texture(sfSprite *sprite, sfTexture *texture)
{
    sfSprite_setTexture(sprite, texture, sfTrue);
} // Set the texture of a button
