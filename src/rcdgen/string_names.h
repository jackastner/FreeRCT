/*
 * This file is part of FreeRCT.
 * FreeRCT is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * FreeRCT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with FreeRCT. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file string_names.h Names of strings used in the program. */

#ifndef STRING_NAMES_H
#define STRING_NAMES_H

/** String names defined in the GUI. */
static const char *_gui_string_names[] = {
	/* Generic GUI strings. */
	"TITLEBAR_TIP",
	"LANGUAGE_NAME",

	"MONTH_JANUARY",
	"MONTH_FEBRUARY",
	"MONTH_MARCH",
	"MONTH_APRIL",
	"MONTH_MAY",
	"MONTH_JUNE",
	"MONTH_JULY",
	"MONTH_AUGUST",
	"MONTH_SEPTEMBER",
	"MONTH_OCTOBER",
	"MONTH_NOVEMBER",
	"MONTH_DECEMBER",

	"NUMBERED_INSTANCE_NAME",
	"RESOLUTION",

	/* Toolbar GUI strings. */
	"TOOLBAR_GUI_QUIT",
	"TOOLBAR_GUI_TOOLTIP_QUIT_PROGRAM",
	"TOOLBAR_GUI_SETTINGS",
	"TOOLBAR_GUI_GAME_MODE_EDITOR",
	"TOOLBAR_GUI_GAME_MODE_PLAY",
	"TOOLBAR_GUI_TOOLTIP_GAME_MODE",
	"TOOLBAR_GUI_TOOLTIP_SETTINGS",
	"TOOLBAR_GUI_PATHS",
	"TOOLBAR_GUI_TOOLTIP_BUILD_PATHS",
	"TOOLBAR_GUI_SAVE",
	"TOOLBAR_GUI_TOOLTIP_SAVE_GAME",
	"TOOLBAR_GUI_LOAD",
	"TOOLBAR_GUI_TOOLTIP_LOAD_GAME",
	"TOOLBAR_GUI_RIDE_SELECT",
	"TOOLBAR_GUI_TOOLTIP_RIDE_SELECT",
	"TOOLBAR_GUI_FENCE",
	"TOOLBAR_GUI_TOOLTIP_FENCE",
	"TOOLBAR_GUI_TERRAFORM",
	"TOOLBAR_GUI_TOOLTIP_TERRAFORM",
	"TOOLBAR_GUI_FINANCES",
	"TOOLBAR_GUI_TOOLTIP_FINANCES",

	"BOTTOMBAR_GUESTCOUNT",

	/* Quit program strings. */
	"QUIT_CAPTION",
	"QUIT_MESSAGE",
	"QUIT_NO",
	"QUIT_YES",

	/* Error message window */
	"ERROR_MESSAGE_CAPTION",
	"ERROR_MESSAGE_SPRITE",

	/* Guest info window. */
	"GUEST_INFO_MONEY",
	"GUEST_INFO_MONEY_SPENT",
	"GUEST_INFO_HAPPINESS",
	"GUEST_INFO_HUNGER",
	"GUEST_INFO_THIRST",
	"GUEST_INFO_WASTE",
	"GUEST_INFO_ITEMS",

	"ITEM_NONE",
	"ITEM_MAP",
	"ITEM_UMBRELLA",
	"ITEM_WRAPPER",

	/* Path GUI strings. */
	"PATH_GUI_TITLE",
	"PATH_GUI_LONG",
	"PATH_GUI_BUY",
	"PATH_GUI_REMOVE",
	"PATH_GUI_LONG_TIP",
	"PATH_GUI_BUY_TIP",
	"PATH_GUI_BULLDOZER_TIP",

	"PATH_GUI_SLOPE_DOWN_TIP",
	"PATH_GUI_SLOPE_FLAT_TIP",
	"PATH_GUI_SLOPE_UP_TIP",

	"PATH_GUI_FORWARD",
	"PATH_GUI_BACKWARD",
	"PATH_GUI_FORWARD_TIP",
	"PATH_GUI_BACKWARD_TIP",

	"PATH_GUI_NW_DIRECTION_TIP",
	"PATH_GUI_NE_DIRECTION_TIP",
	"PATH_GUI_SW_DIRECTION_TIP",
	"PATH_GUI_SE_DIRECTION_TIP",

	"PATH_GUI_NORMAL_PATH",
	"PATH_GUI_QUEUE_PATH",

	"PATH_GUI_SINGLE",
	"PATH_GUI_DIRECTIONAL",
	"PATH_GUI_SINGLE_TIP",
	"PATH_GUI_DIRECTIONAL_TIP",

	/* Ride selection window. */
	"RIDE_SELECT_TITLE",
	"RIDE_SELECT_SHOPS",
	"RIDE_SELECT_SHOPS_TOOLTIP",
	"RIDE_SELECT_GENTLE",
	"RIDE_SELECT_GENTLE_TOOLTIP",
	"RIDE_SELECT_WET",
	"RIDE_SELECT_WET_TOOLTIP",
	"RIDE_SELECT_COASTER",
	"RIDE_SELECT_COASTER_TOOLTIP",
	"RIDE_SELECT_RIDE",
	"RIDE_SELECT_RIDE_TOOLTIP",
	"RIDE_SELECT_ROT_POS_TOOLTIP",
	"RIDE_SELECT_ROT_NEG_TOOLTIP",

	/* Shop manager window strings. */
	"SHOP_MANAGER_TITLE",
	"SHOP_MANAGER_COST_PRICE_TEXT",
	"SHOP_MANAGER_SELLING_PRICE_TEXT",
	"SHOP_MANAGER_ITEMS_SOLD_TEXT",
	"SHOP_MANAGER_ITEM_PROFIT_TEXT",
	"SHOP_MANAGER_SELL_PROFIT_TEXT",
	"SHOP_MANAGER_SHOP_COST_TEXT",
	"SHOP_MANAGER_TOTAL_PROFIT_TEXT",
	"SHOP_MANAGER_OPENED_TEXT",
	"SHOP_MANAGER_CLOSED_TEXT",

	/* Coaster instance window strings. */
	"COASTER_INSTANCE_MAX_HEIGHT_TEXT",
	"COASTER_INSTANCE_DROP_COUNT_TEXT",
	"COASTER_INSTANCE_MAX_SPEED_TEXT",
	"COASTER_INSTANCE_AVG_SPEED_TEXT",

	/* Fence window. */
	"FENCE_TITLE",

	/* Terraform window. */
	"TERRAFORM_TITLE",
	"TERRAFORM_ADD_TEXT",
	"TERRAFORM_ADD_TOOLTIP",
	"TERRAFORM_SUB_TEXT",
	"TERRAFORM_SUB_TOOLTIP",
	"TERRAFORM_LEVEL_TEXT",
	"TERRAFORM_MOVE_TEXT",

	/* Finances window. */
	"FINANCES_TITLE",
	"FINANCES_RIDE_CONSTRUCTION_TEXT",
	"FINANCES_RIDE_RUNNING_TEXT",
	"FINANCES_LAND_PURCHASE_TEXT",
	"FINANCES_LANDSCAPING_TEXT",
	"FINANCES_PARK_TICKETS_TEXT",
	"FINANCES_RIDE_TICKETS_TEXT",
	"FINANCES_SHOP_SALES_TEXT",
	"FINANCES_SHOP_STOCK_TEXT",
	"FINANCES_FOOD_SALES_TEXT",
	"FINANCES_FOOD_STOCK_TEXT",
	"FINANCES_STAFF_WAGES_TEXT",
	"FINANCES_MARKETING_TEXT",
	"FINANCES_RESEARCH_TEXT",
	"FINANCES_LOAN_INTEREST_TEXT",
	"FINANCES_TOTAL_TEXT",

	/* Coaster construction window. */
	"COASTER_BUILD_LEFT_BEND_TOOLTIP",
	"COASTER_BUILD_NO_BEND_TOOLTIP",
	"COASTER_BUILD_RIGHT_BEND_TOOLTIP",
	"COASTER_BUILD_BANK_LEFT_TOOLTIP",
	"COASTER_BUILD_BANK_NONE_TOOLTIP",
	"COASTER_BUILD_BANK_RIGHT_TOOLTIP",
	"COASTER_BUILD_BUY_TOOLTIP",

	/* Ride build window. */
	"RIDE_BUILD_TITLEBAR_SHOP",
	"RIDE_BUILD_ROTATE_TOOLTIP",
	"RIDE_BUILD_DISPLAY_TOOLTIP",
	"RIDE_BUILD_NAME_TEXT",
	"RIDE_BUILD_COST_TEXT",

	/* Money symbols. */
	"MONEY_CURRENCY_SYMBOL",
	"MONEY_THOUSANDS_SEPARATOR",
	"MONEY_DECIMAL_SEPARATOR",

	/* Settings window. */
	"SETTING_TITLE",
	"SETTING_LANGUAGE",
	"SETTING_LANGUAGE_TOOLTIP",
	"SETTING_RESOLUTION",
	"SETTING_RESOLUTION_TOOLTIP",
};

/** String names of the shops. */
static const char *_shops_string_names[] = {
	"NAME_INSTANCE1",
	"NAME_INSTANCE2",
	"NAME_TYPE",
	"NAME_ITEM1",
	"NAME_ITEM2",
	"DESCRIPTION_TYPE",
	"DESCRIPTION_RECOLOUR1",
	"DESCRIPTION_RECOLOUR2",
	"DESCRIPTION_RECOLOUR3",
};

/** String names of the coaster ride types. */
static const char *_coaster_string_names[] = {
	"NAME_INSTANCE",
	"NAME_TYPE",
	"DESCRIPTION_TYPE",
};

#endif
