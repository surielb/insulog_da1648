#!/bin/bash
echo Writing partitions to QSPI flash...
"${0%/*}/../../cli_programmer/cli/Debug_static/cli_programmer" $1 write_qspi 0x7F000 "${0%/*}/partition_table.bin"
