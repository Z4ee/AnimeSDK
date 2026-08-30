#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ChaperoneCalibrationState.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRChaperone.h"

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_AREBOUNDSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D7F74D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_FORCEBOUNDSVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D7F7510)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETBOUNDSCOLOR_OFFSET UNITYSDK_OFFSET(0x1D7F7460)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETCALIBRATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D7F72E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREARECT_OFFSET UNITYSDK_OFFSET(0x1D7F7370)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1D7F7320)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_RELOADINFO_OFFSET UNITYSDK_OFFSET(0x1D7F73B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_SETSCENECOLOR_OFFSET UNITYSDK_OFFSET(0x1D7F73F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F71F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRChaperone_TypeDefinitionIndex = 37902;

	class CVRChaperone : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState GetCalibrationState()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETCALIBRATIONSTATE_OFFSET))(this);
		}

		::System::Boolean GetPlayAreaSize(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREASIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetPlayAreaRect(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREARECT_OFFSET))(this, a1);
		}

		::System::Void ReloadInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_RELOADINFO_OFFSET))(this);
		}

		::System::Void SetSceneColor(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_SETSCENECOLOR_OFFSET))(this, a1);
		}

		::System::Void GetBoundsColor(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::System::Int32 a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETBOUNDSCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean AreBoundsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_AREBOUNDSVISIBLE_OFFSET))(this);
		}

		::System::Void ForceBoundsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_FORCEBOUNDSVISIBLE_OFFSET))(this, a1);
		}
	};
}
