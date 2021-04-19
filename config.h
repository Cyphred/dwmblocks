//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"$HOME/.local/bin/statusbar/nettraf",		1,	0},
	{"",		"$HOME/.local/bin/statusbar/internet",		10,	0},
	{"",		"$HOME/.local/bin/statusbar/cpubars",		5,	0},
	{"",		"$HOME/.local/bin/statusbar/cpu",		5,	0},
	{"",		"$HOME/.local/bin/statusbar/memory",		5,	0},
	{"",		"$HOME/.local/bin/statusbar/disk",		30,	0},
	{"",		"$HOME/.local/bin/statusbar/battery",		10,	0},
	{"",		"$HOME/.local/bin/statusbar/clock",		1,	0},
	{"",		"$HOME/.local/bin/statusbar/volume",		0,	10},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
