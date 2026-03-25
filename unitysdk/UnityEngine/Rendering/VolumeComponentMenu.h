#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x188FE8B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentMenu_TypeDefinitionIndex = 27902;

	class VolumeComponentMenu : public ::System::Attribute
	{
	public:
		::System::String* menu; // 0x10

		::System::Void _ctor(::System::String* menu)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU__CTOR_OFFSET))(this, menu);
		}
	};
}
