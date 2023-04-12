/*
** EPITECH PROJECT, 2023
** ButtonLib
** File description:
** button
*/

#include "../include/Button.h"

sfSprite *create_button(sfTexture *texture, sfVector2f scale, sfVector2f pos)
{
    button_t *button = malloc(sizeof(button_t));

    if (!texture)
        return NULL;    
    button->sprite = sfSprite_create();
    button->texture = texture;
    button->scale = scale;
    button->pos = pos;
    sfSprite_setTexture(button->sprite, button->texture, sfTrue);
    sfSprite_setScale(button->sprite, button->scale);
    sfSprite_setPosition(button->sprite, button->pos);
    return button->sprite;
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
