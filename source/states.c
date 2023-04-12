/*
** EPITECH PROJECT, 2023
** ButtonLibCSFML
** File description:
** states
*/

#include "../include/button.h"

bool button_is_hover(sfRenderWindow *window, sfSprite *button)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(window);
    sfVector2f pos = sfSprite_getPosition(button);
    sfVector2f scale = sfSprite_getScale(button);
    sfVector2f size = {scale.x * 100, scale.y * 100};

    if (mousePos.x >= pos.x && mousePos.x <= pos.x + size.x) {
        if (mousePos.y >= pos.y && mousePos.y <= pos.y + size.y) {
            return true;
        }
    }
    return false;
} // Check if the mouse is hovering the button

bool button_is_clicked(sfRenderWindow *window, sfSprite *button)
{
    if (!button_is_hover(window, button))
        return false;
    if (sfMouse_isButtonPressed(sfMouseLeft))
        return true;
    return false;
}
