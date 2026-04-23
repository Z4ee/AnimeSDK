#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x1A474D00)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDLAYER_OFFSET UNITYSDK_OFFSET(0x1A474CE0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ALLOCCONDITION_OFFSET UNITYSDK_OFFSET(0x1A474CF0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A474CC0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ENABLELAYER_OFFSET UNITYSDK_OFFSET(0x1A474D20)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_INITINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A474D10)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474CD0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphLayerTemplate_TypeDefinitionIndex = 4609;

	class BAGraphLayerTemplate : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Create_Internal(::UnityEngine::Rendering::BAGraphLayerTemplate* mono)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphLayerTemplate*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_CREATE_INTERNAL_OFFSET))(mono);
		}

		::System::Void AddLayer(::UnityEngine::Rendering::BAGraphAsset* asset, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAGraphAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDLAYER_OFFSET))(this, asset, layer);
		}

		::System::Void AllocCondition(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ALLOCCONDITION_OFFSET))(this, count);
		}

		::System::Boolean AddCondition(::System::String* name, ::System::Int32 layer, ::UnityEngine::Rendering::BAParamRef& param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::Rendering::BAParamRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDCONDITION_OFFSET))(this, name, layer, param);
		}

		::System::Void InitInstance(::UnityEngine::Rendering::BatchAnimation* ba, ::System::UInt32 graphLayerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_INITINSTANCE_OFFSET))(this, ba, graphLayerMask);
		}

		::System::Void EnableLayer(::UnityEngine::Rendering::BatchAnimation* ba, ::System::Int32 layer, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ENABLELAYER_OFFSET))(this, ba, layer, enable);
		}
	};
}
