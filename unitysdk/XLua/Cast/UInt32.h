#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_UINT32__CTOR_OFFSET UNITYSDK_OFFSET(0xFE7C280)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt32_TypeDefinitionIndex = 40569;

	class UInt32 : public ::XLua::Cast::Any_1<::System::UInt32>
	{
	public:
		::System::Void _ctor(::System::UInt32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT32__CTOR_OFFSET))(this, i);
		}
	};
}
