#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_PostLightShape.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_TargetType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering::Universal::Internal { class PostLightFxColorCorrection; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_GETLAYERMASKFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1E25DC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_GET_RENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1E25DCB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E25DD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1E25DE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E25DD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_REGISTERPOSTLIGHT_OFFSET UNITYSDK_OFFSET(0x1E25D9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_UNREGISTERPOSTLIGHT_OFFSET UNITYSDK_OFFSET(0x1E25DAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25E360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E25E2D0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostLight_TypeDefinitionIndex = 26842;

	class PostLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::PostLight*>** StaticGet_s_PostLightList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::PostLight*>**)Il2CppClass::FromTypeDefinitionIndex(PostLight_TypeDefinitionIndex)->GetStaticField(0x22FF0);
		}
		::UnityEngine::Mesh* m_Proxy; // 0x18
		::System::Boolean m_UseScreenSpacePSS; // 0x20
		::UnityEngine::Rendering::Universal::Internal::PostLightFxColorCorrection* m_FxColorCorrection; // 0x28
		::UnityEngine::Rendering::Universal::Internal::PostLight_TargetType targetType; // 0x30
		::System::Boolean m_IsCylinderLight; // 0x34
		::System::Single m_CylinderLightRadius; // 0x38
		::System::Single m_CylinderLightHeight; // 0x3C
		::System::Single m_CylinderLightOutterFadeLength; // 0x40
		::System::Single m_CylinderLightInnerFadeLength; // 0x44
		::UnityEngine::Color m_LightColor; // 0x48
		::System::Single m_AttenuationPower; // 0x58
		::System::Boolean m_RevertMode; // 0x5C
		::UnityEngine::Rendering::Universal::Internal::PostLight_PostLightShape m_Shape; // 0x60
		::System::Boolean m_UseBoxAttenuation; // 0x64
		::System::Boolean colorAdjust; // 0x65
		::System::Single m_Saturation; // 0x68
		::System::Single m_Contrast; // 0x6C
		::System::Int32 layerMask; // 0x70
		::UnityEngine::Vector4 gain; // 0x74
		::UnityEngine::Vector4 gamma; // 0x84
		::UnityEngine::Vector4 lift; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterPostLight(::UnityEngine::Rendering::Universal::Internal::PostLight* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::PostLight*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_REGISTERPOSTLIGHT_OFFSET))(light);
		}

		static ::System::Void UnRegisterPostLight(::UnityEngine::Rendering::Universal::Internal::PostLight* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::PostLight*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_UNREGISTERPOSTLIGHT_OFFSET))(light);
		}

		::System::Single GetLayerMaskFloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_GETLAYERMASKFLOATVALUE_OFFSET))(this);
		}

		::System::Int32 get_renderLayerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_GET_RENDERLAYERMASK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTLIGHT_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
