#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua::LuaDLL { class lua_CSFunction; }

namespace XLua
{
	inline static constexpr unsigned int LuaEnv___O_TypeDefinitionIndex = 50539;

	class LuaEnv___O : public ::System::Object
	{
	public:
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__0___Panic()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B30);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__2___LoadBuiltinLib()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B38);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__7___MetaFuncIndex()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B40);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__3___LoadFromCustomLoaders()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B48);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__6___LoadCS()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B50);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__1___Print()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B58);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__5___LoadFromStreamingAssetsPath()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B60);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet__4___LoadFromResource()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(LuaEnv___O_TypeDefinitionIndex)->GetStaticField(0x65B68);
		}
	};
}
