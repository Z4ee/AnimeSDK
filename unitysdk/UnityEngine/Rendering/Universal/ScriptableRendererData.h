#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class RenderPipelineVersionConfig; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererFeature; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_GET_ISINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1B0BC0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_GET_RENDERERFEATURES_OFFSET UNITYSDK_OFFSET(0x1B0BC0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_INTERNALCREATERENDERER_OFFSET UNITYSDK_OFFSET(0x1B0BC140)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B0BC240)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B0BC1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1B0BC100)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_SET_ISINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1B0BC0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BC2A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRendererData_TypeDefinitionIndex = 26464;

	class ScriptableRendererData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _isInvalidated_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>* m_RendererFeatures; // 0x20
		::System::Collections::Generic::List_1<::System::Int64>* m_RendererFeatureMap; // 0x28
		::UnityEngine::Rendering::RenderPipelineVersionConfig* m_RenderPipelineVersionConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInvalidated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_GET_ISINVALIDATED_OFFSET))(this);
		}

		::System::Void set_isInvalidated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_SET_ISINVALIDATED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>* get_rendererFeatures()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_GET_RENDERERFEATURES_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_SETDIRTY_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer* InternalCreateRenderer()
		{
			return ((::UnityEngine::Rendering::Universal::ScriptableRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_INTERNALCREATERENDERER_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERERDATA_ONENABLE_OFFSET))(this);
		}
	};
}
