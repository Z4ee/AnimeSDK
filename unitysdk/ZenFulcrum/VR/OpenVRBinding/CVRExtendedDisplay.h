#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRExtendedDisplay.h"

#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETDXGIOUTPUTINFO_OFFSET UNITYSDK_OFFSET(0x1BBF0B30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETEYEOUTPUTVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1BBF0AD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETWINDOWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1BBF0A80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF09A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRExtendedDisplay_TypeDefinitionIndex = 37040;

	class CVRExtendedDisplay : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetWindowBounds(::System::Int32& a1, ::System::Int32& a2, ::System::UInt32& a3, ::System::UInt32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETWINDOWBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetEyeOutputViewport(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETEYEOUTPUTVIEWPORT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetDXGIOutputInfo(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETDXGIOUTPUTINFO_OFFSET))(this, a1, a2);
		}
	};
}
