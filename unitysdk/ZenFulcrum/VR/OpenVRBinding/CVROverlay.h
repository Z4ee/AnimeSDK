#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EColorSpace.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EOverlayDirection.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdRect2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVROverlay.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRMessageOverlayResponse.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayFlags.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayInputMethod.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionMaskPrimitive_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionParams_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionResults_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayTransformType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLEAROVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EFAD980)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLOSEMESSAGEOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADF40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_COMPUTEOVERLAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1EFAD800)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADB40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFACC80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_DESTROYOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFACCB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_FINDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFACC50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETDASHBOARDOVERLAYSCENEPROCESS_OFFSET UNITYSDK_OFFSET(0x1EFADC20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETGAMEPADFOCUSOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFAD890)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETHIGHQUALITYOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFACD10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETKEYBOARDTEXT_OFFSET UNITYSDK_OFFSET(0x1EFADDA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYALPHA_OFFSET UNITYSDK_OFFSET(0x1EFAD010)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET UNITYSDK_OFFSET(0x1EFAD190)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EFACF90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFACE40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAGS_OFFSET UNITYSDK_OFFSET(0x1EFADEB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAG_OFFSET UNITYSDK_OFFSET(0x1EFACF20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYIMAGEDATA_OFFSET UNITYSDK_OFFSET(0x1EFACDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1EFAD740)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYKEY_OFFSET UNITYSDK_OFFSET(0x1EFACD40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYMOUSESCALE_OFFSET UNITYSDK_OFFSET(0x1EFAD7A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYNAME_OFFSET UNITYSDK_OFFSET(0x1EFACD80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERINGPID_OFFSET UNITYSDK_OFFSET(0x1EFACEC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERMODEL_OFFSET UNITYSDK_OFFSET(0x1EFAD290)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYSORTORDER_OFFSET UNITYSDK_OFFSET(0x1EFAD0D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXELASPECT_OFFSET UNITYSDK_OFFSET(0x1EFAD070)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTUREBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EFAD260)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1EFAD200)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1EFADB00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EFADA30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1EFAD370)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET UNITYSDK_OFFSET(0x1EFAD480)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1EFAD440)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET UNITYSDK_OFFSET(0x1EFAD3D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1EFAD310)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYWIDTHINMETERS_OFFSET UNITYSDK_OFFSET(0x1EFAD130)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETPRIMARYDASHBOARDDEVICE_OFFSET UNITYSDK_OFFSET(0x1EFADC80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETTRANSFORMFOROVERLAYCOORDINATES_OFFSET UNITYSDK_OFFSET(0x1EFAD580)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_OFFSET UNITYSDK_OFFSET(0x1EFAD830)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1EFADDD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFAD520)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISACTIVEDASHBOARDOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADBC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISDASHBOARDVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EFADB90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISHOVERTARGETOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFAD860)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISOVERLAYVISIBLE_OFFSET UNITYSDK_OFFSET(0x1EFAD550)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_MOVEGAMEPADFOCUSTONEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1EFAD920)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_POLLNEXTOVERLAYEVENT_OFFSET UNITYSDK_OFFSET(0x1EFAD5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_RELEASENATIVEOVERLAYHANDLE_OFFSET UNITYSDK_OFFSET(0x1EFADAD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETDASHBOARDOVERLAYSCENEPROCESS_OFFSET UNITYSDK_OFFSET(0x1EFADBF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETGAMEPADFOCUSOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFAD8C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETHIGHQUALITYOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFACCE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDPOSITIONFOROVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADE30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1EFADE00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYALPHA_OFFSET UNITYSDK_OFFSET(0x1EFACFE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET UNITYSDK_OFFSET(0x1EFAD160)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYCOLOR_OFFSET UNITYSDK_OFFSET(0x1EFACF50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFLAG_OFFSET UNITYSDK_OFFSET(0x1EFACEF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFROMFILE_OFFSET UNITYSDK_OFFSET(0x1EFADA00)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1EFAD770)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINTERSECTIONMASK_OFFSET UNITYSDK_OFFSET(0x1EFADE70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYMOUSESCALE_OFFSET UNITYSDK_OFFSET(0x1EFAD7D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNAME_OFFSET UNITYSDK_OFFSET(0x1EFACDC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x1EFAD8F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRAW_OFFSET UNITYSDK_OFFSET(0x1EFAD9B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERINGPID_OFFSET UNITYSDK_OFFSET(0x1EFACE90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERMODEL_OFFSET UNITYSDK_OFFSET(0x1EFAD2E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYSORTORDER_OFFSET UNITYSDK_OFFSET(0x1EFAD0A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXELASPECT_OFFSET UNITYSDK_OFFSET(0x1EFAD040)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTUREBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EFAD230)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x1EFAD1D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EFAD950)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1EFAD340)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET UNITYSDK_OFFSET(0x1EFAD4C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1EFAD410)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET UNITYSDK_OFFSET(0x1EFAD3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYWIDTHINMETERS_OFFSET UNITYSDK_OFFSET(0x1EFAD100)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWDASHBOARD_OFFSET UNITYSDK_OFFSET(0x1EFADC50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARDFOROVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADD20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1EFADCB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWMESSAGEOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFADEE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWOVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFAD4F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFACB60)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVROverlay_TypeDefinitionIndex = 37905;

	class CVROverlay : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY__CTOR_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError FindOverlay(::System::String* a1, ::System::UInt64& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_FINDOVERLAY_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError CreateOverlay(::System::String* a1, ::System::String* a2, ::System::UInt64& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEOVERLAY_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError DestroyOverlay(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_DESTROYOVERLAY_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetHighQualityOverlay(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETHIGHQUALITYOVERLAY_OFFSET))(this, a1);
		}

		::System::UInt64 GetHighQualityOverlay()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETHIGHQUALITYOVERLAY_OFFSET))(this);
		}

		::System::UInt32 GetOverlayKey(::System::UInt64 a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYKEY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetOverlayName(::System::UInt64 a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayName(::System::UInt64 a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNAME_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayImageData(::System::UInt64 a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYIMAGEDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetOverlayErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVROverlayError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYERRORNAMEFROMENUM_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRenderingPid(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERINGPID_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetOverlayRenderingPid(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERINGPID_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayFlag(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags a2, ::System::Boolean a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFLAG_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayFlag(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags a2, ::System::Boolean& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayFlags, ::System::Boolean&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAG_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayColor(::System::UInt64 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayColor(::System::UInt64 a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYCOLOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayAlpha(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYALPHA_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayAlpha(::System::UInt64 a1, ::System::Single& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYALPHA_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTexelAspect(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXELASPECT_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTexelAspect(::System::UInt64 a1, ::System::Single& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXELASPECT_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlaySortOrder(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYSORTORDER_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlaySortOrder(::System::UInt64 a1, ::System::UInt32& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYSORTORDER_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayWidthInMeters(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYWIDTHINMETERS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayWidthInMeters(::System::UInt64 a1, ::System::Single& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYWIDTHINMETERS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(::System::UInt64 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(::System::UInt64 a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYAUTOCURVEDISTANCERANGEINMETERS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTextureColorSpace(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURECOLORSPACE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureColorSpace(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURECOLORSPACE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTextureBounds(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTUREBOUNDS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureBounds(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTUREBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetOverlayRenderModel(::System::UInt64 a1, ::System::String* a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYRENDERMODEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRenderModel(::System::UInt64 a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRENDERMODEL_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformType(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayTransformType& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayTransformType&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTYPE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformAbsolute(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMABSOLUTE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformAbsolute(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMABSOLUTE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformTrackedDeviceRelative(::System::UInt64 a1, ::System::UInt32 a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformTrackedDeviceRelative(::System::UInt64 a1, ::System::UInt32& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICERELATIVE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformTrackedDeviceComponent(::System::UInt64 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformTrackedDeviceComponent(::System::UInt64 a1, ::System::UInt32& a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMTRACKEDDEVICECOMPONENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTransformOverlayRelative(::System::UInt64 a1, ::System::UInt64& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTransformOverlayRelative(::System::UInt64 a1, ::System::UInt64 a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTRANSFORMOVERLAYRELATIVE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowOverlay(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWOVERLAY_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError HideOverlay(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEOVERLAY_OFFSET))(this, a1);
		}

		::System::Boolean IsOverlayVisible(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISOVERLAYVISIBLE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetTransformForOverlayCoordinates(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a2, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t a3, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETTRANSFORMFOROVERLAYCOORDINATES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean PollNextOverlayEvent(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_POLLNEXTOVERLAYEVENT_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayInputMethod(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYINPUTMETHOD_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayInputMethod(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayInputMethod))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINPUTMETHOD_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayMouseScale(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYMOUSESCALE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayMouseScale(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYMOUSESCALE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ComputeOverlayIntersection(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t& a2, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t&, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_COMPUTEOVERLAYINTERSECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HandleControllerOverlayInteractionAsMouse(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HANDLECONTROLLEROVERLAYINTERACTIONASMOUSE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsHoverTargetOverlay(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISHOVERTARGETOVERLAY_OFFSET))(this, a1);
		}

		::System::UInt64 GetGamepadFocusOverlay()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETGAMEPADFOCUSOVERLAY_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetGamepadFocusOverlay(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETGAMEPADFOCUSOVERLAY_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayNeighbor(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYNEIGHBOR_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError MoveGamepadFocusToNeighbor(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection a1, ::System::UInt64 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_MOVEGAMEPADFOCUSTONEIGHBOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayTexture(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYTEXTURE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ClearOverlayTexture(::System::UInt64 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLEAROVERLAYTEXTURE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayRaw(::System::UInt64 a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYRAW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayFromFile(::System::UInt64 a1, ::System::String* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYFROMFILE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTexture(::System::UInt64 a1, ::System::IntPtr& a2, ::System::IntPtr a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6, ::ZenFulcrum::VR::OpenVRBinding::ETextureType& a7, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace& a8, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a9)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr&, ::System::IntPtr, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType&, ::ZenFulcrum::VR::OpenVRBinding::EColorSpace&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ReleaseNativeOverlayHandle(::System::UInt64 a1, ::System::IntPtr a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_RELEASENATIVEOVERLAYHANDLE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayTextureSize(::System::UInt64 a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYTEXTURESIZE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError CreateDashboardOverlay(::System::String* a1, ::System::String* a2, ::System::UInt64& a3, ::System::UInt64& a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CREATEDASHBOARDOVERLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsDashboardVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISDASHBOARDVISIBLE_OFFSET))(this);
		}

		::System::Boolean IsActiveDashboardOverlay(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_ISACTIVEDASHBOARDOVERLAY_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetDashboardOverlaySceneProcess(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETDASHBOARDOVERLAYSCENEPROCESS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetDashboardOverlaySceneProcess(::System::UInt64 a1, ::System::UInt32& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETDASHBOARDOVERLAYSCENEPROCESS_OFFSET))(this, a1, a2);
		}

		::System::Void ShowDashboard(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWDASHBOARD_OFFSET))(this, a1);
		}

		::System::UInt32 GetPrimaryDashboardDevice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETPRIMARYDASHBOARDDEVICE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowKeyboard(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt32 a4, ::System::String* a5, ::System::Boolean a6, ::System::UInt64 a7)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError ShowKeyboardForOverlay(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::UInt32 a5, ::System::String* a6, ::System::Boolean a7, ::System::UInt64 a8)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWKEYBOARDFOROVERLAY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::UInt32 GetKeyboardText(::System::Text::StringBuilder* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETKEYBOARDTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void HideKeyboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_HIDEKEYBOARD_OFFSET))(this);
		}

		::System::Void SetKeyboardTransformAbsolute(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDTRANSFORMABSOLUTE_OFFSET))(this, a1, a2);
		}

		::System::Void SetKeyboardPositionForOverlay(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::HmdRect2_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETKEYBOARDPOSITIONFOROVERLAY_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError SetOverlayIntersectionMask(::System::UInt64 a1, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t& a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SETOVERLAYINTERSECTIONMASK_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError GetOverlayFlags(::System::UInt64 a1, ::System::UInt32& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_GETOVERLAYFLAGS_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse ShowMessageOverlay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::VRMessageOverlayResponse(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_SHOWMESSAGEOVERLAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CloseMessageOverlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVROVERLAY_CLOSEMESSAGEOVERLAY_OFFSET))(this);
		}
	};
}
