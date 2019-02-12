#!/bin/bash -e
diff <(objdump -d "$1") <(objdump -d "$2")