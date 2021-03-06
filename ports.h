/*
 * Copyright 2015 Bradley J. Snyder <snyder.bradleyj@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _PORTS_H_
#define _PORTS_H_

// PIN/PORT/DDR configuration
#define BACKLIGHT_PORT_LETTER B
#define BACKLIGHT_PORT_NUMBER 2

#define LPF_OUTPUT_PORT_LETTER B
#define LPF_OUTPUT_PORT_NUMBER 1

#define CSEL1_PORT_LETTER C
#define CSEL1_PORT_NUMBER 1
#define CSEL2_PORT_LETTER C
#define CSEL2_PORT_NUMBER 3
#define RW_PORT_LETTER C
#define RW_PORT_NUMBER 4
#define DI_PORT_LETTER C
#define DI_PORT_NUMBER 5
#define EN_PORT_LETTER C
#define EN_PORT_NUMBER 2

#define CONTROL_PORT PORTC
#define DATA_PORT_LETTER D

// SPI
#define SPI_CS_PORT_LETTER B
#define SPI_CS_PORT_NUMBER 2
#define SPI_REAL_CS_PORT_LETTER B
#define SPI_REAL_CS_PORT_NUMBER 0
#define MOSI_PORT_LETTER B
#define MOSI_PORT_NUMBER 3
#define MISO_PORT_LETTER B
#define MISO_PORT_NUMBER 4
#define SCK_PORT_LETTER B
#define SCK_PORT_NUMBER 5

/*
 * Nothing to configure past this point 
 */
#define GLUE(A,B) A##B
#define GLUE3(A,B,C) A##B##C

#define PORT(x) GLUE(PORT, x)
#define DDR(x) GLUE(DDR, x)
#define PIN(x) GLUE(PIN, x)
#define PINNUM(x,y) GLUE3(PORT, x, y)

#define BACKLIGHT_DDR		DDR(BACKLIGHT_PORT_LETTER)
#define BACKLIGHT_PORT		PORT(BACKLIGHT_PORT_LETTER)
#define BACKLIGHT_PIN		PIN(BACKLIGHT_PORT_LETTER)
#define BACKLIGHT			PINNUM(BACKLIGHT_PORT_LETTER,BACKLIGHT_PORT_NUMBER)

#define CSEL1_DDR			DDR(CSEL1_PORT_LETTER)
#define CSEL1_PORT			PORT(CSEL1_PORT_LETTER)
#define CSEL1				PINNUM(CSEL1_PORT_LETTER,CSEL1_PORT_NUMBER)

#define CSEL2_DDR			DDR(CSEL2_PORT_LETTER)
#define CSEL2_PORT			PORT(CSEL2_PORT_LETTER)
#define CSEL2				PINNUM(CSEL2_PORT_LETTER,CSEL2_PORT_NUMBER)

#define RW_DDR				DDR(RW_PORT_LETTER)
#define RW_PORT				PORT(RW_PORT_LETTER)
#define RW					PINNUM(RW_PORT_LETTER,RW_PORT_NUMBER)

#define EN_DDR				DDR(EN_PORT_LETTER)
#define EN_PORT				PORT(EN_PORT_LETTER)
#define EN					PINNUM(EN_PORT_LETTER,EN_PORT_NUMBER)

#define DI_DDR				DDR(DI_PORT_LETTER)
#define DI_PORT				PORT(DI_PORT_LETTER)
#define DI					PINNUM(DI_PORT_LETTER,DI_PORT_NUMBER) 

#define RS_DDR				DI_DDR
#define RS_PORT				DI_PORT
#define RS					DI

#define DATA_DDR			DDR(DATA_PORT_LETTER)
#define DATA_PORT			PORT(DATA_PORT_LETTER)
#define DATA_PIN			PIN(DATA_PORT_LETTER)

#define SPI_REAL_CS_DDR		DDR(SPI_REAL_CS_PORT_LETTER)
#define SPI_REAL_CS_PORT	PORT(SPI_REAL_CS_PORT_LETTER)
#define SPI_REAL_CS_PIN		PIN(SPI_REAL_CS_PIN_LETTER)
#define SPI_REAL_CS			PINNUM(SPI_REAL_CS_PORT_LETTER,SPI_REAL_CS_PORT_NUMBER)

#define SPI_CS_DDR			DDR(SPI_CS_PORT_LETTER)
#define SPI_CS_PORT			PORT(SPI_CS_PORT_LETTER)
#define SPI_CS_PIN			PIN(SPI_CS_PIN_LETTER)
#define SPI_CS				PINNUM(SPI_CS_PORT_LETTER,SPI_CS_PORT_NUMBER)

#define MOSI_DDR			DDR(MOSI_PORT_LETTER)
#define MOSI_PORT			PORT(MOSI_PORT_LETTER)
#define MOSI_PIN			PIN(MOSI_PIN_LETTER)
#define MOSI				PINNUM(MOSI_PORT_LETTER,MOSI_PORT_NUMBER)

#define MISO_DDR			DDR(MISO_PORT_LETTER)
#define MISO_PORT			PORT(MISO_PORT_LETTER)
#define MISO_PIN			PIN(MISO_PIN_LETTER)
#define MISO				PINNUM(MISO_PORT_LETTER,MISO_PORT_NUMBER)

#define SCK_DDR				DDR(SCK_PORT_LETTER)
#define SCK_PORT			PORT(SCK_PORT_LETTER)
#define SCK_PIN				PIN(SCK_PIN_LETTER)
#define SCK					PINNUM(SCK_PORT_LETTER,SCK_PORT_NUMBER)

#define LPF_OUTPUT_DDR		DDR(LPF_OUTPUT_PORT_LETTER)
#define LPF_OUTPUT_PORT		PORT(LPF_OUTPUT_PORT_LETTER)
#define LPF_OUTPUT			PINNUM(LPF_OUTPUT_PORT_LETTER,LPF_OUTPUT_PORT_NUMBER)

#define CHIP1	_BV(CSEL1)
#define CHIP2	_BV(CSEL2)

#define IS_DATA 2
#define IS_INSTRUCTION 1

#endif
