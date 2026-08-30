#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/Cast/Any_1.h"

#define XLUA_CAST_UINT32__CTOR_OFFSET UNITYSDK_OFFSET(0xE82CEA0)

namespace XLua::Cast
{
	inline static constexpr unsigned int UInt32_TypeDefinitionIndex = 50629;

	class UInt32 : public ::XLua::Cast::Any_1<::System::UInt32>
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_CAST_UINT32__CTOR_OFFSET))(this, a1);
		}
	};
}
