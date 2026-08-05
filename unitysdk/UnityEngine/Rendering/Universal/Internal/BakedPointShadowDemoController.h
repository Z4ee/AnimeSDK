#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class BakedPointShadowAtlas; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E791820)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E791B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E791920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E792AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E792BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E792B40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowDemoController_TypeDefinitionIndex = 27796;

	class BakedPointShadowDemoController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_FaceVpIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x22B10);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_BakedSliceForFaceIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x22B18);
		}
		static ::System::Int32* StaticGet_DemoLightColorId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CC0);
		}
		static ::System::Int32* StaticGet_DemoLightPosId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CC4);
		}
		static ::System::Int32* StaticGet_BakedAtlasId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CC8);
		}
		static ::System::Int32* StaticGet_FlipProjYId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CCC);
		}
		static ::System::Int32* StaticGet_ShadowBiasId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CD0);
		}
		static ::System::Int32* StaticGet_DemoLightRangeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowDemoController_TypeDefinitionIndex)->GetStaticField(0x5CD4);
		}
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowAtlas* atlas; // 0x18
		::UnityEngine::Light* testLight; // 0x20
		::System::Single shadowBias; // 0x28
		::System::Boolean flipProjectionY; // 0x2C
		::UnityEngine::Renderer* _renderer; // 0x30
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWDEMOCONTROLLER_ONVALIDATE_OFFSET))(this);
		}
	};
}
