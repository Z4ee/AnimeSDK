#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ChaperoneCalibrationState.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRChaperone.h"

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_AREBOUNDSVISIBLE_OFFSET UNITYSDK_OFFSET(0x18CA0710)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_FORCEBOUNDSVISIBLE_OFFSET UNITYSDK_OFFSET(0x18CA09E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETBOUNDSCOLOR_OFFSET UNITYSDK_OFFSET(0x18CA0320)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETCALIBRATIONSTATE_OFFSET UNITYSDK_OFFSET(0x18C9F290)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREARECT_OFFSET UNITYSDK_OFFSET(0x18C9F8F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x18C9F560)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_RELOADINFO_OFFSET UNITYSDK_OFFSET(0x18C9FC60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_SETSCENECOLOR_OFFSET UNITYSDK_OFFSET(0x18C9FF20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9F1A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRChaperone_TypeDefinitionIndex = 30241;

	class CVRChaperone : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE__CTOR_OFFSET))(this, pInterface);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState GetCalibrationState()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETCALIBRATIONSTATE_OFFSET))(this);
		}

		::System::Boolean GetPlayAreaSize(::System::Single& pSizeX, ::System::Single& pSizeZ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREASIZE_OFFSET))(this, pSizeX, pSizeZ);
		}

		::System::Boolean GetPlayAreaRect(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& rect)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETPLAYAREARECT_OFFSET))(this, rect);
		}

		::System::Void ReloadInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_RELOADINFO_OFFSET))(this);
		}

		::System::Void SetSceneColor(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t color)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_SETSCENECOLOR_OFFSET))(this, color);
		}

		::System::Void GetBoundsColor(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputColorArray, ::System::Int32 nNumOutputColors, ::System::Single flCollisionBoundsFadeDistance, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputCameraColor)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_GETBOUNDSCOLOR_OFFSET))(this, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
		}

		::System::Boolean AreBoundsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_AREBOUNDSVISIBLE_OFFSET))(this);
		}

		::System::Void ForceBoundsVisible(::System::Boolean bForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONE_FORCEBOUNDSVISIBLE_OFFSET))(this, bForce);
		}
	};
}
