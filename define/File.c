/*Get The Length Of The File*/
#define getFileLength(fptr, length) fseek(fptr, 0L, SEEK_END); length = ftell(fptr); fseek(fptr, 0L, SEEK_SET);
