 if (mask == 0x00000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x00808080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
}
else if (mask == 0x80808080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
}
