#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURECLEAR_OFFSET UNITYSDK_OFFSET(0xA56A00)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0xA569B0)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA56A90)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA56A20)
#define UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA56B50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AttachmentDescriptor_TypeDefinitionIndex = 6229;

	struct alignas(8) AttachmentDescriptor
	{
		::UnityEngine::Rendering::RenderBufferLoadAction m_LoadAction; // 0x10
		::UnityEngine::Rendering::RenderBufferStoreAction m_StoreAction; // 0x14
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier m_LoadStoreTarget; // 0x20
		::UnityEngine::Rendering::RenderTargetIdentifier m_ResolveTarget; // 0x48
		::UnityEngine::Color m_ClearColor; // 0x70
		::System::Single m_ClearDepth; // 0x80
		::System::UInt32 m_ClearStencil; // 0x84

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier target, ::System::Boolean loadExistingContents, ::System::Boolean storeResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURETARGET_OFFSET))(this, target, loadExistingContents, storeResults);
		}

		::System::Void ConfigureClear(::UnityEngine::Color clearColor, ::System::Single clearDepth, ::System::UInt32 clearStencil)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_CONFIGURECLEAR_OFFSET))(this, clearColor, clearDepth, clearStencil);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::AttachmentDescriptor other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::AttachmentDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATTACHMENTDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}
	};
}
