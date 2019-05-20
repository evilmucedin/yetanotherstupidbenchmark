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
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 2: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 3: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 4: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 5: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 6: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 7: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 8: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 9: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 10: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 11: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 12: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 13: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 14: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 15: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 16: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 17: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 18: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 19: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 20: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 21: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 22: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 23: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 24: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 25: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 26: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 27: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 28: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 29: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 30: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 31: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 32: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    sum1 += n;
    sum0 += pBuffer[5];
    n = 0;
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 128;
    break;
  }
case 33: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum4 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 34: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 35: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 36: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 37: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 38: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 39: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 40: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 41: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 42: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 43: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 44: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 45: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 46: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 47: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 48: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 256;
    break;
  }
case 49: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 50: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 51: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 52: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 53: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 54: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 55: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 56: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 384;
    break;
  }
case 57: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 58: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 59: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 60: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 512;
    break;
  }
case 61: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 62: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 640;
    break;
  }
case 63: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
    sum0 -= 768;
    break;
  }
case 64: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    sum1 += n;
    sum0 += pBuffer[6];
    n = 0;
    n = pBuffer[7];
    sum0 -= 128;
    break;
  }
case 65: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum5 += pBuffer[1];
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 66: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 67: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 68: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 69: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 70: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 71: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 72: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 73: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 74: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 75: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 76: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 77: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 78: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 79: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 80: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 81: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 82: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 83: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 84: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 85: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 86: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 87: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 88: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 89: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 90: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 91: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 92: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 93: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 94: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 95: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 96: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    sum1 += n;
    sum0 += pBuffer[5];
    n = 0;
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 256;
    break;
  }
case 97: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum4 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 98: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 99: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 100: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 101: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 102: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 103: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 104: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 105: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 106: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 107: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 108: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 109: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 110: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 111: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 112: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 384;
    break;
  }
case 113: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 114: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 115: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 116: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 117: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 118: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 119: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 120: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 512;
    break;
  }
case 121: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 122: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 123: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 124: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 640;
    break;
  }
case 125: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 126: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 768;
    break;
  }
case 127: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    n = pBuffer[7];
    sum0 -= 896;
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
    sum1 += n;
    sum0 += pBuffer[7];
    n = 0;
    sum0 -= 128;
    break;
  }
case 129: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum6 += pBuffer[1];
    sum5 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 130: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum5 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 131: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum5 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 132: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 133: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 134: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 135: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum4 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 136: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 137: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 138: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 139: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 140: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 141: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 142: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 143: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum3 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 144: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 145: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 146: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 147: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 148: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 149: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 150: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 151: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 152: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 153: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 154: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 155: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 156: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 157: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 158: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 159: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum2 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 160: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    sum1 += n;
    sum0 += pBuffer[5];
    n = 0;
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 161: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum4 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 162: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 163: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 164: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 165: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 166: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 167: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 168: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 169: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 170: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 171: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 172: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 173: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 174: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 175: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 176: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 177: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 178: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 179: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 180: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 181: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 182: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 183: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 184: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 185: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 186: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 187: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 188: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 189: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 190: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 191: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum1 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 192: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    sum1 += n;
    sum0 += pBuffer[6];
    n = 0;
    sum0 += pBuffer[7];
    sum0 -= 256;
    break;
  }
case 193: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum5 += pBuffer[1];
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 194: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 195: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum4 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 196: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 197: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 198: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 199: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum3 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 200: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 201: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 202: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 203: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 204: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 205: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 206: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 207: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum2 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 208: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 209: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 210: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 211: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 212: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 213: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 214: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 215: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 216: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 217: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 218: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 219: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 220: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 221: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 222: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 223: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum1 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 224: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    sum1 += n;
    sum0 += pBuffer[5];
    n = 0;
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 384;
    break;
  }
case 225: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum4 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 226: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 227: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum3 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 228: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 229: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 230: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 231: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum2 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 232: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 233: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 234: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 235: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 236: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 237: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 238: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 239: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum1 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 240: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    sum1 += n;
    sum0 += pBuffer[4];
    n = 0;
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 512;
    break;
  }
case 241: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum3 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 242: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 243: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum2 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 244: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 245: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 246: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 247: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum1 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 248: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    sum1 += n;
    sum0 += pBuffer[3];
    n = 0;
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 640;
    break;
  }
case 249: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum2 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 250: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 251: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum1 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 252: {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    sum1 += n;
    sum0 += pBuffer[2];
    n = 0;
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 768;
    break;
  }
case 253: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum1 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 254: {
    n = (n << 7) + pBuffer[0];
    sum1 += n;
    sum0 += pBuffer[1];
    n = 0;
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 896;
    break;
  }
case 255: {
    sum1 += n;
    sum0 += pBuffer[0];
    n = 0;
    sum0 += pBuffer[1];
    sum0 += pBuffer[2];
    sum0 += pBuffer[3];
    sum0 += pBuffer[4];
    sum0 += pBuffer[5];
    sum0 += pBuffer[6];
    sum0 += pBuffer[7];
    sum0 -= 1024;
    break;
  }
};
