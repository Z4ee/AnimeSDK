#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_SBYTE__CTOR_OFFSET UNITYSDK_OFFSET(0x110F6560)

namespace XLua::Cast
{
	inline static constexpr unsigned int SByte_TypeDefinitionIndex = 46477;

	class SByte : public ::XLua::Cast::Any_1<::System::SByte>
	{
	public:
		::System::Void _ctor(::System::SByte i)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + XLUA_CAST_SBYTE__CTOR_OFFSET))(this, i);
		}
	};
}
