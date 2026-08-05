#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class VisiblePixelCounter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1E78CAC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1E78CA30)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1E78CA20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78CA40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VisiblePixelCounter_RequestTask_TypeDefinitionIndex = 27227;

	class VisiblePixelCounter_RequestTask : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter* self; // 0x10
		::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* action; // 0x18
		::UnityEngine::ComputeBuffer* buffer; // 0x20
		::Il2CppArray<::System::Int32>* Ages; // 0x28

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter* self, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VisiblePixelCounter*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK__CTOR_OFFSET))(this, self, buffer);
		}

		::UnityEngine::ComputeBuffer* get_Buffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_GET_BUFFER_OFFSET))(this);
		}

		::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* get_Action()
		{
			return ((::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_GET_ACTION_OFFSET))(this);
		}

		::System::Void Callback(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VISIBLEPIXELCOUNTER_REQUESTTASK_CALLBACK_OFFSET))(this, request);
		}
	};
}
