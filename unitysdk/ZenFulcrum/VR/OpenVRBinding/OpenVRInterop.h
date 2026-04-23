#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRInitError.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x1A728B50)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETINITTOKEN_OFFSET UNITYSDK_OFFSET(0x1A728DB0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETSTRINGFORHMDERROR_OFFSET UNITYSDK_OFFSET(0x1A728A30)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7285F0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISHMDPRESENT_OFFSET UNITYSDK_OFFSET(0x1A728800)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISINTERFACEVERSIONVALID_OFFSET UNITYSDK_OFFSET(0x1A728C90)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISRUNTIMEINSTALLED_OFFSET UNITYSDK_OFFSET(0x1A728900)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_SHUTDOWNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A728700)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A72A7E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int OpenVRInterop_TypeDefinitionIndex = 35975;

	class OpenVRInterop : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 InitInternal(::ZenFulcrum::VR::OpenVRBinding::EVRInitError& peError, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType eApplicationType)
		{
			return ((::System::UInt32(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError&, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_INITINTERNAL_OFFSET))(peError, eApplicationType);
		}

		static ::System::Void ShutdownInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_SHUTDOWNINTERNAL_OFFSET))();
		}

		static ::System::Boolean IsHmdPresent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISHMDPRESENT_OFFSET))();
		}

		static ::System::Boolean IsRuntimeInstalled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISRUNTIMEINSTALLED_OFFSET))();
		}

		static ::System::IntPtr GetStringForHmdError(::ZenFulcrum::VR::OpenVRBinding::EVRInitError error)
		{
			return ((::System::IntPtr(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETSTRINGFORHMDERROR_OFFSET))(error);
		}

		static ::System::IntPtr GetGenericInterface(::System::String* pchInterfaceVersion, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError& peError)
		{
			return ((::System::IntPtr(*)(::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETGENERICINTERFACE_OFFSET))(pchInterfaceVersion, peError);
		}

		static ::System::Boolean IsInterfaceVersionValid(::System::String* pchInterfaceVersion)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISINTERFACEVERSIONVALID_OFFSET))(pchInterfaceVersion);
		}

		static ::System::UInt32 GetInitToken()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETINITTOKEN_OFFSET))();
		}
	};
}
