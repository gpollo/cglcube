/**
 * Defines the name of the game.
 */

#if defined(__LINUX__)
    #define NAME "CGLCube-LINUX"
#elif defined(__WIN32__)
    #define NAME "CGLCube-WIN32"
#endif

/*
 * Remove gcc's warning about redefined
 */
#ifdef SUCCESS
    #undef SUCCESS
#endif
#ifdef FAILED
    #undef FAILED
#endif

#define DEFAULT_RES_X 500
#define DEFAULT_RES_Y 500
#define DEFAULT_X 3.5
#define DEFAULT_Y 3.5
#define DEFAULT_Z 3.5

#define ZOOM_MIN 1
#define ZOOM_MAX 20

/**
 * Defines a FALSE boolean.
 */
#define FALSE 0

/**
 * Defines a TRUE boolean.
 */
#define TRUE  1

/**
 * Defines the error code for success.
 */
#define SUCCESS 0

/**
 * Defines the error code for failure.
 */
#define FAILED  1

/** @file */
