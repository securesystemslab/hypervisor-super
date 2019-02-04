#!/bin/bash -e

# Make sure public and private keys were provided
if (( $# != 2 )); then
    echo "Usage: ./run.sh <PATH_TO_PRIVATE_KEY_FILE> <PATH_TO_PUBLIC_KEY_FILE>"
    exit
fi

# Copy private and public SSH keys to current directory because Docker
# does not support absolute host paths
cp $1 .
cp $2 .

# Save file names to variables
PRIVATE_KEY="$(basename $1)"
PUBLIC_KEY="$(basename $2)"

# Build docker container
docker build -t bfbuild --build-arg ssh_priv=${PRIVATE_KEY} --build-arg ssh_pub=${PUBLIC_KEY} .

# Remove keys that were copied into current directory
rm -f ${PUBLIC_KEY} ${PRIVATE_KEY}
