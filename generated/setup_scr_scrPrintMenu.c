/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_scrPrintMenu(lv_ui *ui)
{
	//Write codes scrPrintMenu
	ui->scrPrintMenu = lv_obj_create(NULL);
	lv_obj_set_size(ui->scrPrintMenu, 1024, 600);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->scrPrintMenu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu, lv_color_hex(0xF3F8FE), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_contBG
	ui->scrPrintMenu_contBG = lv_obj_create(ui->scrPrintMenu);
	lv_obj_set_pos(ui->scrPrintMenu_contBG, 0, 0);
	lv_obj_set_size(ui->scrPrintMenu_contBG, 1024, 132);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu_contBG, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu_contBG, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_contBG, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_contBG, lv_color_hex(0x2f3243), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_contBG, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_contBG, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_labelTitle
	ui->scrPrintMenu_labelTitle = lv_label_create(ui->scrPrintMenu);
	lv_label_set_text(ui->scrPrintMenu_labelTitle, "PRINT MENU");
	lv_label_set_long_mode(ui->scrPrintMenu_labelTitle, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->scrPrintMenu_labelTitle, 288, 50);
	lv_obj_set_size(ui->scrPrintMenu_labelTitle, 448, 70);

	//Write style for scrPrintMenu_labelTitle, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_labelTitle, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_labelTitle, &lv_font_montserratMedium_42, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_labelTitle, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->scrPrintMenu_labelTitle, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_labelTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_labelTitle, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_btnBack
	ui->scrPrintMenu_btnBack = lv_btn_create(ui->scrPrintMenu);
	ui->scrPrintMenu_btnBack_label = lv_label_create(ui->scrPrintMenu_btnBack);
	lv_label_set_text(ui->scrPrintMenu_btnBack_label, "<");
	lv_label_set_long_mode(ui->scrPrintMenu_btnBack_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->scrPrintMenu_btnBack_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->scrPrintMenu_btnBack, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->scrPrintMenu_btnBack_label, LV_PCT(100));
	lv_obj_set_pos(ui->scrPrintMenu_btnBack, 53, 37);
	lv_obj_set_size(ui->scrPrintMenu_btnBack, 74, 70);

	//Write style for scrPrintMenu_btnBack, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->scrPrintMenu_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_btnBack, 11, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_btnBack, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_btnBack, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_btnBack, &lv_font_montserratMedium_53, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_btnBack, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_btnBack, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_labelPrompt
	ui->scrPrintMenu_labelPrompt = lv_label_create(ui->scrPrintMenu);
	lv_label_set_text(ui->scrPrintMenu_labelPrompt, "\nFrom where do you want to print?");
	lv_label_set_long_mode(ui->scrPrintMenu_labelPrompt, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->scrPrintMenu_labelPrompt, 74, 480);
	lv_obj_set_size(ui->scrPrintMenu_labelPrompt, 874, 99);

	//Write style for scrPrintMenu_labelPrompt, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_labelPrompt, 17, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_labelPrompt, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_labelPrompt, &lv_font_montserratMedium_29, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_labelPrompt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_labelPrompt, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_labelPrompt, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_labelPrompt, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_labelPrompt, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_contMain
	ui->scrPrintMenu_contMain = lv_obj_create(ui->scrPrintMenu);
	lv_obj_set_pos(ui->scrPrintMenu_contMain, 74, 138);
	lv_obj_set_size(ui->scrPrintMenu_contMain, 874, 308);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu_contMain, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu_contMain, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_contMain, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_contMain, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_contMain, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_contMain, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_contMain, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_contInternet
	ui->scrPrintMenu_contInternet = lv_obj_create(ui->scrPrintMenu_contMain);
	lv_obj_set_pos(ui->scrPrintMenu_contInternet, 618, 22);
	lv_obj_set_size(ui->scrPrintMenu_contInternet, 213, 264);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu_contInternet, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu_contInternet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_contInternet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_contInternet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_contInternet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->scrPrintMenu_contInternet, &_btn_bg_4_213x264, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->scrPrintMenu_contInternet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_contInternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_imgInternet
	ui->scrPrintMenu_imgInternet = lv_img_create(ui->scrPrintMenu_contInternet);
	lv_obj_add_flag(ui->scrPrintMenu_imgInternet, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->scrPrintMenu_imgInternet, &_internet_alpha_85x85);
	lv_img_set_pivot(ui->scrPrintMenu_imgInternet, 50,50);
	lv_img_set_angle(ui->scrPrintMenu_imgInternet, 0);
	lv_obj_set_pos(ui->scrPrintMenu_imgInternet, 93, 41);
	lv_obj_set_size(ui->scrPrintMenu_imgInternet, 85, 85);
	lv_obj_add_flag(ui->scrPrintMenu_imgInternet, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_imgInternet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->scrPrintMenu_imgInternet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_labelnternet
	ui->scrPrintMenu_labelnternet = lv_label_create(ui->scrPrintMenu_contInternet);
	lv_label_set_text(ui->scrPrintMenu_labelnternet, "INTERNET");
	lv_label_set_long_mode(ui->scrPrintMenu_labelnternet, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->scrPrintMenu_labelnternet, 19, 196);
	lv_obj_set_size(ui->scrPrintMenu_labelnternet, 164, 41);
	lv_obj_add_flag(ui->scrPrintMenu_labelnternet, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_labelnternet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_labelnternet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_labelnternet, &lv_font_montserratMedium_29, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_labelnternet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_labelnternet, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_labelnternet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_contMobile
	ui->scrPrintMenu_contMobile = lv_obj_create(ui->scrPrintMenu_contMain);
	lv_obj_set_pos(ui->scrPrintMenu_contMobile, 330, 22);
	lv_obj_set_size(ui->scrPrintMenu_contMobile, 213, 264);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu_contMobile, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu_contMobile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_contMobile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_contMobile, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_contMobile, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->scrPrintMenu_contMobile, &_btn_bg_3_213x264, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->scrPrintMenu_contMobile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_contMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_imgMobile
	ui->scrPrintMenu_imgMobile = lv_img_create(ui->scrPrintMenu_contMobile);
	lv_obj_add_flag(ui->scrPrintMenu_imgMobile, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->scrPrintMenu_imgMobile, &_mobile_alpha_74x88);
	lv_img_set_pivot(ui->scrPrintMenu_imgMobile, 50,50);
	lv_img_set_angle(ui->scrPrintMenu_imgMobile, 0);
	lv_obj_set_pos(ui->scrPrintMenu_imgMobile, 96, 41);
	lv_obj_set_size(ui->scrPrintMenu_imgMobile, 74, 88);
	lv_obj_add_flag(ui->scrPrintMenu_imgMobile, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_imgMobile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->scrPrintMenu_imgMobile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_labelMobile
	ui->scrPrintMenu_labelMobile = lv_label_create(ui->scrPrintMenu_contMobile);
	lv_label_set_text(ui->scrPrintMenu_labelMobile, "MOBILE");
	lv_label_set_long_mode(ui->scrPrintMenu_labelMobile, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->scrPrintMenu_labelMobile, 21, 196);
	lv_obj_set_size(ui->scrPrintMenu_labelMobile, 164, 41);
	lv_obj_add_flag(ui->scrPrintMenu_labelMobile, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_labelMobile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_labelMobile, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_labelMobile, &lv_font_montserratMedium_29, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_labelMobile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_labelMobile, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_labelMobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_contUSB
	ui->scrPrintMenu_contUSB = lv_obj_create(ui->scrPrintMenu_contMain);
	lv_obj_set_pos(ui->scrPrintMenu_contUSB, 42, 22);
	lv_obj_set_size(ui->scrPrintMenu_contUSB, 213, 264);
	lv_obj_set_scrollbar_mode(ui->scrPrintMenu_contUSB, LV_SCROLLBAR_MODE_OFF);

	//Write style for scrPrintMenu_contUSB, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_contUSB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->scrPrintMenu_contUSB, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->scrPrintMenu_contUSB, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_src(ui->scrPrintMenu_contUSB, &_btn_bg_2_213x264, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_img_opa(ui->scrPrintMenu_contUSB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_contUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_imgUSB
	ui->scrPrintMenu_imgUSB = lv_img_create(ui->scrPrintMenu_contUSB);
	lv_obj_add_flag(ui->scrPrintMenu_imgUSB, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->scrPrintMenu_imgUSB, &_usb_alpha_87x88);
	lv_img_set_pivot(ui->scrPrintMenu_imgUSB, 50,50);
	lv_img_set_angle(ui->scrPrintMenu_imgUSB, 0);
	lv_obj_set_pos(ui->scrPrintMenu_imgUSB, 96, 41);
	lv_obj_set_size(ui->scrPrintMenu_imgUSB, 87, 88);
	lv_obj_add_flag(ui->scrPrintMenu_imgUSB, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_imgUSB, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->scrPrintMenu_imgUSB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes scrPrintMenu_labelUSB
	ui->scrPrintMenu_labelUSB = lv_label_create(ui->scrPrintMenu_contUSB);
	lv_label_set_text(ui->scrPrintMenu_labelUSB, "USB");
	lv_label_set_long_mode(ui->scrPrintMenu_labelUSB, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->scrPrintMenu_labelUSB, 6, 196);
	lv_obj_set_size(ui->scrPrintMenu_labelUSB, 164, 41);
	lv_obj_add_flag(ui->scrPrintMenu_labelUSB, LV_OBJ_FLAG_EVENT_BUBBLE);

	//Write style for scrPrintMenu_labelUSB, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->scrPrintMenu_labelUSB, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->scrPrintMenu_labelUSB, &lv_font_montserratMedium_29, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->scrPrintMenu_labelUSB, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->scrPrintMenu_labelUSB, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->scrPrintMenu_labelUSB, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of scrPrintMenu.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->scrPrintMenu);

	//Init events for screen.
	events_init_scrPrintMenu(ui);
}