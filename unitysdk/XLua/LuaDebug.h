#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define XLUA_LUADEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1185F720)

namespace XLua
{
	inline static constexpr unsigned int LuaDebug_TypeDefinitionIndex = 50582;

	class LuaDebug : public ::System::Object
	{
	public:
		::System::Int32 Event; // 0x10
		::System::Int32 i_ci; // 0x14
		::System::String* name; // 0x18
		::System::String* what; // 0x20
		::System::String* source; // 0x28
		::System::String* short_src; // 0x30
		::System::Int32 linedefined; // 0x38
		::System::Int32 currentline; // 0x3C
		::System::Char nups; // 0x40
		::System::Char nparams; // 0x42
		::System::Char isvararg; // 0x44
		::System::IntPtr userdata; // 0x48
		::Il2CppArray<::System::Byte>* ssbuf; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUADEBUG__CTOR_OFFSET))(this);
		}
	};
}
