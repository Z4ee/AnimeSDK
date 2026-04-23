#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/ReloadAttribute_Package.h"
#include "unitysdk/UnityEngine/Rendering/StripPlatform.h"
#include "unitysdk/UnityEngine/Rendering/StripTarget.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A326790)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3267A0)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A326780)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadAttribute_TypeDefinitionIndex = 33518;

	class ReloadAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::String*>* paths, ::UnityEngine::Rendering::StripPlatform stripPlatform, ::UnityEngine::Rendering::StripTarget stripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::StripPlatform, ::UnityEngine::Rendering::StripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET))(this, paths, stripPlatform, stripTarget, package);
		}

		::System::Void _ctor_1(::System::String* path, ::UnityEngine::Rendering::StripPlatform stripPlatform, ::UnityEngine::Rendering::StripTarget stripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::StripPlatform, ::UnityEngine::Rendering::StripTarget, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET))(this, path, stripPlatform, stripTarget, package);
		}

		::System::Void _ctor_2(::System::String* pathFormat, ::System::Int32 rangeMin, ::System::Int32 rangeMax, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET))(this, pathFormat, rangeMin, rangeMax, package);
		}
	};
}
