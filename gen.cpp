static const auto UNPACKERS = std::vector<std::function<void()>>{
  [&]() {
    n = (n << 7) + pBuffer[0];
    n = (n << 7) + pBuffer[1];
    n = (n << 7) + pBuffer[2];
    n = (n << 7) + pBuffer[3];
    n = (n << 7) + pBuffer[4];
    n = (n << 7) + pBuffer[5];
    n = (n << 7) + pBuffer[6];
    n = (n << 7) + pBuffer[7];
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
  [&]() {
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
  },
};
