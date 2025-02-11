return {
	-- Mason setup
	{
		"williamboman/mason.nvim",
		config = function()
			require("mason").setup()
		end,
	},

	-- Mason LSPConfig setup
	{
		"williamboman/mason-lspconfig.nvim",
		config = function()
			require("mason-lspconfig").setup({
				ensure_installed = { "lua_ls", "clangd", "pylsp"}, -- Ensure these LSPs are installed
			})
		end,
	},

	-- nvim-lspconfig setup
	{
		"neovim/nvim-lspconfig",
		config = function()
			local capabilities = require("cmp_nvim_lsp").default_capabilities() -- Autocomplete support
			local lspconfig = require("lspconfig")

			-- Setup lua_ls (Lua Language Server)
			lspconfig.lua_ls.setup({
				capabilities = capabilities,
				settings = {
					Lua = {
						runtime = {
							version = "LuaJIT", -- Neovim runtime Lua version
						},
						diagnostics = {
							globals = { "vim" }, -- Recognize `vim` as a global
						},
						workspace = {
							library = vim.api.nvim_get_runtime_file("", true), -- Include Neovim runtime files
						},
						telemetry = {
							enable = false, -- Disable telemetry for privacy
						},
					},
				},
			})

			-- Setup clangd (C/C++ Language Server)
			lspconfig.clangd.setup({
        capabilities = capabilities,
        cmd = { "clangd", "--background-index" },
        filetypes = { "cpp", "c", "objc", "objcpp" },
			})

			-- Setup pylsp (Python Language Server)
			lspconfig.pylsp.setup({
				capabilities = capabilities,
          settings = {
            pylsp = {
                plugins = {
                  pycodestyle = {
                    enabled = true, -- Keep it enabled but ignore specific warnings
                    ignore = { "E501", "W291", "W293" }, -- Example: ignore line length (E501), trailing whitespace (W291/W293)
                  },
                },
              },
            },

			})

			-- Setup keybindings for LSP
			local opts = { noremap = true, silent = true }
			vim.keymap.set("n", "gD", vim.lsp.buf.declaration, opts) -- Go to declaration
			vim.keymap.set("n", "gd", vim.lsp.buf.definition, opts) -- Go to definition
			vim.keymap.set("n", "K", vim.lsp.buf.hover, opts) -- Hover
			vim.keymap.set("n", "gi", vim.lsp.buf.implementation, opts) -- Go to implementation
			vim.keymap.set("n", "<C-k>", vim.lsp.buf.signature_help, opts) -- Signature help
			vim.keymap.set("n", "<leader>rn", vim.lsp.buf.rename, opts) -- Rename
			vim.keymap.set("n", "<leader>ca", vim.lsp.buf.code_action, opts) -- Code action
			vim.keymap.set("n", "gr", vim.lsp.buf.references, opts) -- Go to references
			vim.keymap.set("n", "<leader>f", function()
				vim.lsp.buf.format({ async = true }) -- Format buffer
			end, opts)
		end,
	},
}

