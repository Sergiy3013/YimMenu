#pragma once
#include "custom_gun.hpp"
#include "location.hpp"
#include "session_type.hpp"

namespace big
{
	inline custom_gun custom_guns[] = {
		0, "None",
		1, "Delete From Existence",
		2, "Gravity Gun",
		3, "J. Pow's Money Printer",
		4, "Vehicle Yeeter",
		5, "Slave Caging",
		6, "Repair Gun"
	};

	inline const int64_t kick_hashes[]{ -1243454584,-1212832151,-1252906024,-1890951223,-442306200,-966559987,1977655521,1998625272,1070934291,764638896,-345371965,-1559754940,1347850743,495824472,1240585650,1129105265,1192658057,3042061272,2735212356, 3852661096,123310597000,122994296644, -1549630786, -1990292823, 1352706024, 12442595688, 11325146948, 11631995864, 96893296585, 98341941608, 97224492868, 97540793224, 1317868303,-1243454584,-1212832151,-1252906024,-1890951223,-442306200,-966559987,1977655521,1998625272,1070934291,764638896,-345371965,-1559754940,1347850743,495824472,1240585650,1129105265,1192658057,3042061272,2735212356, 3852661096,123310597000,122994296644, -1549630786, -1990292823, 1352706024,
-1549630786, -1990292823, -920663435, -891346918, -1729804184, -966559987, -1890951223, -1252906024, 665709549, -2065346036, 823645419, 1881968783, 2565163112, 2404016073, 3328407309, -977515445, 767605081, -1054826273, 1620254541, 1401831542, 1428412924, 10993950665, 11672069737, 12442595688, 11325146948, 11918341901, 10567590113,
11830075615, 9210190337, 97531341784, 96893296585, 98341941608, 97817687821, 96466936033, 97729421535, 95109536257, 97863584373, 96793954985, 97234617022, 96487905784, 95560214803, 97571415657, 97224492868, 95807148815, 97540793224 };

	inline location locations[] =
	{
		{ 0, "Invalid Location" },
		{ 1, "Eclipse Towers, Apt 31" },
		{ 2, "Eclipse Towers, Apt 9" },
		{ 3, "Eclipse Towers, Apt 40" },
		{ 4, "Eclipse Towers, Apt 5" },
		{ 5, "3 Alta St, Apt 10" },
		{ 6, "3 Alta St, Apt 57" },
		{ 7, "Del Perro Heights, Apt 20" },
		{ 8, "1162 Power St, Apt 3" },
		{ 9, "0605 Spanish Ave, Apt 1" },
		{ 10, "0604 Las Lagunas Blvd, Apt 4" },
		{ 11, "0184 Milton Rd, Apt 13" },
		{ 12, "The Royale, Apt 19" },
		{ 13, "0504 S Mo Milton Dr" },
		{ 14, "0115 Bay City Ave, Apt 45" },
		{ 15, "0325 South Rockford Dr" },
		{ 16, "Dream Tower, Apt 15" },
		{ 17, "2143 Las Lagunas Blvd, Apt 9" },
		{ 18, "1561 San Vitas St, Apt 2" },
		{ 19, "0112 S Rockford Dr, Apt 13" },
		{ 20, "2057 Vespucci Blvd, Apt 1" },
		{ 21, "0069 Cougar Ave, Apt 19" },
		{ 22, "1237 Prosperity St, Apt 21" },
		{ 23, "1115 Blvd Del Perro, Apt 18" },
		{ 24, "0120 Murrieta Heights" },
		{ 25, "Unit 14 Popular St" },
		{ 26, "Unit 2 Popular St" },
		{ 27, "331 Supply St" },
		{ 28, "Unit 1 Olympic Fwy" },
		{ 29, "0754 Roy Lowenstein Blvd" },
		{ 30, "12 Little Bighorn Ave" },
		{ 31, "Unit 124 Popular St" },
		{ 32, "0552 Roy Lowenstein Blvd" },
		{ 33, "0432 Davis Ave" },
		{ 34, "Del Perro Heights, Apt 7" },
		{ 35, "Weazel Plaza, Apt 101" },
		{ 36, "Weazel Plaza, Apt 70" },
		{ 37, "Weazel Plaza, Apt 26" },
		{ 38, "4 Integrity Way, Apt 30" },
		{ 39, "4 Integrity Way, Apt 35" },
		{ 40, "Richards Majestic, Apt 4" },
		{ 41, "Richards Majestic, Apt 51" },
		{ 42, "Tinsel Towers, Apt 45" },
		{ 43, "Tinsel Towers, Apt 29" },
		{ 44, "142 Paleto Blvd" },
		{ 45, "1 Strawberry Ave" },
		{ 46, "1932 Grapeseed Ave" },
		{ 47, "1920 Senora Way" },
		{ 48, "2000 Great Ocean Highway" },
		{ 49, "197 Route 68" },
		{ 50, "870 Route 68 Approach" },
		{ 51, "1200 Route 68" },
		{ 52, "8754 Route 68" },
		{ 53, "1905 Davis Ave" },
		{ 54, "1623 South Shambles St" },
		{ 55, "4531 Dry Dock St" },
		{ 56, "1337 Exceptionalists Way" },
		{ 57, "Unit 76 Greenwich Parkway" },
		{ 58, "Garage Innocence Blvd" },
		{ 59, "634 Blvd Del Perro" },
		{ 60, "0897 Mirror Park Blvd" },
		{ 61, "Eclipse Towers, Apt 3" },
		{ 62, "Del Perro Heights, Apt 4" },
		{ 63, "Richards Majestic, Apt 2" },
		{ 64, "Tinsel Towers, Apt 42" },
		{ 65, "4 Integrity Way, Apt 28" },
		{ 66, "4 Hangman Ave" },
		{ 67, "12 Sustancia Rd" },
		{ 68, "4584 Procopio Dr" },
		{ 69, "4401 Procopio Dr" },
		{ 70, "0232 Paleto Blvd" },
		{ 71, "140 Zancudo Ave" },
		{ 72, "1893 Grapeseed Ave" },
		{ 73, "3655 Wild Oats Drive" },
		{ 74, "2044 North Conker Avenue" },
		{ 75, "2868 Hillcrest Avenue" },
		{ 76, "2862 Hillcrest Avenue" },
		{ 77, "3677 Whispymound Drive" },
		{ 78, "2117 Milton Road" },
		{ 79, "2866 Hillcrest Avenue" },
		{ 80, "2874 Hillcrest Avenue" },
		{ 81, "2113 Mad Wayne Thunder Drive" },
		{ 82, "2045 North Conker Avenue" },
		{ 83, "Eclipse Towers, Penthouse Suite 1" },
		{ 84, "Eclipse Towers, Penthouse Suite 2" },
		{ 85, "Eclipse Towers, Penthouse Suite 3" },
		{ 86, "Private Yacht" },
		{ 87, "Lombank West" },
		{ 88, "Maze Bank West" },
		{ 89, "Arcadius Business Center" },
		{ 90, "Maze Bank Tower" },
		{ 91, "Rancho Clubhouse" },
		{ 92, "Del Perro Beach Clubhouse" },
		{ 93, "Pillbox Hill Clubhouse" },
		{ 94, "Great Chaparral Clubhouse" },
		{ 95, "Paleto Bay Clubhouse" },
		{ 96, "Sandy Shores Clubhouse" },
		{ 97, "La Mesa Clubhouse" },
		{ 98, "Downtown Vinewood Clubhouse" },
		{ 99, "Hawick Clubhouse" },
		{ 100, "Grapeseed Clubhouse" },
		{ 101, "Paleto Bay Clubhouse" },
		{ 102, "Vespucci Beach Clubhouse" },
		{ 103, "Office Garage 1" },
		{ 104, "Office Garage 2" },
		{ 105, "Office Garage 3" },
		{ 106, "Office Garage 1" },
		{ 107, "Office Garage 2" },
		{ 108, "Office Garage 3" },
		{ 109, "Office Garage 1" },
		{ 110, "Office Garage 2" },
		{ 111, "Office Garage 3" },
		{ 112, "Vehicle Warehouse" },
		{ 113, "Unknown 1" },
		{ 114, "Unknown 2" },
		{ 115, "Unknown 3" },
		{ 116, "Hangar ???" },
		{ 117, "Facility ???"},
		{ 118, "Nightclub Service Entrance" },
		{ 119, "Nightclub Garaga B2" },
		{ 119, "Nightclub Garaga B3" },
		{ 119, "Nightclub Garaga B4" }
	};

	inline const char* weather_names[] =
	{
		"Clear",
		"Sunny",
		"Cloudy",
		"Very Cloudy",
		"Rain",
		"Clearing",
		"Thunder",
		"Smog",
		"Foggy",
		"Christmas",
		"Light Snow",
		"Blizzard"
	};

	inline const char* weather_types[] =
	{
		"CLEAR",
		"EXTRASUNNY",
		"CLOUDS",
		"OVERCAST",
		"RAIN",
		"CLEARING",
		"THUNDER",
		"SMOG",
		"FOGGY",
		"XMAS",
		"SNOWLIGHT",
		"BLIZZARD"
	};

	inline session_type sessions[] = {
		{ 0,	"Join Public Session"	},
		{ 1,	"New Public Session"	},
		{ 2,	"Closed Crew Session"	},
		{ 3,	"Crew Session"			},
		{ 6,	"Closed Friend Session"	},
		{ 9,	"Find Friend Session"	},
		{ 10,	"Solo Session"			},
		{ 11,	"Invite Only Session"	},
		{ 12,	"Join Crew Session"		},
		{ -1,	"Leave GTA Online"		}
	};
}