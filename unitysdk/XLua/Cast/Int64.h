#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_INT64__CTOR_OFFSET UNITYSDK_OFFSET(0xE2EA8E0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Int64_TypeDefinitionIndex = 48039;

	class Int64 : public ::XLua::Cast::Any_1<::System::Int64>
	{
	public:
		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_CAST_INT64__CTOR_OFFSET))(this, a1);
		}
	};
}
