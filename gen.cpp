switch (mask) {
case 0: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 1: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 2: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 3: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 4: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 5: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 6: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 7: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 8: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 9: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 10: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 11: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 12: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 13: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 14: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 15: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 16: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 17: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 18: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 19: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 20: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 21: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 22: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 23: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 24: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 25: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 26: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 27: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 28: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 29: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 30: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 31: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 32: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 33: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 34: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 35: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 36: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 37: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 38: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 39: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 40: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 41: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 42: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 43: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 44: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 45: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 46: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 47: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 48: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 49: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 50: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 51: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 52: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 53: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 54: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 55: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 56: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 57: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 58: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 59: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 60: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 61: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 62: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 63: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    break;
  }
case 64: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 65: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 66: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 67: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 68: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 69: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 70: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 71: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 72: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 73: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 74: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 75: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 76: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 77: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 78: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 79: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 80: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 81: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 82: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 83: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 84: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 85: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 86: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 87: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 88: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 89: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 90: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 91: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 92: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 93: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 94: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 95: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 96: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 97: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 98: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 99: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 100: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 101: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 102: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 103: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 104: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 105: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 106: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 107: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 108: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 109: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 110: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 111: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 112: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 113: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 114: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 115: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 116: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 117: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 118: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 119: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 120: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 121: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 122: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 123: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 124: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 125: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 126: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 127: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[7];
    break;
  }
case 128: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 129: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 130: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 131: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 132: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 133: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 134: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 135: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 136: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 137: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 138: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 139: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 140: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 141: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 142: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 143: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 144: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 145: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 146: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 147: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 148: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 149: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 150: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 151: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 152: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 153: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 154: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 155: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 156: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 157: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 158: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 159: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 160: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 161: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 162: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 163: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 164: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 165: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 166: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 167: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 168: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 169: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 170: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 171: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 172: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 173: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 174: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 175: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 176: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 177: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 178: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 179: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 180: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 181: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 182: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 183: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 184: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 185: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 186: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 187: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 188: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 189: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 190: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 191: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 192: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 193: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 194: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 195: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 196: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 197: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 198: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 199: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 200: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 201: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 202: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 203: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 204: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 205: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 206: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 207: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 208: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 209: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 210: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 211: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 212: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 213: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 214: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 215: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 216: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 217: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 218: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 219: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 220: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 221: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 222: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 223: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 224: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 225: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 226: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 227: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 228: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 229: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 230: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 231: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 232: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 233: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 234: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 235: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 236: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 237: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 238: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 239: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 240: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 241: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 242: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 243: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 244: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 245: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 246: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 247: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 248: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 249: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 250: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 251: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 252: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 253: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 254: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
case 255: {
    n = (n << 7) + (pBuffer[0] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[1] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[2] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[3] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[4] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[5] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[6] & 0x7F);
    sum += n;
    n = 0;
    n = (n << 7) + (pBuffer[7] & 0x7F);
    sum += n;
    n = 0;
    break;
  }
};
