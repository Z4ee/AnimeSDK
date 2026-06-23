#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B4410)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOcclusion_TypeDefinitionIndex = 26200;

	class LightOcclusion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 m_PreviewSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSION__CTOR_OFFSET))(this);
		}
	};
}
