#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_CHAR__CTOR_OFFSET UNITYSDK_OFFSET(0xFE7C1A0)

namespace XLua::Cast
{
	inline static constexpr unsigned int Char_TypeDefinitionIndex = 40565;

	class Char : public ::XLua::Cast::Any_1<::System::Char>
	{
	public:
		::System::Void _ctor(::System::Char i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_CAST_CHAR__CTOR_OFFSET))(this, i);
		}
	};
}
