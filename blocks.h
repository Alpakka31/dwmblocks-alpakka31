//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/bin/kernel",					0,		0},
	
	{"", "~/bin/disk",                                      10,		0},

	{"", "~/bin/memory",					1,		0},

	{"", "~/bin/battery",					1,		0},
	
	{"", "~/bin/dwmip",					1,		0},

	{"", "~/bin/volume",					1,		0},

	{"", "~/bin/clock",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
