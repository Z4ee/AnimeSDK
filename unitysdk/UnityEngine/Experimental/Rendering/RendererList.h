#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET UNITYSDK_OFFSET(0x1CCFED80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x182E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18100)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD00530)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RendererList_TypeDefinitionIndex = 34775;

	struct alignas(8) RendererList
	{
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_s_EmptyName()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(RendererList_TypeDefinitionIndex)->GetStaticField(0x138D0);
		}
		static ::UnityEngine::Experimental::Rendering::RendererList* StaticGet_nullRendererList()
		{
			return (::UnityEngine::Experimental::Rendering::RendererList*)Il2CppClass::FromTypeDefinitionIndex(RendererList_TypeDefinitionIndex)->GetStaticField(0x138D8);
		}
		::System::Boolean _isValid_k__BackingField; // 0x10
		::UnityEngine::Rendering::CullingResults cullingResult; // 0x18
		::UnityEngine::Rendering::DrawingSettings drawSettings; // 0x28
		::UnityEngine::Rendering::FilteringSettings filteringSettings; // 0x1A4
		::System::Nullable_1<::UnityEngine::Rendering::RenderStateBlock> stateBlock; // 0x1CC

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST__CCTOR_OFFSET))();
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_isValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_SET_ISVALID_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Experimental::Rendering::RendererList Create(::UnityEngine::Experimental::Rendering::RendererListDesc& a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RendererList(*)(::UnityEngine::Experimental::Rendering::RendererListDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERERLIST_CREATE_OFFSET))(a1);
		}
		*/
	};
}
