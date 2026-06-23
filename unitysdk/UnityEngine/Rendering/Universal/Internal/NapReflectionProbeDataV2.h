#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONPROBEDATAV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0ADF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapReflectionProbeDataV2_TypeDefinitionIndex = 26728;

	class NapReflectionProbeDataV2 : public ::System::Object
	{
	public:
		::UnityEngine::CubemapArray* m_CubemapArray; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::Universal::DeferredReflectionProbe*>* m_deferredReflectionProbe; // 0x18
		::Il2CppArray<::System::Int32>* cubeIndex; // 0x20
		::Il2CppArray<::UnityEngine::Texture*>* m_ReflectionProbeBakedTexture; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONPROBEDATAV2__CTOR_OFFSET))(this);
		}
	};
}
