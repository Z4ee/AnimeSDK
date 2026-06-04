#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORLOADACTIONS_OFFSET UNITYSDK_OFFSET(0x25D00)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0x25D10)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHLOADACTION_OFFSET UNITYSDK_OFFSET(0x3C360)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x2CC0650)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0x3C380)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORLOADACTIONS_OFFSET UNITYSDK_OFFSET(0x2C2C0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORRENDERTARGETS_OFFSET UNITYSDK_OFFSET(0xC630)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORSTOREACTIONS_OFFSET UNITYSDK_OFFSET(0x60530)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHLOADACTION_OFFSET UNITYSDK_OFFSET(0x3C370)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x388A7D0)
#define UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHSTOREACTION_OFFSET UNITYSDK_OFFSET(0xBEE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetBinding_TypeDefinitionIndex = 4694;

	struct alignas(8) RenderTargetBinding
	{
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_ColorRenderTargets; // 0x10
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRenderTarget; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_ColorLoadActions; // 0x40
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_ColorStoreActions; // 0x48
		::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction; // 0x50
		::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction; // 0x54

		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* get_colorRenderTargets()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORRENDERTARGETS_OFFSET))(this);
		}

		::System::Void set_colorRenderTargets(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORRENDERTARGETS_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_depthRenderTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHRENDERTARGET_OFFSET))(this);
		}

		::System::Void set_depthRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHRENDERTARGET_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* get_colorLoadActions()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORLOADACTIONS_OFFSET))(this);
		}

		::System::Void set_colorLoadActions(::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORLOADACTIONS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* get_colorStoreActions()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_COLORSTOREACTIONS_OFFSET))(this);
		}

		::System::Void set_colorStoreActions(::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_COLORSTOREACTIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderBufferLoadAction get_depthLoadAction()
		{
			return ((::UnityEngine::Rendering::RenderBufferLoadAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHLOADACTION_OFFSET))(this);
		}

		::System::Void set_depthLoadAction(::UnityEngine::Rendering::RenderBufferLoadAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderBufferLoadAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHLOADACTION_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction()
		{
			return ((::UnityEngine::Rendering::RenderBufferStoreAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_GET_DEPTHSTOREACTION_OFFSET))(this);
		}

		::System::Void set_depthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETBINDING_SET_DEPTHSTOREACTION_OFFSET))(this, a1);
		}
	};
}
