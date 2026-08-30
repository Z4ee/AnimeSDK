#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3AB80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponentMenu_TypeDefinitionIndex = 34946;

	class VolumeComponentMenu : public ::System::Attribute
	{
	public:
		::System::String* menu; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENTMENU__CTOR_OFFSET))(this, a1);
		}
	};
}
