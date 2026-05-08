#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class DeferredReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONPROBEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B087A90)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapReflectionProbeData_TypeDefinitionIndex = 30380;

	class NapReflectionProbeData : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::DeferredReflectionProbe* m_deferredReflectionProbe; // 0x10
		::System::Int32 m_Index; // 0x18
		::UnityEngine::CubemapArray* m_CubemapArray; // 0x20
		::UnityEngine::Texture* m_ReflectionProbeBakedTexture; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONPROBEDATA__CTOR_OFFSET))(this);
		}
	};
}
