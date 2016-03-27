/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by Sunju Hwang
 * Mar 27, 2016
 *
 */

// Add #define pre-processor below
#include "led_test.h"

#define  FRONT_LED_PIN 10
#define REAR_LED_PIN  9

int light = 0;
int lightvalue=-1;
 
void setup() {
  //Add your code of Lab Assignment #1
	pinMode(FRONT_LED_PIN,OUTPUT);
    pinMode(REAR_LED_PIN,OUTPUT);
}

void loop() {
  //Add your code of Lab Assignment #1  
	if(light>=255) lightvalue*=-1;
	if(light<=0) lightvalue*=-1;

	analogWrite(FRONT_LED_PIN,light);
	analogWrite(REAR_LED_PIN,255-light);

	light+=lightvalue;

	delay(11);
}
