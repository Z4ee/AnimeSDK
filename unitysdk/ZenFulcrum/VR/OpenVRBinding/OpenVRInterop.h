#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRInitError.h"

namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x1EFC6090)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETINITTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFC62F0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETSTRINGFORHMDERROR_OFFSET UNITYSDK_OFFSET(0x1EFC5F70)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFC5B30)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISHMDPRESENT_OFFSET UNITYSDK_OFFSET(0x1EFC5D40)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISINTERFACEVERSIONVALID_OFFSET UNITYSDK_OFFSET(0x1EFC61D0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISRUNTIMEINSTALLED_OFFSET UNITYSDK_OFFSET(0x1EFC5E40)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_SHUTDOWNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFC5C40)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC88B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int OpenVRInterop_TypeDefinitionIndex = 37916;

	class OpenVRInterop : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 InitInternal(::ZenFulcrum::VR::OpenVRBinding::EVRInitError& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType a2)
		{
			return ((::System::UInt32(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError&, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_INITINTERNAL_OFFSET))(a1, a2);
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

		static ::System::IntPtr GetStringForHmdError(::ZenFulcrum::VR::OpenVRBinding::EVRInitError a1)
		{
			return ((::System::IntPtr(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETSTRINGFORHMDERROR_OFFSET))(a1);
		}

		static ::System::IntPtr GetGenericInterface(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError& a2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETGENERICINTERFACE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInterfaceVersionValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_ISINTERFACEVERSIONVALID_OFFSET))(a1);
		}

		static ::System::UInt32 GetInitToken()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVRINTEROP_GETINITTOKEN_OFFSET))();
		}
	};
}
