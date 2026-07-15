#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_BYTE__CTOR_OFFSET UNITYSDK_OFFSET(0xE2EA840)

namespace XLua::Cast
{
	inline static constexpr unsigned int Byte_TypeDefinitionIndex = 48032;

	class Byte : public ::XLua::Cast::Any_1<::System::Byte>
	{
	public:
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_CAST_BYTE__CTOR_OFFSET))(this, a1);
		}
	};
}
