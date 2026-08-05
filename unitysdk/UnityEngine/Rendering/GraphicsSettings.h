#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinShaderDefine.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsTier.h"

namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_ALLOWENLIGHTENSUPPORTFORUPGRADEDPROJECT_OFFSET UNITYSDK_OFFSET(0x1EA75A60)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75A90)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75B90)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_CURRENTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75A80)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75C30)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_LIGHTSUSELINEARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1EA75A10)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x1EA75B10)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0x1EA75A40)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_HASSHADERDEFINE_OFFSET UNITYSDK_OFFSET(0x1EA75A70)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75C20)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_INTERNAL_DEFAULTRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1EA75C40)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1EA75A30)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSELINEARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1EA75A20)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_RENDERPIPELINEASSET_OFFSET UNITYSDK_OFFSET(0x1EA75C10)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET UNITYSDK_OFFSET(0x1EA75A50)
#define UNITYENGINE_RENDERING_GRAPHICSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA759C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsSettings_TypeDefinitionIndex = 6206;

	class GraphicsSettings : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_lightsUseLinearIntensity()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_LIGHTSUSELINEARINTENSITY_OFFSET))();
		}

		static ::System::Void set_lightsUseLinearIntensity(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSELINEARINTENSITY_OFFSET))(value);
		}

		static ::System::Void set_lightsUseColorTemperature(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_LIGHTSUSECOLORTEMPERATURE_OFFSET))(value);
		}

		static ::System::Boolean get_useScriptableRenderPipelineBatching()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_GET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET))();
		}

		static ::System::Void set_useScriptableRenderPipelineBatching(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GRAPHICSSETTINGS_SET_USESCRIPTABLERENDERPIPELINEBATCHING_OFFSET))(value);
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
	};
}
