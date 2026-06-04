#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_DONOTGENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18932CA0)

namespace XLua
{
	inline static constexpr unsigned int DoNotGenAttribute_TypeDefinitionIndex = 5609;

	class DoNotGenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DONOTGENATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
