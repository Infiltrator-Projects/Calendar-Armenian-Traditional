// SPDX-License-Identifier: GPL-3.0-or-later
/* Julian chronology is owned exclusively by calendar resources. */
#include "julian-day.h"


gint64
calendar_julian_to_jdn(gint64 year,
                            gint month,
                            gint day)
{
    const gint64 a = calendar_floor_divide(14 - month, 12);
    const gint64 y = calendar_i64_subtract_saturating(
        calendar_i64_add_saturating(year, 4800), a);
    const gint64 m = calendar_i64_subtract_saturating(
        calendar_i64_add_saturating(
            month, calendar_i64_multiply_saturating(12, a)),
        3);
    gint64 result = day;

    result = calendar_i64_add_saturating(
        result,
        calendar_floor_divide(
            calendar_i64_add_saturating(
                calendar_i64_multiply_saturating(153, m), 2),
            5));
    result = calendar_i64_add_saturating(
        result, calendar_i64_multiply_saturating(365, y));
    result = calendar_i64_add_saturating(
        result, calendar_floor_divide(y, 4));
    return calendar_i64_subtract_saturating(result, 32083);
}


