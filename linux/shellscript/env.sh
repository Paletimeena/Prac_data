echo home $HOME
echo path $PATH
echo ps1 $PS1
echo ps2 $PS2
echo file name $0
echo arugments count $#
echo pid $$
echo list of parameters $*
echo @ $@
IFS=*
set fdoo bar bam
echo "$@"
echo "$*"
unset IFS
echo "$@"
echo "$*"

