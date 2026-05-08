#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystemDescriptor_1.h"

namespace UnityEngine::XR { class XRMeshSubsystem; }

#define UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4463F0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRMeshSubsystemDescriptor_TypeDefinitionIndex = 25175;

	class XRMeshSubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRMeshSubsystem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRMESHSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
