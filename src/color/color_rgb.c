#include "color/color_rgb.h"

int			raw_color(char r, char g, char b)
{
	return ((r << 16) + (g << 8) + b);
}

t_color		rgb(unsigned char r, unsigned char g, unsigned char b)
{
    return ((t_color){r, g, b, raw_color(r, g, b)});
}
