static  char norm_fg[] = "#120512";
static  char norm_bg[] = "#613583";
static  char norm_border[] = "#879d89";

static  char sel_fg[] = "#120512";
static  char sel_bg[] = "#59AFB8";
/*  static  char sel_border[] = "#c2e1c5"; */
static char sel_border[] = "#fa0b6a";

static  char urg_fg[] = "#c2e1c5";
static  char urg_bg[] = "#547982";
static  char urg_border[] = "#547982";

static  char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
