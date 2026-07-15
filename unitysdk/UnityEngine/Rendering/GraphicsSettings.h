#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinShaderDefine.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"

namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET UNITYSDK_OFFSET(0x1BFA81E0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET UNITYSDK_OFFSET(0x1BFA84C0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA8210)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA82D0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA8200)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA8430)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x1BFA8270)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0x1BFA81D0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0x1BFA81F0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA83B0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET UNITYSDK_OFFSET(0x1BFA84D0)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1BFA8440)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x1BFA8330)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 4716;

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

		static ::System::Boolean HasShaderDefine(::UnityEngine::Rendering::GraphicsTier a1, ::UnityEngine::Rendering::BuiltinShaderDefine a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsTier, ::UnityEngine::Rendering::BuiltinShaderDefine))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET))(a1, a2);
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

		static ::System::Void set_renderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET))(a1);
		}

		static ::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline()
		{
			return ((::UnityEngine::ScriptableObject*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET))(a1);
		}

		static ::System::Boolean get_CPPEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CPPENABLE_OFFSET))();
		}

		static ::System::Void set_enableLocalLightShadowBaking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_ENABLELOCALLIGHTSHADOWBAKING_OFFSET))(a1);
		}
	};
}
