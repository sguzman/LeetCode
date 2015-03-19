int hammingWeight(uint32_t n) {
	int ret;
	for (ret = 0; n; n >>= 1) {
		ret += n & 0x01;
	}

	return ret;
}
