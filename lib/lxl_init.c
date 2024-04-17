#define LITE_XL_PLUGIN_ENTRYPOINT
#include <lite_xl_plugin_api.h>

#include <lts/util.h>

int luaopen_lua_tree_sitter(lua_State *L);

LTS_EXPORT int luaopen_lite_xl_tree_sitter(lua_State *L, void *XL) {
	lite_xl_plugin_init(XL);
	return luaopen_lua_tree_sitter(L);
}
