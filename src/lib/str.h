/**
 * @file str.h
 * @author Viktor Fejes (viktor@viktorfejes.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#pragma once

#include "types.h"

typedef struct str_view {
    const char* data;
    u64 length;
} str_view_t;

str_view_t string_view(const char* start, u64 length);

/**
 * @brief Function to calculate string length.
 * 
 * @param str Input string.
 * @return u64 The length of the string.
 */
u64 str_len(const char* str);

/**
 * @brief Compares two strings using binary comparison.
 * 
 * @param str_a C string to be compared.
 * @param str_b C string to be compared.
 * @return i32 Returns a value indicating the relationship between the strings.
 */
i32 str_cmp(const char* str_a, const char* str_b);

i32 str_ncmp(const char* str_a, const char* str_b, u64 length);

/**
 * @brief Copies the C string from `src` to `dst` including the null terminator.
 * 
 * @param dst Pointer to the destination array where the content is to be copied.
 * @param src C string to be copied.
 * @return char* dst is returned. 
 */
char* str_cpy(char* dst, const char* src);

/**
 * @brief Copies the C string from `src` to `dst` of `length` size, and adds
 * null terminator.
 * 
 * @param dst Pointer to the destination array where the content is to be copied.
 * @param src C string to be copied.
 * @param length Length of the string to copy.
 * @return char* dst is returned. 
 */
char* str_ncpy(char* dst, const char* src, u64 length);

/**
 * @brief Returns a pointer to a null-terminated C string, which is a duplicate
 * of the string pointed to by `str`.
 * 
 * @param str Pointer to the C string to duplicate.
 * @return char* Pointer to the newly allocated C string, or NULL.
 */
char* str_dup(const char* str);

/**
 * @brief Appends a copy of the `src` string to the `dst` string.
 * 
 * @param dst Pointer to the destination array. It should be large enough to contain
 * the concatenated resulting string.
 * @param src C string to be appended.
 * @return char* `dst` is returned.
 */
char* str_cat(char* dst, const char* src);
