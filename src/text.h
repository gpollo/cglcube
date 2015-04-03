#ifndef TEXT_H
#define TEXT_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_ttf.h"

#define DEFAULT_SIZE 12
#define DEFAULT_FONT "./font/DejaVuSans.ttf"

/**
 * This data structure is used for rendering text in SDL.
 */
struct text {
    /**
     * Contains a pointer to the text buffer.
     */
    char* text;
    /**
     * Contains a pointer to the rendered text in RGBA.
     */
    unsigned char* pixels;
    /**
     * Contains the size of the text buffer.
     */
    int size;
    /**
     * Contains a bool defined in config.h that prevents
     * re-rendering the same text.
     */
    int updated;
    /**
     * Contains the color of the text.
     */
    SDL_Color color;
    /**
     * Contains the surface returned by TTF_RenderText*.
     */
    SDL_Surface* surface;
    /**
     * Contains the font for rendering text.
     */
    TTF_Font* font;
};

/**
 * This tells the structure that it has been updated and
 * needs to be re-rendered.
 *
 * @param st_text A pointer to a text structure.
 */
void text_change(struct text* st_text, char* text);

/**
 * This function initialises the text structure.
 *
 * @param st_text A pointer to a text structure.
 * @param size The size of the text buffer.
 * @return An error code defined in config.h.
 */
int text_init(struct text* st_text);

/**
 * This function destroys and frees the text structure.
 *
 * @param st_text A pointer to a text structure.
 * @return An error code defined in config.h.
 */
int text_destroy(struct text* st_text);

/**
 * This function renders the text into the surface.
 *
 * @param st_text A pointer to a text structure.
 * @return An error code defined in config.h.
 */
int text_render(struct text* st_text);

#endif
