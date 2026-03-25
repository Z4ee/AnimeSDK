#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinShaderDefine.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"

namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET UNITYSDK_OFFSET(0x18A455D0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET UNITYSDK_OFFSET(0x18A45880)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A45600)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A456A0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A455F0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A457F0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x18A45650)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0x18A455C0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0x18A455E0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A45770)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET UNITYSDK_OFFSET(0x18A45890)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18A45800)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x18A456F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 4535;

	class GraphicsSettings : public ::UnityEngine::Object
	{
	public:
		static ::System::Boolean get_useScriptableRenderPipelineBatching()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET))();
		}

		static ::System::Boolean AllowEnlightenSupportForUpgradedProject()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET))();
		}

		static ::System::Boolean HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsTier, ::UnityEngine::Rendering::BuiltinShaderDefine))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET))(tier, defineHash);
		}

		static ::UnityEngine::ScriptableObject* get_INTERNAL_currentRenderPipeline()
		{
			return ((::UnityEngine::ScriptableObject*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_currentRenderPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET))();
		}

		static ::System::Void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET))(value);
		}

		static ::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline()
		{
			return ((::UnityEngine::ScriptableObject*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))(value);
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET))(value);
		}

		static ::System::Boolean get_CPPEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET))();
		}

		static ::System::Void set_enableLocalLightShadowBaking(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET))(value);
		}
	};
}
