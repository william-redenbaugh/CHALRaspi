#ifndef _HUB75_WRAPPER_H
#define _HUB75_WRAPPER_H

#include "stdint.h"
#include "stdlib.h"

/**
 * @brief Initializes the HUB75 LED matrix.
 *
 * This function initializes the HUB75 LED matrix with the specified parameters.
 *
 * @param params A pointer to additional parameters (optional).
 * @param width The width of the LED matrix.
 * @param height The height of the LED matrix.
 *
 * @return 0 on success, or a negative error code on failure.
 */
int hub75_led_matrix_init(void *params, int width, int height);


/**
 * @brief Sets the color of a pixel on the HUB75 LED matrix.
 *
 * This function sets the color of a specific pixel on the HUB75 LED matrix.
 *
 * @param params A pointer to additional parameters (optional).
 * @param x The x-coordinate of the pixel.
 * @param y The y-coordinate of the pixel.
 * @param r The red component of the pixel color.
 * @param g The green component of the pixel color.
 * @param b The blue component of the pixel color.
 *
 * @return 0 on success, or a negative error code on failure.
 */
int hub75_led_matrix_set_pixel(void *params, int x, int y, uint8_t r, uint8_t g, uint8_t b);


/**
 * @brief Updates the HUB75 LED matrix.
 *
 * This function updates the HUB75 LED matrix to reflect any changes made since the last update.
 *
 * @param params A pointer to additional parameters (optional).
 *
 * @return 0 on success, or a negative error code on failure.
 */
int hub75_led_matrix_update(void *params);

#endif