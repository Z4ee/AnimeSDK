#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_CHAR__CTOR_OFFSET UNITYSDK_OFFSET(0x14A34B60)

namespace XLua::Cast
{
	inline static constexpr unsigned int Char_TypeDefinitionIndex = 50625;

	class Char : public ::XLua::Cast::Any_1<::System::Char>
	{
	public:
		::System::Void _ctor(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_CAST_CHAR__CTOR_OFFSET))(this, a1);
		}
	};
}
