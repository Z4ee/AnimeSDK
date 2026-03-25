#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_INT16__CTOR_OFFSET UNITYSDK_OFFSET(0xFE7C1E0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Int16_TypeDefinitionIndex = 40566;

	class Int16 : public ::XLua::Cast::Any_1<::System::Int16>
	{
	public:
		::System::Void _ctor(::System::Int16 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_CAST_INT16__CTOR_OFFSET))(this, i);
		}
	};
}
