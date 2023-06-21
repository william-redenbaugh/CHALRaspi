#include "hub75_wrapper.h"
#include "rpi-rgb-led-matrix-cutdown/include/led-matrix-c.h"
#include "global_includes.h"
static struct RGBLedMatrixOptions options;
static struct RGBLedMatrix *matrix;
static struct LedCanvas *offscreen_canvas;

int hub75_led_matrix_init(void *params, int width, int height){
    options.rows = 32;
    options.cols = 32;
    options.chain_length = 4;
    options.row_address_type = 0; 
    options.parallel = 2;
    options.multiplexing = 1;
    options.limit_refresh_rate_hz = 160;
    options.scan_mode =1;

    matrix = led_matrix_create_from_options(&options, NULL, NULL);
    offscreen_canvas = led_matrix_create_offscreen_canvas(matrix);

    return 0;
}

int hub75_led_matrix_set_pixel(void *params, int x, int y, uint8_t r, uint8_t g, uint8_t b){
    
    return 0;
}

int hub75_led_matrix_update(void *params){
    
    return 0;
}