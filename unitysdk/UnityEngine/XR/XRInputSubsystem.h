#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/IntegratedSubsystem_1.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::XR { class XRInputSubsystemDescriptor; }

#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1FB67210)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1FB67160)
#define UNITYENGINE_XR_XRINPUTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB672C0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRInputSubsystem_TypeDefinitionIndex = 28254;

	class XRInputSubsystem : public ::UnityEngine::IntegratedSubsystem_1<::UnityEngine::XR::XRInputSubsystemDescriptor*>
	{
	public:
		::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* trackingOriginUpdated; // 0x20
		::System::Action_1<::UnityEngine::XR::XRInputSubsystem*>* boundaryChanged; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void InvokeTrackingOriginUpdatedEvent(::System::IntPtr internalPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKETRACKINGORIGINUPDATEDEVENT_OFFSET))(internalPtr);
		}

		static ::System::Void InvokeBoundaryChangedEvent(::System::IntPtr internalPtr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRINPUTSUBSYSTEM_INVOKEBOUNDARYCHANGEDEVENT_OFFSET))(internalPtr);
		}
	};
}
