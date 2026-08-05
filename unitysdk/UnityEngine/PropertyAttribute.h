#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E31E120)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyAttribute_TypeDefinitionIndex = 5312;

	class PropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
