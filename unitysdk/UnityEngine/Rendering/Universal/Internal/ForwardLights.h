#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_GETLIGHTFINALCOLOR_OFFSET UNITYSDK_OFFSET(0x1968A660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_INITIALIZELIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0x1968A780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET UNITYSDK_OFFSET(0x1968A1D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUP_OFFSET UNITYSDK_OFFSET(0x19689CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS__CTOR_OFFSET UNITYSDK_OFFSET(0x19689BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS__INITIALIZELIGHTCONSTANTS_G__GETPATH_10_0_OFFSET UNITYSDK_OFFSET(0x1968BAB0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ForwardLights_TypeDefinitionIndex = 30434;

	class ForwardLights : public ::System::Object
	{
	public:
		static ::UnityEngine::Camera** StaticGet_currentCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_TypeDefinitionIndex)->GetStaticField(0x24810);
		}
		static ::System::Boolean* StaticGet_debugMainLightPosition()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ForwardLights_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		// static const ::System::String* k_SetupLightConstants; // 0x0
		::UnityEngine::Vector4 k_DefaultShadowTintColor; // 0x10
		::UnityEngine::Vector4 k_DefaultLightColor; // 0x20
		::UnityEngine::Vector4 k_DefaultLightPosition; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUP_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::UnityEngine::Vector4 GetLightFinalColor(::UnityEngine::Light* light)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_GETLIGHTFINALCOLOR_OFFSET))(light);
		}

		::System::Void InitializeLightConstants(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Vector4& lightPos, ::UnityEngine::Vector4& lightColor, ::UnityEngine::Vector4& shadowTintColor, ::UnityEngine::Vector4& shadowTintParams, ::UnityEngine::Vector4& avatarLightColor, ::UnityEngine::Vector4& avatarLightPos, ::UnityEngine::Color& lightSpecularColor, ::UnityEngine::Vector4& lightSpecularPos, ::System::Boolean& overrideSpecularColorAndDir, ::System::Single& shdowIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Color&, ::UnityEngine::Vector4&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_INITIALIZELIGHTCONSTANTS_OFFSET))(this, postCullRenderingData, lightPos, lightColor, shadowTintColor, shadowTintParams, avatarLightColor, avatarLightPos, lightSpecularColor, lightSpecularPos, overrideSpecularColorAndDir, shdowIntensity);
		}

		::System::Void SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::UnityEngine::Rendering::Universal::Lighting* lighting)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::UnityEngine::Rendering::Universal::Lighting*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS_SETUPMAINLIGHTCONSTANTS_OFFSET))(this, cmd, postCullRenderingData, lighting);
		}

		static ::System::String* _InitializeLightConstants_g__GetPath_10_0(::UnityEngine::Transform* transform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FORWARDLIGHTS__INITIALIZELIGHTCONSTANTS_G__GETPATH_10_0_OFFSET))(transform);
		}
	};
}
