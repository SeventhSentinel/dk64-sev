#include "../include/common.h"

static s32 screenSizeLoaded = 0;

void sev (void) {
	// Main Menu
	if (CurrentMap == 80) {
		// Remember Screen Size option through resets
		if (!screenSizeLoaded) {
			ScreenRatio = checkFlag(31, 1);
			screenSizeLoaded = 1;
		} else {
			setFlag(31, ScreenRatio, 1);
		}
	}
}

// Not sure why this makes widescreen the default but it's quick enough to change back to normal so I don't think I care