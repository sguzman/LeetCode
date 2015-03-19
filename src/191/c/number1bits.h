int hammingWeight(uint32_t n) {
	int ret;
	for (ret = 0; n; (ret += n & 0x01), n >>= 1);

	return ret;
}
