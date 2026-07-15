#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_LUAFUNCTION_CALL_1_OFFSET UNITYSDK_OFFSET(0x10BEAC70)
#define XLUA_LUAFUNCTION_CALL_OFFSET UNITYSDK_OFFSET(0x10BEAED0)
#define XLUA_LUAFUNCTION_PUSH_OFFSET UNITYSDK_OFFSET(0x10BEB590)
#define XLUA_LUAFUNCTION_SETENV_OFFSET UNITYSDK_OFFSET(0x10BEB2A0)
#define XLUA_LUAFUNCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BEB640)
#define XLUA_LUAFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEAEC0)

namespace XLua
{
	inline static constexpr unsigned int LuaFunction_TypeDefinitionIndex = 47958;

	class LuaFunction : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* Call(::Il2CppArray<::System::Object*>* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_CALL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* Call_1(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_CALL_1_OFFSET))(this, a1);
		}

		::System::Void SetEnv(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_SETENV_OFFSET))(this, a1);
		}

		::System::Void push(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_PUSH_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAFUNCTION_TOSTRING_OFFSET))(this);
		}
	};
}
