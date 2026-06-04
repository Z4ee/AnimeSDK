#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET UNITYSDK_OFFSET(0x1B2C3AD0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3B90)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1B2C3A90)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2C3BA0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1B2C3B50)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET UNITYSDK_OFFSET(0x1B2C3A30)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1B2C3A10)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACK_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C3910)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncGPUReadback_TypeDefinitionIndex = 4669;

	class AsyncGPUReadback : public ::System::Object
	{
	public:
		static ::System::Void ValidateFormat(::UnityEngine::Texture* a1, ::UnityEngine::Experimental::Rendering::GraphicsFormat a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_VALIDATEFORMAT_OFFSET))(a1, a2);
		}

		static ::System::Void SetUpScriptingRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest a1, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_SETUPSCRIPTINGREQUEST_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* a3)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_1(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* a4)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_1(::UnityEngine::Texture* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_Texture_2(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3)
		{
			return ((::UnityEngine::Rendering::AsyncGPUReadbackRequest(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Request_Internal_Texture_1_Injected(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_1_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Request_Internal_Texture_2_Injected(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::Experimental::Rendering::GraphicsFormat a3, ::UnityEngine::Rendering::AsyncGPUReadbackRequest& a4)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACK_REQUEST_INTERNAL_TEXTURE_2_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
