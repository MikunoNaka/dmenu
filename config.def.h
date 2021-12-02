/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Sauce Code Pro:size=14"
};
static const char *prompt      = "RUN: ";//NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#FFFFFF", "#130F23" },
	[SchemeSel] = { "#232627", "#f516a4" },
	[SchemeSelHighlight] = { "#232627", "#9b35e8" },
	[SchemeNormHighlight] = { "#0fe9b0", "#130F23" },
	[SchemeMid] = { "#FFFFFF", "#130F23" },
	/*[SchemeNormHighlight] = { "#FFFFFF", "#222222" },*/
	[SchemeOut] = { "#FFFFFF", "#5b76b7" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 32;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
