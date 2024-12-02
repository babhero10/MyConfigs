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
				ensure_installed = {"pylsp"}, -- Ensure these LSPs are installed
			})
		end,
	},

	-- nvim-lspconfig setup
	{
		"neovim/nvim-lspconfig",
		config = function()
			local capabilities = require("cmp_nvim_lsp").default_capabilities() -- Autocomplete support
			local lspconfig = require("lspconfig")

			-- Setup pylsp (Python Language Server)
			lspconfig.pylsp.setup({
				capabilities = capabilities,
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

