#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD20EB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpVector4Parameter_TypeDefinitionIndex = 34981;

	class NoInterpVector4Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
