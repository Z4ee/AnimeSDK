#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EChaperoneConfigFile.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRChaperoneSetup.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_COMMITWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1F645E10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_EXPORTLIVETOBUFFER_OFFSET UNITYSDK_OFFSET(0x1F646430)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1F645FD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVECOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1F6462A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVEPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1F646370)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETLIVESEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1F646220)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1F645F20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREARECT_OFFSET UNITYSDK_OFFSET(0x1F645EE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1F645E90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1F646080)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_GETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1F6460C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_IMPORTFROMBUFFERTOWORKING_OFFSET UNITYSDK_OFFSET(0x1F646470)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_RELOADFROMDISK_OFFSET UNITYSDK_OFFSET(0x1F6461E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_REVERTWORKINGCOPY_OFFSET UNITYSDK_OFFSET(0x1F645E50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1F646130)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGCOLLISIONBOUNDSTAGSINFO_OFFSET UNITYSDK_OFFSET(0x1F646260)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPHYSICALBOUNDSINFO_OFFSET UNITYSDK_OFFSET(0x1F646330)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGPLAYAREASIZE_OFFSET UNITYSDK_OFFSET(0x1F646100)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSEATEDZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1F646180)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP_SETWORKINGSTANDINGZEROPOSETORAWTRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1F6461B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCHAPERONESETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F645D20)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRChaperoneSetup_TypeDefinitionIndex = 39200;

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
