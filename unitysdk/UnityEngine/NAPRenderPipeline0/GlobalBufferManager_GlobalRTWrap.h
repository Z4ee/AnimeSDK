#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class RenderTextureDescAction; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1EB54D50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1EB54E90)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_OFFSET UNITYSDK_OFFSET(0x1EB54B80)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1EB54B60)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_ISTEMPBUFFEREXIST_OFFSET UNITYSDK_OFFSET(0x1EB54B00)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_RELEASETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1EB54A50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB547B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EB54890)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EB54970)
#define UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB546A0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GlobalBufferManager_GlobalRTWrap_TypeDefinitionIndex = 6028;

	class GlobalBufferManager_GlobalRTWrap : public ::System::Object
	{
	public:
		::UnityEngine::RenderTextureFormat rtFormat; // 0x10
		::UnityEngine::Experimental::Rendering::GraphicsFormat format; // 0x14
		::UnityEngine::Rendering::RenderTargetIdentifier rtNameIdentifier; // 0x18
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle rtNameHolder; // 0x40
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle realRTHolder; // 0x44
		::System::Int32 lastCreatedRTWidth; // 0x48
		::System::Int32 lastCreatedRTHeight; // 0x4C
		::UnityEngine::NAPRenderPipeline0::RenderTextureDescAction* globalRtDescActions; // 0x50
		::System::Boolean lossyCompressionOverride; // 0x58
		::System::Boolean lossyCompression; // 0x59
		::System::UInt32 lifetimeId; // 0x5C
		::System::Boolean enableDynamicCache; // 0x60

		::System::Void _ctor(::UnityEngine::RenderTextureFormat format, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_OFFSET))(this, format, name);
		}

		::System::Void _ctor_1(::UnityEngine::RenderTextureFormat format, ::System::String* name, ::System::Boolean dynamicCache)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureFormat, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_1_OFFSET))(this, format, name, dynamicCache);
		}

		::System::Void _ctor_2(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::String* name, ::System::Boolean dynamicCache)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_2_OFFSET))(this, format, name, dynamicCache);
		}

		::System::Void _ctor_3(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP__CTOR_3_OFFSET))(this, format, name);
		}

		::System::Void ReleaseTempBuffer(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_RELEASETEMPBUFFER_OFFSET))(this, cmd);
		}

		::System::Boolean IsTempBufferExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_ISTEMPBUFFEREXIST_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier Identifier()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier Create(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_OFFSET))(this, width, height, graphicsFormat, filterMode, cmd);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier Create_1(::UnityEngine::RenderTextureDescriptor& rtDescTemplate, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::FilterMode filterMode)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_1_OFFSET))(this, rtDescTemplate, cmd, filterMode);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier Create_2(::UnityEngine::RenderTextureDescriptor& rtDescTemplate, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper wrapper, ::UnityEngine::FilterMode filterMode)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GLOBALBUFFERMANAGER_GLOBALRTWRAP_CREATE_2_OFFSET))(this, rtDescTemplate, wrapper, filterMode);
		}
	};
}
