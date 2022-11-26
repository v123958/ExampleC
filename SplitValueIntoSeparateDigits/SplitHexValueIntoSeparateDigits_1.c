/*************************************************
* Function: hexToString
* Description: Convert 0x12 -> '1' '2'
* Input:
* Output:
*
*************************************************/
int hexToString(char *outputAscii, int *inputHex, int inputHexLen)
{
	int i;
	char tmp;

	/*Avoid NULL pointer*/
	if (!inputHex || !outputAscii)
		return 0;

	for (i = 0; i < inputHexLen; i ++)
	{
		tmp = (inputHex[i] & 0xF0) >> 4;

		if (tmp < 10)
			tmp += '0';
		else
			tmp = tmp - 10 + 'A';

		*outputAscii++ = tmp;

		tmp = (inputHex[i] & 0x0F);

		if (tmp < 10)
			tmp += '0';
		else
			tmp = tmp - 10 + 'A';

		*outputAscii++ = tmp;
	}

	return (2 * inputHexLen);
}
