#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class ExternalFunctionUtils_EditorDrawLightMapScaleCallback; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_DRAWLIGHTMAPSCALECALLBACK_OFFSET UNITYSDK_OFFSET(0x1EB5F8C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ExternalFunctionUtils_TypeDefinitionIndex = 6042;

	class ExternalFunctionUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ExternalFunctionUtils_EditorDrawLightMapScaleCallback** StaticGet_g_EditorDrawLightMapScale()
		{
			return (::UnityEngine::NAPRenderPipeline0::ExternalFunctionUtils_EditorDrawLightMapScaleCallback**)Il2CppClass::FromTypeDefinitionIndex(ExternalFunctionUtils_TypeDefinitionIndex)->GetStaticField(0x4F90);
		}

		static ::System::Void DrawLightMapScaleCallback(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext& context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_EXTERNALFUNCTIONUTILS_DRAWLIGHTMAPSCALECALLBACK_OFFSET))(cmd, context);
		}
	};
}
