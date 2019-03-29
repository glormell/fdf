#ifndef MAP_LINE_H
#define MAP_LINE_H
#include "map/map_point.h"

typedef struct  s_line
{
	t_point3    *s;
	t_point3    *e;
}               t_line;


t_line          *p_line(t_point3 *start, t_point3 *end);
t_line          line(t_point3 *start, t_point3 *end);

#endif
