/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "unity.h"
#include "unity_test_runner.h"
#include "unity_fixture.h"

static void run_all_tests(void)
{
    RUN_TEST_GROUP(unit_test_controller);
}

void app_main(void)
{
    UNITY_MAIN_FUNC(run_all_tests);
}
