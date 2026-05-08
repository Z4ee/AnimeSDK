#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/RenderQueueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_FILTERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EAC30)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjects_FilterSettings_TypeDefinitionIndex = 29733;

	class RenderObjects_FilterSettings : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType RenderQueueType; // 0x10
		::UnityEngine::LayerMask LayerMask; // 0x14
		::Il2CppArray<::System::String*>* PassNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_FILTERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
