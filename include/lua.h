#ifndef PRAGTICAL
	#include <lite_xl_plugin_api.h>

	#define luaopen_editor_tree_sitter luaopen_lite_xl_tree_sitter
	#define editor_plugin_init lite_xl_plugin_init
#else
	#include <pragtical_plugin_api.h>

	#define luaopen_editor_tree_sitter luaopen_pragtical_tree_sitter
	#define editor_plugin_init pragtical_plugin_init
#endif
