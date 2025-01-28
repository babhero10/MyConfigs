return {
	-- LSP Source for nvim-cmp
	{
		"hrsh7th/cmp-nvim-lsp",
	},

	-- Main Completion Plugin
	{
		"hrsh7th/nvim-cmp",
		dependencies = {
			"hrsh7th/cmp-path", -- File path completion
		},
		config = function()
			local cmp = require("cmp")

			cmp.setup({
				snippet = {
					expand = function()
					end,
				},
				window = {
					completion = cmp.config.window.bordered(),
					documentation = cmp.config.window.bordered(),
				},
				mapping = cmp.mapping.preset.insert({
					["<C-b>"] = cmp.mapping.scroll_docs(-4),
					["<C-f>"] = cmp.mapping.scroll_docs(4),
					["<C-Space>"] = cmp.mapping.complete(),
					["<C-e>"] = cmp.mapping.abort(),
					["<CR>"] = cmp.mapping.confirm({ select = true }), -- Confirm selected item
					["<Tab>"] = cmp.mapping.select_next_item(), -- Navigate to next item
					["<S-Tab>"] = cmp.mapping.select_prev_item(), -- Navigate to previous item
				}),
				sources = cmp.config.sources({
					{ name = "nvim_lsp" },
					{ name = "path" }, -- File path completion
					{ name = "buffer" }, -- Buffer source
				}),
			})
		end,
	},
	{
		"hrsh7th/cmp-cmdline",
		dependencies = { "hrsh7th/nvim-cmp" },
		config = function()
			local cmp = require("cmp")
			cmp.setup.cmdline("/", {
				mapping = cmp.mapping.preset.cmdline(),
				sources = {
					{ name = "buffer" },
				},
			})
			cmp.setup.cmdline(":", {
				mapping = cmp.mapping.preset.cmdline(),
				sources = cmp.config.sources({
					{ name = "path" },
				}, {
					{ name = "cmdline" },
				}),
			})
		end,
	},
}
