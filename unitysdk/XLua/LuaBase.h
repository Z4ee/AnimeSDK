#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }

#define XLUA_LUABASE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0xFF60490)
#define XLUA_LUABASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF60440)
#define XLUA_LUABASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFF60570)
#define XLUA_LUABASE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xFF603D0)
#define XLUA_LUABASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFF60920)
#define XLUA_LUABASE_PUSH_OFFSET UNITYSDK_OFFSET(0xFF60BA0)
#define XLUA_LUABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF451B0)

namespace XLua
{
	inline static constexpr unsigned int LuaBase_TypeDefinitionIndex = 40482;

	class LuaBase : public ::System::Object
	{
	public:
		::XLua::LuaEnv* luaEnv; // 0x10
		::System::Int32 luaReference; // 0x18
		::System::Boolean disposed; // 0x1C

		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUABASE__CTOR_OFFSET))(this, reference, luaenv);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposeManagedResources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUABASE_DISPOSE_1_OFFSET))(this, disposeManagedResources);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUABASE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void push(::System::IntPtr L)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUABASE_PUSH_OFFSET))(this, L);
		}
	};
}
