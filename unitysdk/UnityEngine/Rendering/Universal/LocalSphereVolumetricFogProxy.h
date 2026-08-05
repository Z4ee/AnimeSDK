#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E79E7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_REFRESHMPB_OFFSET UNITYSDK_OFFSET(0x1E79E830)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_START_OFFSET UNITYSDK_OFFSET(0x1E79EB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79EC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79EBB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LocalSphereVolumetricFogProxy_TypeDefinitionIndex = 27160;

	class LocalSphereVolumetricFogProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__FogScatterColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalSphereVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x6040);
		}
		static ::System::Int32* StaticGet__LocalSphereFogParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalSphereVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x6044);
		}
		static ::System::Int32* StaticGet__LocalSphereFogFadeRanges()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalSphereVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x6048);
		}
		static ::System::Int32* StaticGet__LocalSphereFogFadeFlags()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalSphereVolumetricFogProxy_TypeDefinitionIndex)->GetStaticField(0x604C);
		}
		::UnityEngine::Color fogScatterColor; // 0x18
		::System::Single fadePow; // 0x28
		::System::Single fadePow2; // 0x2C
		::System::Single density; // 0x30
		::System::Single scatterAmt; // 0x34
		::System::Boolean enableFadeOut; // 0x38
		::UnityEngine::Vector2 fadeOutStartEnd; // 0x3C
		::System::Boolean enableFadeIn; // 0x44
		::UnityEngine::Vector2 fadeInStartEnd; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_START_OFFSET))(this);
		}

		::System::Void RefreshMpb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOCALSPHEREVOLUMETRICFOGPROXY_REFRESHMPB_OFFSET))(this);
		}
	};
}
