/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;     /* -b  option; if 0, dmenu appears at bottom     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = {"#aaaaaa", "#1c1c1c" },
	[SchemeSel] = {"#ffffff", "#1c1c1c" },
	[SchemeNormHighlight] = {"#dddddd","#005555" },
	[SchemeSelHighlight] = {"#ffffff","#008888" },
	[SchemeOut] = {"#00ffff", "#000000" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* PATCH FUZZY */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
