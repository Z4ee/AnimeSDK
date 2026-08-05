#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHTFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C455830)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostLightFxColorCorrection_TypeDefinitionIndex = 27902;

	class PostLightFxColorCorrection : public ::System::Object
	{
	public:
		::System::Single postExposure; // 0x10
		::System::Single contrast; // 0x14
		::System::Single saturation; // 0x18
		::System::Boolean lutInvert; // 0x1C
		::System::Boolean lutToneColors; // 0x1D
		::UnityEngine::Color lutToneA; // 0x20
		::UnityEngine::Color lutToneB; // 0x30
		::System::Single lutMiddlePoint; // 0x40
		::System::Single lutSoftness; // 0x44
		::System::Single desaturate; // 0x48
		::System::Boolean invert; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHTFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}
	};
}
