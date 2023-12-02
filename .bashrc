#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

#alias ls='ls --color=auto'
#alias grep='grep --color=auto'
PS1='$ '


#alias nv='nvim'
#alias nv='if [ $# -eq 0 ]; then nvim .; else nvim "$@"; fi'

#source ~/nv.sh
#function nv() {
#        if [ "$#" -eq 0 ]; then
#                nvim .;
#        else
#                nvim "$@";
#        fi;
#        }
#nv()
function ll() {
        exit 1;
}
export -f ll
function nv() {

        if [ "$#" -eq 0 ];then 
                nvim .;
        else
                nvim "$@";
        fi;
}
function py() {

        if [ "$#" -eq 0 ];then 
                python3 main.py;
        else
                python3 "$@";
        fi;
}
export -f nv
export -f py
# alias py='python3'
