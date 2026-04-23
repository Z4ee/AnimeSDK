#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET UNITYSDK_OFFSET(0x1A474970)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A474A30)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A474930)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A474A40)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1A4749F0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET UNITYSDK_OFFSET(0x1A4748D0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1A4748B0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0x1A4747B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncGPUReadback_TypeDefinitionIndex = 4495;

	class AsyncGPUReadback : public ::System::Object
	{
	public:
		static ::System::Void ValidateFormat(::UnityEngine::Texture* src, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstformat)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_VALIDATEFORMAT_OFFSET))(src, dstformat);
		}

		static ::System::Void SetUpScriptingRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest request, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET))(request, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET))(src, mipIndex, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_1(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET))(src, mipIndex, dstFormat, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_1(::UnityEngine::Texture* src, ::System::Int32 mipIndex)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET))(src, mipIndex);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_2(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_OFFSET))(src, mipIndex, dstFormat);
		}

		static ::System::Void Request_Internal_Texture_1_Injected(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET))(src, mipIndex, ret);
		}

		static ::System::Void Request_Internal_Texture_2_Injected(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_INJECTED_OFFSET))(src, mipIndex, dstFormat, ret);
		}
	};
}
