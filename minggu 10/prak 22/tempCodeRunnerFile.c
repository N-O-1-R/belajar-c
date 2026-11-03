    // Menggunakan strcasecmp() untuk perbandingan case-insensitive
    int result_case_insensitive = strcasecmp(str1, str2);
    if (result_case_insensitive == 0) {
        printf("Kedua string sama (case-insensitive).\n");
    } else {
        printf("Kedua string tidak sama (case-insensitive).\n");
    }