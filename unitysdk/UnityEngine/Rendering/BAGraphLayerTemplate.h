#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDCONDITION_OFFSET UNITYSDK_OFFSET(0x1CDFF0C0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDLAYER_OFFSET UNITYSDK_OFFSET(0x1CDFF0A0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ALLOCCONDITION_OFFSET UNITYSDK_OFFSET(0x1CDFF0B0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_CREATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1CDFF080)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ENABLELAYER_OFFSET UNITYSDK_OFFSET(0x1CDFF0E0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_INITINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CDFF0D0)
#define UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF090)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BAGraphLayerTemplate_TypeDefinitionIndex = 4788;

	class BAGraphLayerTemplate : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Create_Internal(::UnityEngine::Rendering::BAGraphLayerTemplate* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::BAGraphLayerTemplate*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_CREATE_INTERNAL_OFFSET))(a1);
		}

		::System::Void AddLayer(::UnityEngine::Rendering::BAGraphAsset* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAGraphAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void AllocCondition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ALLOCCONDITION_OFFSET))(this, a1);
		}

		::System::Boolean AddCondition(::System::String* a1, ::System::Int32 a2, ::UnityEngine::Rendering::BAParamRef& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::Rendering::BAParamRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ADDCONDITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitInstance(::UnityEngine::Rendering::BatchAnimation* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_INITINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void EnableLayer(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BAGRAPHLAYERTEMPLATE_ENABLELAYER_OFFSET))(this, a1, a2, a3);
		}
	};
}
