/********************************************************/
/*						Name : Mohamed Essam			*/
/*						Date : 24/9/2021				*/
/*						SWC  : LCD						*/
/*					 version : 1.0						*/
/********************************************************/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

void LCD_voidWriteChar(u8 Copy_u8Char);
void LCD_voidWriteCmnd (u8 Copy_u8Cmnd);

void LCD_voidInit(void);

void LCD_voidWriteString(u8 *Copy_u8String);

void LCD_voidWriteNum(u8 *Copy_u8Num);

#endif
