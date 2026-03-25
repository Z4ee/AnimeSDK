#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_REFLECTIONUSEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F860)

namespace XLua
{
	inline static constexpr unsigned int ReflectionUseAttribute_TypeDefinitionIndex = 8628;

	class ReflectionUseAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_REFLECTIONUSEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
