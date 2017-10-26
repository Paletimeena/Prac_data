#!/bin/bash
eval ls ex*.sh
for file in $(ls ex*.sh); do
 lpr $file
done
exit 0
