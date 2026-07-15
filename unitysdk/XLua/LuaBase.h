#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }

#define XLUA_LUABASE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x10BDFCD0)
#define XLUA_LUABASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BDFBF0)
#define XLUA_LUABASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x10BDFFC0)
#define XLUA_LUABASE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x10BDFB20)
#define XLUA_LUABASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10BE05B0)
#define XLUA_LUABASE_PUSH_OFFSET UNITYSDK_OFFSET(0x10BE0940)
#define XLUA_LUABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BDFB10)

namespace XLua
{
	inline static constexpr unsigned int LuaBase_TypeDefinitionIndex = 47951;

	class LuaBase : public ::System::Object
	{
	public:
		::XLua::LuaEnv* luaEnv; // 0x10
		::System::Boolean disposed; // 0x18
		::System::Int32 luaReference; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUABASE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_LUABASE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_LUABASE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUABASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void push(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_LUABASE_PUSH_OFFSET))(this, a1);
		}
	};
}
