#include <lua.h>

#include <lts/util.h>

int luaopen_lua_tree_sitter(lua_State *L);

LTS_EXPORT int luaopen_editor_tree_sitter(lua_State *L, void *XL) {
	editor_plugin_init(XL);
	return luaopen_lua_tree_sitter(L);
}
