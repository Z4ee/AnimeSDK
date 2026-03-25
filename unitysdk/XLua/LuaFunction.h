#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_LUAFUNCTION_CALL_1_OFFSET UNITYSDK_OFFSET(0xFF6BC70)
#define XLUA_LUAFUNCTION_CALL_OFFSET UNITYSDK_OFFSET(0xFF6C480)
#define XLUA_LUAFUNCTION_PUSH_OFFSET UNITYSDK_OFFSET(0xFF6CB50)
#define XLUA_LUAFUNCTION_SETENV_OFFSET UNITYSDK_OFFSET(0xFF6C860)
#define XLUA_LUAFUNCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFF6CC00)
#define XLUA_LUAFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6C470)

namespace XLua
{
	inline static constexpr unsigned int LuaFunction_TypeDefinitionIndex = 40489;

	class LuaFunction : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION__CTOR_OFFSET))(this, reference, luaenv);
		}

		::Il2CppArray<::System::Object*>* Call(::Il2CppArray<::System::Object*>* args, ::Il2CppArray<::System::Type*>* returnTypes)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_CALL_OFFSET))(this, args, returnTypes);
		}

		::Il2CppArray<::System::Object*>* Call_1(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_CALL_1_OFFSET))(this, args);
		}

		::System::Void SetEnv(::XLua::LuaTable* env)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_SETENV_OFFSET))(this, env);
		}

		::System::Void push(::System::IntPtr L)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_PUSH_OFFSET))(this, L);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_TOSTRING_OFFSET))(this);
		}
	};
}
