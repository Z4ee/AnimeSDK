#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_FLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x14A34B80)

namespace XLua::Cast
{
	inline static constexpr unsigned int Float_TypeDefinitionIndex = 50632;

	class Float : public ::XLua::Cast::Any_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CAST_FLOAT__CTOR_OFFSET))(this, a1);
		}
	};
}
