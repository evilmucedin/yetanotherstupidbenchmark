 if (mask == 0x0000000000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080000000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080800000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080008000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000808000ULL) {
n = (n << 7) + pBuffer[0];
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080808000ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080808000ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080000080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + pBuffer[2];
n = (n << 7) + (pBuffer[3] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000800080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[1];
n = (n << 7) + (pBuffer[2] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080800080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080800080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000008080ULL) {
n = (n << 7) + (pBuffer[0] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[1] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[2];
n = (n << 7) + pBuffer[3];
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080008080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080008080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800000808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808000808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000000080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000000080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080000080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080000080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000800080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000800080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080800080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080800080808080ULL) {
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
n = (n << 7) + pBuffer[4];
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000008080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000008080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080008080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080008080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[5];
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0000808080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8000808080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[6];
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
else if (mask == 0x0080808080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + pBuffer[7];
}
else if (mask == 0x8080808080808080ULL) {
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
n = (n << 7) + (pBuffer[4] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[5] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[6] & 0x7f);
sum += n;
n = 0;
n = (n << 7) + (pBuffer[7] & 0x7f);
sum += n;
n = 0;
}
