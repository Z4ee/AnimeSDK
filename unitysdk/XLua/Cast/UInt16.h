#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_UINT16__CTOR_OFFSET UNITYSDK_OFFSET(0xE2EA920)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt16_TypeDefinitionIndex = 48036;

	class UInt16 : public ::XLua::Cast::Any_1<::System::UInt16>
	{
	public:
		::System::Void _ctor(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT16__CTOR_OFFSET))(this, a1);
		}
	};
}
