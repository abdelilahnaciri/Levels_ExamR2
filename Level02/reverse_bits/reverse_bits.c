unsigned int reverse_bits(unsigned char octect) {
    return (((octect >> 0 & 1) << 7) |
        ((octect >> 1 & 1) << 6) |
        ((octect >> 2 & 1) << 5) |
        ((octect >> 3 & 1) << 4) |
        ((octect >> 4 & 1) << 3) |
        ((octect >> 5 & 1) << 2) |
        ((octect >> 6 & 1) << 1) |
        ((octect >> 7 & 1) << 0)
    );
}