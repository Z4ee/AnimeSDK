#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A338580)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentDeprecated_TypeDefinitionIndex = 33527;

	class VolumeComponentDeprecated : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTDEPRECATED__CTOR_OFFSET))(this);
		}
	};
}
