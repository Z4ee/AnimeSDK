#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET UNITYSDK_OFFSET(0x1D6FC6B0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_2_OFFSET UNITYSDK_OFFSET(0x1D6FC750)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC7F0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1D6FC670)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC800)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_2_OFFSET UNITYSDK_OFFSET(0x1D6FC710)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC810)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D6FC7B0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET UNITYSDK_OFFSET(0x1D6FC610)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1D6FC600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncGPUReadback_TypeDefinitionIndex = 6137;

	class AsyncGPUReadback : public ::System::Object
	{
	public:
		static ::System::Void SetUpScriptingRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest request, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET))(request, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::ComputeBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::ComputeBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET))(src, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_1(::UnityEngine::ComputeBuffer* src, ::System::Int32 size, ::System::Int32 offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET))(src, size, offset, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_2(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_2_OFFSET))(src, mipIndex, callback);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_1(::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_1_OFFSET))(buffer);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_ComputeBuffer_2(::UnityEngine::ComputeBuffer* src, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_2_OFFSET))(src, size, offset);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_1(::UnityEngine::Texture* src, ::System::Int32 mipIndex)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET))(src, mipIndex);
		}

		static ::System::Void Request_Internal_ComputeBuffer_1_Injected(::UnityEngine::ComputeBuffer* buffer, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_1_INJECTED_OFFSET))(buffer, ret);
		}

		static ::System::Void Request_Internal_ComputeBuffer_2_Injected(::UnityEngine::ComputeBuffer* src, ::System::Int32 size, ::System::Int32 offset, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_COMPUTEBUFFER_2_INJECTED_OFFSET))(src, size, offset, ret);
		}

		static ::System::Void Request_Internal_Texture_1_Injected(::UnityEngine::Texture* src, ::System::Int32 mipIndex, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET))(src, mipIndex, ret);
		}
	};
}
