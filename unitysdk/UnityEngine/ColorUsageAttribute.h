#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC8640)
#define UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC8620)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUsageAttribute_TypeDefinitionIndex = 4243;

	class ColorUsageAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Boolean hdr; // 0x10
		::System::Boolean showAlpha; // 0x11
		::System::Single maxExposureValue; // 0x14
		::System::Single minBrightness; // 0x18
		::System::Single minExposureValue; // 0x1C
		::System::Single maxBrightness; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
