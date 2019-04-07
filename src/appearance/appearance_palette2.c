#include "appearance/appearance_palette2.h"

t_appearance	american_appearance(void)
{
	return ((t_appearance){rgba(187, 19, 62, 255), rgba(0, 33, 71, 255),
		rgba(60, 59, 110, 255), black(),
		"We", "Were", "Living in", "America.mp3"});
}

t_appearance	english_appearance(void)
{
	return ((t_appearance){rgba(207, 8, 31, 255), white(),
		white(), black(),
		"London", "Is", "A capital", "England.mp3"});
}

t_appearance	german_appearance(void)
{
	return ((t_appearance){rgba(221, 0, 0, 255), rgba(0, 0, 0, 255),
		rgba(255, 206, 0, 255), white(),
		"Deutchland", "Ub*r", "A***s", "Germany.mp3"});
}

t_appearance	syria_appearance(void)
{
	return ((t_appearance){white(), rgba(206, 17, 38, 255), black(), black(),
		"Syria", "Just", "Syria", "Arabian.mp3"});
}

t_appearance	israel_appearance(void)
{
	return ((t_appearance){white(), rgba(0, 56, 184, 255),
		rgba(0, 56, 184, 255), black(),
		":-)", "Shalom!", "(-:", "Israel.mp3"});
}
