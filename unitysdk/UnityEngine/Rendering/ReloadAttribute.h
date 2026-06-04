#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/ReloadAttribute_Package.h"
#include "unitysdk/UnityEngine/Rendering/StripPlatform.h"
#include "unitysdk/UnityEngine/Rendering/StripTarget.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B180C80)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B180C90)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B180C70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadAttribute_TypeDefinitionIndex = 33800;

	class ReloadAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Rendering::StripPlatform a2, ::UnityEngine::Rendering::StripTarget a3, ::UnityEngine::Rendering::ReloadAttribute_Package a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::StripPlatform, ::UnityEngine::Rendering::StripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Rendering::StripPlatform a2, ::UnityEngine::Rendering::StripTarget a3, ::UnityEngine::Rendering::ReloadAttribute_Package a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::StripPlatform, ::UnityEngine::Rendering::StripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::ReloadAttribute_Package a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
