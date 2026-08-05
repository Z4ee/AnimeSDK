#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMCOMBINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D606210)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OpaquePostProcessSecond_BloomCombineData_TypeDefinitionIndex = 27278;

	class OpaquePostProcessSecond_BloomCombineData : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 _BloomThreshold; // 0x10
		::UnityEngine::Vector4 _BloomBicubicParams; // 0x20
		::UnityEngine::Vector4 _BloomParams; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMCOMBINEDATA__CTOR_OFFSET))(this);
		}
	};
}
