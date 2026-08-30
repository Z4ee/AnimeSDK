#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRChaperoneSetup.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_COMMITWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1EFAB690)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_EXPORTLIVETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1EFABCD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1EFAB850)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1EFABB30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVEPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1EFABC10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFABAA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1EFAB7A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREARECT_OFFSET UNITYSDK_OFFSET(0x1EFAB760)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1EFAB710)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAB900)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAB940)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_IMPORTFROMBUFFERTOWORKING_OFFSET UNITYSDK_OFFSET(0x1EFABD10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_RELOADFROMDISK_OFFSET UNITYSDK_OFFSET(0x1EFABA60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_REVERTWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1EFAB6D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1EFAB9B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1EFABAE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1EFABBC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1EFAB980)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFABA00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFABA30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAB5A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRChaperoneSetup_TypeDefinitionIndex = 37903;

	class CVRChaperoneSetup : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CommitWorkingCopy(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_COMMITWORKINGCOPY_OFFSET))(this, a1);
		}

		::System::Void RevertWorkingCopy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_REVERTWORKINGCOPY_OFFSET))(this);
		}

		::System::Boolean GetWorkingPlayAreaSize(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREASIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetWorkingPlayAreaRect(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREARECT_OFFSET))(this, a1);
		}

		::System::Boolean GetWorkingCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGCOLLISIONBOUNDSINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetLiveCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, a1);
		}

		::System::Boolean GetWorkingStandingZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, a1);
		}

		::System::Void SetWorkingPlayAreaSize(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPLAYAREASIZE_OFFSET))(this, a1, a2);
		}

		::System::Void SetWorkingCollisionBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSINFO_OFFSET))(this, a1);
		}

		::System::Void SetWorkingSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, a1);
		}

		::System::Void SetWorkingStandingZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, a1);
		}

		::System::Void ReloadFromDisk(::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EChaperoneConfigFile))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_RELOADFROMDISK_OFFSET))(this, a1);
		}

		::System::Boolean GetLiveSeatedZeroPoseToRawTrackingPose(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET))(this, a1);
		}

		::System::Void SetWorkingCollisionBoundsTagsInfo(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSTAGSINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetLiveCollisionBoundsTagsInfo(::Il2CppArray<::System::Byte>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSTAGSINFO_OFFSET))(this, a1);
		}

		::System::Boolean SetWorkingPhysicalBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPHYSICALBOUNDSINFO_OFFSET))(this, a1);
		}

		::System::Boolean GetLivePhysicalBoundsInfo(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVEPHYSICALBOUNDSINFO_OFFSET))(this, a1);
		}

		::System::Boolean ExportLiveToBuffer(::System::Text::StringBuilder* a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_EXPORTLIVETOBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Boolean ImportFromBufferToWorking(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_IMPORTFROMBUFFERTOWORKING_OFFSET))(this, a1, a2);
		}
	};
}
