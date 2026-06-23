#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystemDescriptor_1.h"

namespace UnityEngine::XR { class XRInputSubsystem; }

#define UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EDD0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystemDescriptor_TypeDefinitionIndex = 27653;

	class XRInputSubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRInputSubsystem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
