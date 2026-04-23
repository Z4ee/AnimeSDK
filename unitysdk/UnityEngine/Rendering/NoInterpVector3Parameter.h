#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A322250)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector3Parameter_TypeDefinitionIndex = 33559;

	class NoInterpVector3Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR3PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
