//
#pragma once

//
#include "types.h"

//
f64 reduc_base(f64 *restrict a, u64 n);
f64 reduc_unroll8(f64 *restrict a, u64 n);

