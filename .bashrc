#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

#alias ls='ls --color=auto'
#alias grep='grep --color=auto'
PS1='$ '


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
function start() {

        if [ "$#" -eq 0 ];then 
                explorer.exe .;
        else
                explorer.exe "$@";
        fi;
}
export -f start
export -f nv
export -f py
function cls() {
         clear;
}
export -f cls
function bbbbb1() {
         jp2a ~/.config/neofetch/ww3.jpg;
}
function bbbbb2() {
         jp2a ~/.config/neofetch/ww31.jpg;
}
export -f bbbbb1
export -f bbbbb2

# neofetch
. "$HOME/.cargo/env"
