#
# Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
#
# SPDX-License-Identifier: BSD-2-Clause
#

cmake_minimum_required(VERSION 3.13.0)

project(sel4commonrootserver C)

find_package(sel4runtime REQUIRED)

# External project imports
sel4_import_libsel4()

# Declare files for root server application
add_executable(
	sel4commonrootserver
	EXCLUDE_FROM_ALL
	src/main.c
)
target_link_libraries(
	sel4commonrootserver
	sel4
	sel4_autoconf
	sel4runtime
)

# Mark as root server
include(rootserver)
DeclareRootserver(sel4commonrootserver)
