#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_DRAWMASKPROXY_OFFSET UNITYSDK_OFFSET(0x1C4DC740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C4DC510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C4DBF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C4DBD30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C4DBE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4DD650)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DD510)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FullScreenQuadFxMaskProxy_TypeDefinitionIndex = 27211;

	class FullScreenQuadFxMaskProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy*>** StaticGet_s_ShadowCasterList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy*>**)Il2CppClass::FromTypeDefinitionIndex(FullScreenQuadFxMaskProxy_TypeDefinitionIndex)->GetStaticField(0x233D0);
		}
		static ::UnityEngine::Material** StaticGet_s_ShadowProjectorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(FullScreenQuadFxMaskProxy_TypeDefinitionIndex)->GetStaticField(0x233D8);
		}
		static ::System::Int32* StaticGet__FullScreenQuadFxMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FullScreenQuadFxMaskProxy_TypeDefinitionIndex)->GetStaticField(0x6760);
		}
		::Il2CppArray<::UnityEngine::GameObject*>* maskObjects; // 0x18
		::UnityEngine::Vector2 depthBias; // 0x20
		::System::Boolean enableBackCull; // 0x28
		::System::Boolean disableCharSubDivision; // 0x29
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* targetList; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean>* subDivisionStateCacheMap; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_REGISTER_OFFSET))(light);
		}

		static ::System::Void UnRegister(::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy* light)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::FullScreenQuadFxMaskProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_UNREGISTER_OFFSET))(light);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_ONDISABLE_OFFSET))(this);
		}

		static ::System::Void DrawMaskProxy(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FULLSCREENQUADFXMASKPROXY_DRAWMASKPROXY_OFFSET))(cmd, context, renderingData, colorBuffer, depthBuffer);
		}
	};
}
