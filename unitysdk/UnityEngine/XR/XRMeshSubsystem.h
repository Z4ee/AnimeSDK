#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystem_1.h"
#include "unitysdk/UnityEngine/XR/MeshGenerationResult.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::XR { class XRMeshSubsystemDescriptor; }

#define UNITYENGINE_XR_XRMESHSUBSYSTEM_INVOKEMESHREADYDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E78EDF0)
#define UNITYENGINE_XR_XRMESHSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EE60)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRMeshSubsystem_TypeDefinitionIndex = 27659;

	class XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRMeshSubsystemDescriptor*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEM_INVOKEMESHREADYDELEGATE_OFFSET))(this, result, onMeshGenerationComplete);
		}
	};
}
