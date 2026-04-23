#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define XLUA_LUAEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11235320)

namespace XLua
{
	inline static constexpr unsigned int LuaException_TypeDefinitionIndex = 46401;

	class LuaException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
