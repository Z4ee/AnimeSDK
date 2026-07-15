#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1791D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExtensionOfNativeClassAttribute_TypeDefinitionIndex = 4313;

	class ExtensionOfNativeClassAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXTENSIONOFNATIVECLASSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
