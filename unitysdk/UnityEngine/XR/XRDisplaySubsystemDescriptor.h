#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystemDescriptor_1.h"

namespace UnityEngine::XR { class XRDisplaySubsystem; }

#define UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EC30)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRDisplaySubsystemDescriptor_TypeDefinitionIndex = 27651;

	class XRDisplaySubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRDisplaySubsystem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRDISPLAYSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
