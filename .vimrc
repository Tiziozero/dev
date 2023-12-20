set number
set relativenumber
syntax on

set termguicolors " for best results
colorscheme cortado

filetype plugin indent on
set smartindent
autocmd FileType python setlocal shiftwidth=4 tabstop=4
set scrolloff=8
set signcolumn=yes
set isfname+=@-@

nnoremap gp `[v`]
vnoremap J :m '>+1<CR>gv=gv
vnoremap K :m '<-2<CR>gv=gv

