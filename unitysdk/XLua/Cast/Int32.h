#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_INT32__CTOR_OFFSET UNITYSDK_OFFSET(0xE82CE20)

namespace XLua::Cast
{
	inline static constexpr unsigned int Int32_TypeDefinitionIndex = 50628;

	class Int32 : public ::XLua::Cast::Any_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_CAST_INT32__CTOR_OFFSET))(this, a1);
		}
	};
}
