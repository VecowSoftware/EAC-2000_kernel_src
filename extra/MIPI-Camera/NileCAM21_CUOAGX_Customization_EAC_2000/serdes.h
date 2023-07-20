/*
 * Copyright (C) 2018 e-con Systems Pvt Ltd, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __SERDES_H
#define __SERDES_H

#define SER1_ADDR 0x40
#define SER2_ADDR 0x41
#define DES_ADDR 0x48

typedef struct serdes_parse{
uint16_t reg;
uint8_t val;
}SERDES_PARSE;


SERDES_PARSE SER1_CONF[] = {

        {0x0010, 0x21},
	{0xFFFF, 0x00},
        {0x0102, 0x0C},
        {0x010A, 0x0C},
        {0x0112, 0x0C},
        {0x011A, 0x0C},
        {0x0330, 0x00},
        {0x0331, 0x33},
        {0x0332, 0xEE},
        {0x0333, 0xE4},
        {0x0334, 0x00},
        {0x0335, 0x00},
        {0x0311, 0x40},
        {0x0308, 0x74},
        {0x0002, 0x43},
        {0x0053, 0x10},
        {0x0057, 0x12},
        {0x005B, 0x11},
        {0x005F, 0x13},
        {0x0100, 0x68},
        {0x0110, 0x68},
        {0x0101, 0x58},
        {0x0111, 0x58},
        {0x0312, 0x00},
        {0x0313, 0x00},
        {0x0314, 0x00},
        {0x0315, 0x00},
        {0x0316, 0x00},
        {0x0317, 0x00},
        {0x0318, 0x00},
        {0x0319, 0x00},
        {0x031A, 0x00},
        {0x031B, 0x00},
        {0x031C, 0x18},
        {0x031D, 0x18},
        {0x031E, 0x18},
        {0x031F, 0x18},

};	
SERDES_PARSE SER2_CONF[] = {

        {0x0010, 0x21},
	{0xFFFF, 0x00},
        {0x0102, 0x0C},
        {0x010A, 0x0C},
        {0x0112, 0x0C},
        {0x011A, 0x0C},
        {0x0330, 0x00},
        {0x0331, 0x33},
        {0x0332, 0xEE},
        {0x0333, 0xE4},
        {0x0334, 0x00},
        {0x0335, 0x00},
        {0x0311, 0x40},
        {0x0308, 0x74},
        {0x0002, 0x43},
        {0x0053, 0x13},
        {0x0057, 0x10},
        {0x005B, 0x12},
        {0x005F, 0x11},
        {0x0100, 0x68},
        {0x0110, 0x68},
        {0x0101, 0x58},
        {0x0111, 0x58},
        {0x0312, 0x00},
        {0x0313, 0x00},
        {0x0314, 0x00},
        {0x0315, 0x00},
        {0x0316, 0x00},
        {0x0317, 0x00},
        {0x0318, 0x00},
        {0x0319, 0x00},
        {0x031A, 0x00},
        {0x031B, 0x00},
        {0x031C, 0x18},
        {0x031D, 0x18},
        {0x031E, 0x18},
        {0x031F, 0x18},

};

SERDES_PARSE DSER_CONF[] = {
       
       	{0x0003, 0xD0},
        {0x0320, 0x6F},               
        //{0x0323, 0x2B},
	{0x0323, 0x6F},
        {0x0100, 0x23},
        {0x0112, 0x23},
        {0x0124, 0x23},
        {0x0136, 0x23},
        {0x0330, 0x04},
        {0x0332, 0xF0},
        {0x0333, 0x4E},
        {0x0334, 0xE4},
        {0x040A, 0x10},
        {0x044A, 0xC8},                
        {0x048A, 0xC8},                
        {0x04CA, 0x10},
        {0x0326, 0x2B},
        {0x0050, 0x00},
        {0x0051, 0x01},
        {0x0052, 0x02},
        {0x0053, 0x03},
        {0x0335, 0x00},
        {0x0336, 0x00},
        {0x0339, 0x00},
        {0x033A, 0x02},
        {0x033B, 0x00},
        {0x033C, 0x02},
        {0x0433, 0x00},
        {0x0473, 0x00},
        {0x04B3, 0x00},
        {0x04F3, 0x00},
        {0x040B, 0x07},             
        {0x040C, 0x00},
        {0x044B, 0x07},              
        {0x044C, 0x00},
        {0x048B, 0x07},             
        {0x048C, 0x00},
        {0x04CB, 0x07},             
        {0x04CC, 0x00},
        {0x042D, 0x15},             
        {0x042E, 0x00},
        {0x042F, 0x00},
        {0x0430, 0x00},
        {0x046D, 0x15},             
        {0x046E, 0x00},
        {0x046F, 0x00},
        {0x0470, 0x00},
        {0x04AD, 0x15},             
        {0x04AE, 0x00},
        {0x04AF, 0x00},
        {0x04B0, 0x00},
        {0x04ED, 0x15},             
        {0x04EE, 0x00},
        {0x04EF, 0x00},
        {0x04F0, 0x00},
        {0x040D, 0x1E},            
        {0x040E, 0x1E},             
        {0x040F, 0x00},            
        {0x0410, 0x00},            
        {0x0411, 0x01},           
        {0x0412, 0x01},           
        {0x044D, 0x1E},           
        {0x044E, 0x1E},
        {0x044F, 0x00},
        {0x0450, 0x00},
        {0x0451, 0x01},
        {0x0452, 0x01},
        {0x048D, 0x1E},           
        {0x048E, 0x1E},
        {0x048F, 0x00},
        {0x0490, 0x00},
        {0x0491, 0x01},
        {0x0492, 0x01},
        {0x04CD, 0x1E},           
        {0x04CE, 0x1E},
        {0x04CF, 0x00},
        {0x04D0, 0x00},
        {0x04D1, 0x01},
        {0x04D2, 0x01},
        {0x0309, 0x00},
        {0x030B, 0x00},
        {0x030D, 0x00},
        {0x030F, 0x00},
        {0x0413, 0x00},
        {0x0414, 0x00},
        {0x0415, 0x00},
        {0x0416, 0x00},
        {0x0417, 0x00},
        {0x0418, 0x00},
        {0x0419, 0x00},
        {0x041A, 0x00},
        {0x041B, 0x00},
        {0x041C, 0x00},
        {0x041D, 0x00},
        {0x041E, 0x00},
        {0x041F, 0x00},
        {0x0420, 0x00},
        {0x0421, 0x00},
        {0x0422, 0x00},
        {0x0423, 0x00},
        {0x0424, 0x00},
        {0x0425, 0x00},
        {0x0426, 0x00},
        {0x0427, 0x00},
        {0x0428, 0x00},
        {0x0429, 0x00},
        {0x042A, 0x00},
        {0x042B, 0x00},
        {0x042C, 0x00},
        {0x0453, 0x00},
        {0x0454, 0x00},
        {0x0455, 0x00},
        {0x0456, 0x00},
        {0x0457, 0x00},
        {0x0458, 0x00},
        {0x0459, 0x00},
        {0x045A, 0x00},
        {0x045B, 0x00},
        {0x045C, 0x00},
        {0x045D, 0x00},
        {0x045E, 0x00},
        {0x045F, 0x00},
        {0x0460, 0x00},
        {0x0461, 0x00},
        {0x0462, 0x00},
        {0x0463, 0x00},
        {0x0464, 0x00},
        {0x0465, 0x00},
        {0x0466, 0x00},
        {0x0467, 0x00},
        {0x0468, 0x00},
        {0x0469, 0x00},
        {0x046A, 0x00},
        {0x046B, 0x00},
        {0x046C, 0x00},
        {0x0493, 0x00},
        {0x0494, 0x00},
        {0x0495, 0x00},
        {0x0496, 0x00},
        {0x0497, 0x00},
        {0x0498, 0x00},
        {0x0499, 0x00},
        {0x049A, 0x00},
        {0x049B, 0x00},
        {0x049C, 0x00},
        {0x049D, 0x00},
        {0x049E, 0x00},
        {0x049F, 0x00},
        {0x04A0, 0x00},
        {0x04A1, 0x00},
        {0x04A2, 0x00},
        {0x04A3, 0x00},
        {0x04A4, 0x00},
        {0x04A5, 0x00},
        {0x04A6, 0x00},
        {0x04A7, 0x00},
        {0x04A8, 0x00},
        {0x04A9, 0x00},
        {0x04AA, 0x00},
        {0x04AB, 0x00},
        {0x04AC, 0x00},
        {0x04D3, 0x00},
        {0x04D4, 0x00},
        {0x04D5, 0x00},
        {0x04D6, 0x00},
        {0x04D7, 0x00},
        {0x04D8, 0x00},
        {0x04D9, 0x00},
        {0x04DA, 0x00},
        {0x04DB, 0x00},
        {0x04DC, 0x00},
        {0x04DD, 0x00},
        {0x04DE, 0x00},
        {0x04DF, 0x00},
        {0x04E0, 0x00},
        {0x04E1, 0x00},
        {0x04E2, 0x00},
        {0x04E3, 0x00},
        {0x04E4, 0x00},
        {0x04F5, 0x00},
        {0x04E6, 0x00},
        {0x04E7, 0x00},
        {0x04E8, 0x00},
        {0x04E9, 0x00},
        {0x04EA, 0x00},
        {0x04EB, 0x00},
        {0x04EC, 0x00},
        {0x0313, 0x02},              
        {0x0314, 0x10},              
        {0x0315, 0x00},              
        {0x0316, 0x40},              
        {0x0317, 0x7E},              
        {0x0318, 0x02},              
        {0x0319, 0x90},              
        {0x031A, 0x00},
        {0x031B, 0x00},
        {0x031C, 0x00},
        {0x031D, 0xAB},
        {0x031E, 0x00},
        {0x031F, 0x00},
        {0x01D9, 0x19},
        {0x01F9, 0x19},
        {0x0219, 0x19},
        {0x0239, 0x19},
        {0x02C5, 0xC3},
};

SERDES_PARSE SER1_I2C_CONF[] = {
	{0x0042, 0x86},
	{0x0043, 0x84},
	{0x0044, 0x1A},
	{0x0045, 0x1C},
};
SERDES_PARSE SER2_I2C_CONF[] = {
	{0x0042, 0x88},
	{0x0043, 0x84},
	{0x0044, 0x1E},
	{0x0045, 0x1C},
};

SERDES_PARSE SER2_PKT_HEADER_CHANGE[] = {
	{0x007B, 0x12},
	{0x0083, 0x12},
	{0x008B, 0x12},
	{0x0093, 0x12},
	{0x00A3, 0x12},
	{0x00AB, 0x12},
};

int serdes_write_i2c(struct i2c_client *client, u16 sladdr,  u8 * val, u32 count);
int serdes_read_i2c(struct i2c_client *client, u16 sladdr, u8 * val, u32 count);
s32 serdes_read_8b_reg(struct i2c_client *client, u16 sladdr, u8 reg, u8 * val);
s32 serdes_write_8b_reg(struct i2c_client *client, u16 sladdr, u8 reg, u8 val);
s32 serdes_read_16b_reg(struct i2c_client *client, u16 sladdr, u16 reg, u8 * val);
s32 serdes_write_16b_reg(struct i2c_client *client, u16 sladdr, u16 reg, u8 val);
static s32 serdes_parse_regdata(struct i2c_client *client, SERDES_PARSE *,u32 ,u8);
#endif /* __SERDES_H */

