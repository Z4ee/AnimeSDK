#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_UINT64__CTOR_OFFSET UNITYSDK_OFFSET(0xE82CEC0)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt64_TypeDefinitionIndex = 50631;

	class UInt64 : public ::XLua::Cast::Any_1<::System::UInt64>
	{
	public:
		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT64__CTOR_OFFSET))(this, a1);
		}
	};
}
