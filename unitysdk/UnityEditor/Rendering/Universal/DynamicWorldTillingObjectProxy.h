#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEditor::Rendering::Universal { class DynamicWorldTillingObjectProxy_RenderData; }

#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1AECBCD0)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AECC270)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AECC210)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RESETTRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x1AECC0C0)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_SETTRANSFORMMATRIX_OFFSET UNITYSDK_OFFSET(0x1AECBF70)
#define UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AECC2C0)

namespace UnityEditor::Rendering::Universal
{
	inline static constexpr unsigned int DynamicWorldTillingObjectProxy_TypeDefinitionIndex = 26368;

	class DynamicWorldTillingObjectProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEditor::Rendering::Universal::DynamicWorldTillingObjectProxy_RenderData*>* renderDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_INIT_OFFSET))(this);
		}

		::System::Void SetTransformMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_SETTRANSFORMMATRIX_OFFSET))(this);
		}

		::System::Void ResetTransformMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_RESETTRANSFORMMATRIX_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYEDITOR_RENDERING_UNIVERSAL_DYNAMICWORLDTILLINGOBJECTPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
