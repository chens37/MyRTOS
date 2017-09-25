#!/bin/bash

DEV_NAME=sdb
BLOCK_CNT=`cat /sys/block/${DEV_NAME}/size`

if [ ${BLOCK_CNT} -le 0 ]; then
	echo "Error: NO media found in card reader."
	exit 1
fi

if [ ${BLOCK_CNT} -gt 32000000 ]; then
	echo "Error: Block device size (${BLOCK_CNT}) is too large"
	exit 1
fi

let FIRMWARE_POSITON=${BLOCK_CNT}-16-2-1024
set -x
umount /dev/sdb1 2>/dev/null
umount /dev/sdb2 2>/dev/null
umount /dev/sdb3 2>/dev/null
umount /dev/sdb4 2>/dev/null

dd if=../2416.bin of=/dev/${DEV_NAME} bs=512 seek=${FIRMWARE_POSITON}
sync

