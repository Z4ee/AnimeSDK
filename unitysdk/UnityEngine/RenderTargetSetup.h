#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/RenderBuffer.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"

#define UNITYENGINE_RENDERTARGETSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x969120)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTargetSetup_TypeDefinitionIndex = 5190;

	struct alignas(8) RenderTargetSetup
	{
		::Il2CppArray<::UnityEngine::RenderBuffer>* color; // 0x10
		::UnityEngine::RenderBuffer depth; // 0x18
		::System::Int32 mipLevel; // 0x28
		::UnityEngine::CubemapFace cubemapFace; // 0x2C
		::System::Int32 depthSlice; // 0x30
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoad; // 0x38
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStore; // 0x40
		::UnityEngine::Rendering::RenderBufferLoadAction depthLoad; // 0x48
		::UnityEngine::Rendering::RenderBufferStoreAction depthStore; // 0x4C

		::System::Void _ctor(::Il2CppArray<::UnityEngine::RenderBuffer>* color, ::UnityEngine::RenderBuffer depth, ::System::Int32 mip, ::UnityEngine::CubemapFace face, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoad, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStore, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoad, ::UnityEngine::Rendering::RenderBufferStoreAction depthStore)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::RenderBuffer>*, ::UnityEngine::RenderBuffer, ::System::Int32, ::UnityEngine::CubemapFace, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTARGETSETUP__CTOR_OFFSET))(this, color, depth, mip, face, colorLoad, colorStore, depthLoad, depthStore);
		}
	};
}
