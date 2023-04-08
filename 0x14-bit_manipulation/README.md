# Bit Manipulation

## Bit operators


**~ bitwise NOT** takes a number and invets all it's bit.

**& bitwise AND** result is 1 if the both are 1.

**| bitwise OR** result is 1 if any of the two bits is 1.

**^ bitwise XOR Exclusive Or** result of XOR is 1 if the two bits are different.

**<< left shift** binary operand that shifts the bits of the left operand to the left by the number specified by the right operand.

**>> right shift** binary operand that shifts bits of the left operand to the right by the number of bits specified by the right operand.


## Conversion of decimal to hexidecimal or base 16
Base 16 include 0-9 & A-F
To convert a decimal number lets say 155 to base 16: 
* Divide the number by 16: **155/16**
* Take the remainder and if it is between 0-9 set it aside as is. If it between 10-16 replace replace it with the corresponding letter from the table below.


| **A** | **B** | **C** | **D** | **E** | **F** |
|-----|-----|-----|-----|-----|-----|-----|
| 10  | 11  | 12  | 13  | 14  | 15  |


* In our case the remainder of the remainder of 155/16 is 11 so we replace it with the B.
* We continue dividing till we are left with zero. At each step setting the reminder aside.
* 155/16 gives us 9. So we divide 9/16 which its remainder is zero so we take the value 9
* To make the hex value we take our remainders and combine the from the last to the first: 0x**9B**

| **Division** | **Remainder** |
| ---------| ----------|
| 155 / 16 | 11 - B    |
| 9 / 16   | 9         |
| **Result** | 0x**9B** |

## Conversion from binary to hexidecimal
* To convert base 16 to binary we can split the binary digits into sets of 4 digits.
* We the convert the sets of 4 bits to their corresponding hex values.
* The table below shows the conversion of the binary **011000010** to its corresponding hex value.

| **0110** | **0010** |
| ---------| -------- |
|     6    |     2    |

* The hex value for **01100010** would be **0x62**

## Set bits
* To set bits at a given index use the **& bitwise AND** operator.
* eg to set bit of 98 at index 2 would be **98 & (1u << index)**

## Clear bit
* To clear bit at a give index use the **& bitwise AND** and the **~ bitwise NOT or Compliment** operators
* eg to clear bit of 98 at index 2 would 98 and the compliment of 2^2 which is **98 & ~(1u << 2)**

## Flip bits
* To flip bits at a given index no matter the state use the **^ Exclusive OR** operator.
* eg to flip bit of 98 at index 2 would be **98 & (1u << index)**

