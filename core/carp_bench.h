double get_time_elapsed() {
    struct timespec tv;
    clock_gettime(CLOCK_REALTIME, &tv);
    return 1000000000 * tv.tv_sec + tv.tv_nsec;
}
