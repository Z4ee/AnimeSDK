#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRExtendedDisplay.h"

#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETDXGIOUTPUTINFO_OFFSET UNITYSDK_OFFSET(0x1A6E0D90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETEYEOUTPUTVIEWPORT_OFFSET UNITYSDK_OFFSET(0x1A6E0D40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETWINDOWBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A6E0D00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E0C20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRExtendedDisplay_TypeDefinitionIndex = 35958;

	class CVRExtendedDisplay : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY__CTOR_OFFSET))(this, pInterface);
		}

		::System::Void GetWindowBounds(::System::Int32& pnX, ::System::Int32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETWINDOWBOUNDS_OFFSET))(this, pnX, pnY, pnWidth, pnHeight);
		}

		::System::Void GetEyeOutputViewport(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pnX, ::System::UInt32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETEYEOUTPUTVIEWPORT_OFFSET))(this, eEye, pnX, pnY, pnWidth, pnHeight);
		}

		::System::Void GetDXGIOutputInfo(::System::Int32& pnAdapterIndex, ::System::Int32& pnAdapterOutputIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVREXTENDEDDISPLAY_GETDXGIOUTPUTINFO_OFFSET))(this, pnAdapterIndex, pnAdapterOutputIndex);
		}
	};
}
