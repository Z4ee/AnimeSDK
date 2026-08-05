#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_CAMERACAPTUREACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA682A0)
#define UNITYENGINE_RENDERING_CAMERACAPTUREACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CA68340)
#define UNITYENGINE_RENDERING_CAMERACAPTUREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA68290)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraCaptureAction_TypeDefinitionIndex = 18729;

	class CameraCaptureAction : public ::System::Object
	{
	public:
		::System::Action_3<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32>* actionCallback; // 0x10
		::System::Int32 capturePassIndex; // 0x18

		::System::Void _ctor(::System::Int32 index, ::System::Action_3<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREACTION__CTOR_OFFSET))(this, index, callback);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::CameraCaptureAction* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CameraCaptureAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREACTION_EQUALS_OFFSET))(this, other);
		}

		::System::Void Invoke(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERACAPTUREACTION_INVOKE_OFFSET))(this, source, commandBuffer);
		}
	};
}
