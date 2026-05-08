#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Rendering/ReloadAttribute_Package.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191F7F80)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x191F7FE0)
#define UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x191F7F70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadAttribute_TypeDefinitionIndex = 9599;

	class ReloadAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::String*>* paths, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_OFFSET))(this, paths, package);
		}

		::System::Void _ctor_1(::System::String* path, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_1_OFFSET))(this, path, package);
		}

		::System::Void _ctor_2(::System::String* pathFormat, ::System::Int32 rangeMin, ::System::Int32 rangeMax, ::UnityEngine::Rendering::ReloadAttribute_Package package)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::ReloadAttribute_Package))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADATTRIBUTE__CTOR_2_OFFSET))(this, pathFormat, rangeMin, rangeMax, package);
		}
	};
}
