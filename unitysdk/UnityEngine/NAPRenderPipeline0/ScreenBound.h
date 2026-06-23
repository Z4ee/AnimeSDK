#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C141970)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C141B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C141B60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenBound_TypeDefinitionIndex = 26990;

	class ScreenBound : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_AnyScreenBoundChanged()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenBound_TypeDefinitionIndex)->GetStaticField(0x7410);
		}
		::UnityEngine::Bounds bounds; // 0x18
		::UnityEngine::Vector2 screenOffset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENBOUND_ONVALIDATE_OFFSET))(this);
		}
	};
}
