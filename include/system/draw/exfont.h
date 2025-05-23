#if !defined(DEF_EXFONT_H)
#define DEF_EXFONT_H
#include <stdbool.h>
#include <stdint.h>
#include "system/draw/exfont_types.h"

/**
 * @brief Initialize a external font API.
 * @return On success DEF_SUCCESS, on failure DEF_ERR_* or Nintendo API's error.
 * @warning Thread dangerous (untested).
*/
uint32_t Exfont_init(void);

/**
 * @brief Uninitialize a external font API.
 * Do nothing if external font API is not initialized.
 * @warning Thread dangerous (untested).
*/
void Exfont_exit(void);

/**
 * @brief Query external font name.
 * Always return empty string if external font API is not initialized.
 * @param exfont_num (in) External font index.
 * @return External font name.
 * @warning Thread dangerous (untested).
*/
const char* Exfont_query_external_font_name(uint16_t exfont_num);

/**
 * @brief Check whether external font is loaded (ready).
 * Always return false if external font API is not initialized.
 * @param exfont_num (in) External font index.
 * @return True if external font is loaded, otherwise false.
 * @warning Thread dangerous (untested).
*/
bool Exfont_is_loaded_external_font(uint16_t exfont_num);

/**
 * @brief Check whether external font is loading.
 * Always return false if external font API is not initialized.
 * @return True if external font is loading right now, otherwise false.
 * @warning Thread dangerous (untested).
*/
bool Exfont_is_loading_external_font(void);

/**
 * @brief Check whether external font is unloading.
 * Always return false if external font API is not initialized.
 * @return True if external font is unloading right now, otherwise false.
 * @warning Thread dangerous (untested).
*/
bool Exfont_is_unloading_external_font(void);

/**
 * @brief Set external font request state.
 * Do nothing if external font API is not initialized.
 * Actual loading/unloading won't happen until you call
 * Exfont_request_load_external_font()/Exfont_request_unload_external_font().
 * @param exfont_num (in) External font index.
 * @param flag (in) When true, external font request state will be set to true, otherwise set to false.
 * @warning Thread dangerous (untested).
*/
void Exfont_set_external_font_request_state(uint16_t exfont_num, bool flag);

/**
 * @brief Load external font.
 * Do nothing if external font API is not initialized.
 * @warning Thread dangerous (untested).
*/
void Exfont_request_load_external_font(void);

/**
 * @brief Unload external font.
 * Do nothing if external font API is not initialized.
 * @warning Thread dangerous (untested).
*/
void Exfont_request_unload_external_font(void);

/**
 * @brief Parse text data, this function won't sort for RTL characters.
 * @param source_string (in) Text.
 * @param out_string (out) Array for parsed text.
 * @param max_loop (in) Number of array for out_string.
 * @param out_element (out) Parsed number of characters.
 * @note Thread safe.
*/
void Exfont_text_parse_ignore_rtl(const char* source_string, Exfont_one_char out_string[], uint32_t max_loop, uint32_t* out_element);

/**
 * @brief Parse text data.
 * @param source_string (in) Text.
 * @param part_string (out) Array for parsed text.
 * @param max_loop (in) Number of array for part_string.
 * @param out_element (out) Parsed number of characters.
 * @note Thread safe.
*/
void Exfont_text_parse(const char* source_string, Exfont_one_char out_string[], uint32_t max_loop, uint32_t* out_element);

/**
 * @brief Draw external font.
 * Do nothing if external font API is not initialized.
 * @param in_string (in) Array for parsed text (returned by Exfont_text_parse_*()).
 * @param num_of_characters (in) Number of text elements (returned by Exfont_text_parse_*()).
 * @param texture_x (in) X position (in px).
 * @param texture_y (in) Y position (in px).
 * @param texture_size_x (in) Font size for X direction.
 * @param texture_size_y (in) Font size for Y direction.
 * @param abgr8888 (in) Font color.
 * @param out_width (out) Total font width (in px).
 * @param out_height (out) Total font height (in px).
 * @warning Thread dangerous (untested).
 * @warning Call it only from rendering thread.
*/
void Exfont_draw_external_fonts(Exfont_one_char* in_part_string, uint32_t num_of_characters, float texture_x, float texture_y,
float texture_size_x, float texture_size_y, uint32_t abgr8888, float* out_width, float* out_height);

/**
 * @brief Get text size.
 * Do nothing if external font API is not initialized.
 * @param in_string (in) Array for parsed text (returned by Exfont_text_parse_*()).
 * @param num_of_characters (in) Number of text elements (returned by Exfont_text_parse_*()).
 * @param texture_size_x (in) Font size for X direction.
 * @param texture_size_y (in) Font size for Y direction.
 * @param out_width (out) Text width (in px).
 * @param out_height (out) Text height (in px).
 * @warning Thread dangerous (untested).
 * @warning Call it only from rendering thread.
*/
void Exfont_draw_get_text_size(Exfont_one_char* in_part_string, uint32_t num_of_characters, float texture_size_x,
float texture_size_y, float* out_width, float* out_height);

#endif //!defined(DEF_EXFONT_H)
