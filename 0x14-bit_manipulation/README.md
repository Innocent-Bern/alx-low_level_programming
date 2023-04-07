# Bit Manipulation

## Bit operators
* **~ bitwise NOT** takes a number and invets all it's bit
* **& bitwise AND** result is 1 if the both are 1.
* **| bitwise OR** result is 1 if any of the two bits is 1. 
* **^ bitwise XOR Exclusive Or** result of XOR is 1 if the two bits are different.
* **<< left shift** binary operand that shifts the bits of the left operand to the left by the number specified by the right operand
* **>> right shift** binary operand that shifts bits of the left operand to the right by the number of bits specified by the right operand

## Conversion of decimal to hexidecimal or base 16
Base 16 include 0-9 & A-F
To convert a decimal number lets say 155: 
* Divide the number by 16 *155/16* 
* Take the remainder and if it is between 0-9 set it aside as is. If it between 10-16 replace replace it with the corresponding letter from the table below
|**A**|**B**|**C**|**D**|**E**|**F**|**G**|
|-----|-----|-----|-----|-----|-----|-----|
| 10  | 11  | 12  | 13  | 14  | 15  | 16  |
* In our case the remainder of the remainder of 155/16 is 11 so we replace it with the A.
* We continue dividing till we are left with zero.
* 155/16 gives us 9. So we divide 9/16 which its remainder is zero so we take the value 9
* To make the hex value we take our remainders and combine: 0x**9A**


