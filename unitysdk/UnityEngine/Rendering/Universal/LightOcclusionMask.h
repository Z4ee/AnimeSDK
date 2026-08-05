#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_BINDLIGHT_OFFSET UNITYSDK_OFFSET(0x1BC65020)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_UPDATEMATRIXWITHHLAFLAMBERTPOW_OFFSET UNITYSDK_OFFSET(0x1BC65C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_UPDATEMATRIXWITHLIGHTOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1BC65070)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC65E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC65E00)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOcclusionMask_TypeDefinitionIndex = 27404;

	class LightOcclusionMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_TargetOccluder()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(LightOcclusionMask_TypeDefinitionIndex)->GetStaticField(0x217F0);
		}
		::UnityEngine::Vector3 m_PreviewSize; // 0x18
		::UnityEngine::Light* light; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK__CCTOR_OFFSET))();
		}

		::System::Void BindLight(::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_BINDLIGHT_OFFSET))(this, light);
		}

		static ::UnityEngine::Matrix4x4 UpdateMatrixWithLightOcclusion(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::LightOcclusionMask*>* masks, ::UnityEngine::Light* light, ::System::Single lightOccluderMaskAttenuation, ::System::Single halfLambertPow)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::LightOcclusionMask*>*, ::UnityEngine::Light*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_UPDATEMATRIXWITHLIGHTOCCLUSION_OFFSET))(masks, light, lightOccluderMaskAttenuation, halfLambertPow);
		}

		static ::UnityEngine::Matrix4x4 UpdateMatrixWithHlafLambertPow(::System::Single halfLambertPow)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTOCCLUSIONMASK_UPDATEMATRIXWITHHLAFLAMBERTPOW_OFFSET))(halfLambertPow);
		}
	};
}
