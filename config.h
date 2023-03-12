/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;  /* -b  option; if 0, dmenu appears at bottom */

static const unsigned int alpha = 0xCC;
static unsigned int use_alpha = 0; /* -a option; if 1, use alpha */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=10"
};

static const char *prompt = NULL;    /* -p option; prompt to display */

static const char *colors[SchemeLast][2] = {
    /*                          fg         bg     */
    [SchemeNorm]          = { "#bbbbbb", "#222222" },
    [SchemeSel]           = { "#eeeeee", "#005577" },
    [SchemeOut]           = { "#ff0000", "#00ffff" },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
    [SchemeSelHighlight]  = { "#ffc978", "#005577" },
};
static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm]          = { OPAQUE, alpha },
    [SchemeSel]           = { OPAQUE, alpha },
    [SchemeOut]           = { OPAQUE, alpha },
    [SchemeNormHighlight] = { OPAQUE, alpha },
    [SchemeSelHighlight]  = { OPAQUE, alpha },
};
/* Masks to use when the -a option is not given: do not use transparency. */
static const unsigned int noalphas[SchemeLast][2] = {
    [SchemeNorm]          = { OPAQUE, 0xff },
    [SchemeSel]           = { OPAQUE, 0xff },
    [SchemeOut]           = { OPAQUE, 0xff },
    [SchemeNormHighlight] = { OPAQUE, 0xff },
    [SchemeSelHighlight]  = { OPAQUE, 0xff },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */

static int fuzzy = 0; /* -F option; if 1, dmenu will use fuzzy matching */
