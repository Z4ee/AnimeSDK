#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CB173F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_REFRESHMPB_OFFSET UNITYSDK_OFFSET(0x1CB17440)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_START_OFFSET UNITYSDK_OFFSET(0x1CB176D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB17790)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB17720)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LocalBoxVolumetricFogProxy_TypeDefinitionIndex = 27279;

	class LocalBoxVolumetricFogProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__CustomMaskZ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalBoxVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x7190);
		}
		static ::System::Int32* StaticGet__CustomMaskA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalBoxVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x7194);
		}
		static ::System::Int32* StaticGet__LocalSphereFogParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalBoxVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x7198);
		}
		static ::System::Int32* StaticGet__FogScatterColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalBoxVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x719C);
		}
		::UnityEngine::Color fogScatterColor; // 0x18
		::System::Single fadePow; // 0x28
		::System::Single fadePow2; // 0x2C
		::System::Single density; // 0x30
		::System::Single scatterAmt; // 0x34
		::UnityEngine::Vector2 boxMaskAX; // 0x38
		::UnityEngine::Vector2 boxMaskAY; // 0x40
		::System::Single boxMaskZ; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_START_OFFSET))(this);
		}

		::System::Void RefreshMpb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALBOXVOLUMETRICFOGPROXY_REFRESHMPB_OFFSET))(this);
		}
	};
}
