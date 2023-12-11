-- This file can be loaded by calling `lua require('plugins')` from your init.vim

-- Only required if you have packer configured as `opt`
vim.cmd [[packadd packer.nvim]]

return require('packer').startup(function(use)
        -- Packer can manage itself
        use 'wbthomason/packer.nvim'

        use {
                'nvim-telescope/telescope.nvim', tag = '0.1.4',
                -- or                            , branch = '0.1.x',
                requires = { {'nvim-lua/plenary.nvim'} }
        }
        -- use( "rebelot/kanagawa.nvim" )
        use({ 'rose-pine/neovim', as = 'rose-pine' })
        use( 'nvim-treesitter/nvim-treesitter', {run = ':TSUpdate'} )
        -- use( 'nvim-treesitter/playground' )
        use( 'ThePrimeagen/harpoon' )
        -- use( 'mbbill/undotree' )
        -- use( 'tpope/vim-fugitive' )
        use {
                'nvim-lualine/lualine.nvim',
                requires = { 'nvim-tree/nvim-web-devicons', opt = true }
        }
        -- to see images
        -- use {'edluffy/hologram.nvim'}
        --[[ use {
                'VonHeikemen/lsp-zero.nvim',
                branch = 'v3.x',
                requires = {
                        --- Uncomment these if you want to manage LSP servers from neovim
                        -- {'williamboman/mason.nvim'},
                        -- {'williamboman/mason-lspconfig.nvim'},

                        -- LSP Support
                        {'neovim/nvim-lspconfig'},
                        -- Autocompletion
                        {'hrsh7th/nvim-cmp'},
                        {'hrsh7th/cmp-nvim-lsp'},
                        {'L3MON4D3/LuaSnip'},
                }
        }]]--
        use{ 'williamboman/mason.nvim',
        'williamboman/mason-lspconfig.nvim',
        'neovim/nvim-lspconfig'}
        use( 'hrsh7th/nvim-cmp' )
        use( 'hrsh7th/cmp-nvim-lsp' )
        use( 'L3MON4D3/LuaSnip' )
        -- use( 'neoclide/coc.nvim', {branch = 'release'} )
        -- coc-nvim requires node.js and other requirements
end)
