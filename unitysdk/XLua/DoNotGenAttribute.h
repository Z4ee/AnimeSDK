#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_DONOTGENATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F7C0)

namespace XLua
{
	inline static constexpr unsigned int DoNotGenAttribute_TypeDefinitionIndex = 8629;

	class DoNotGenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DONOTGENATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
