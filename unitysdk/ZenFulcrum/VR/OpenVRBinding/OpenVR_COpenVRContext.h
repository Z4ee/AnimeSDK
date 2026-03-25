#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::VR::OpenVRBinding { class CVRApplications; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRChaperone; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRChaperoneSetup; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRCompositor; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRExtendedDisplay; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVROverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRRenderModels; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRScreenshots; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRSettings; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRTrackedCamera; }

#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_CHECKCLEAR_OFFSET UNITYSDK_OFFSET(0x18CEF120)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CEF070)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRAPPLICATIONS_OFFSET UNITYSDK_OFFSET(0x18CEE8A0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCHAPERONESETUP_OFFSET UNITYSDK_OFFSET(0x18CEDE20)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCHAPERONE_OFFSET UNITYSDK_OFFSET(0x18CEDC60)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCOMPOSITOR_OFFSET UNITYSDK_OFFSET(0x18CEDFE0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VREXTENDEDDISPLAY_OFFSET UNITYSDK_OFFSET(0x18CEE520)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VROVERLAY_OFFSET UNITYSDK_OFFSET(0x18CEE1A0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRRENDERMODELS_OFFSET UNITYSDK_OFFSET(0x18CEE360)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSCREENSHOTS_OFFSET UNITYSDK_OFFSET(0x18CEEA60)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSETTINGS_OFFSET UNITYSDK_OFFSET(0x18CEE6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSYSTEM_OFFSET UNITYSDK_OFFSET(0x18CEDAA0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRTRACKEDCAMERA_OFFSET UNITYSDK_OFFSET(0x18CEEC20)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CED9E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int OpenVR_COpenVRContext_TypeDefinitionIndex = 30370;

	class OpenVR_COpenVRContext : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::CVRSettings* m_pVRSettings; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::CVRSystem* m_pVRSystem; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup* m_pVRChaperoneSetup; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots* m_pVRScreenshots; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::CVRCompositor* m_pVRCompositor; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels* m_pVRRenderModels; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::CVRChaperone* m_pVRChaperone; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::CVRApplications* m_pVRApplications; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera* m_pVRTrackedCamera; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay* m_pVRExtendedDisplay; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::CVROverlay* m_pVROverlay; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void CheckClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_CHECKCLEAR_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRSystem* VRSystem()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSYSTEM_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRChaperone* VRChaperone()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRChaperone*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCHAPERONE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup* VRChaperoneSetup()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCHAPERONESETUP_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRCompositor* VRCompositor()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRCompositor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRCOMPOSITOR_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVROverlay* VROverlay()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVROverlay*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VROVERLAY_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels* VRRenderModels()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRRENDERMODELS_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay* VRExtendedDisplay()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VREXTENDEDDISPLAY_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRSettings* VRSettings()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSETTINGS_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRApplications* VRApplications()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRApplications*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRAPPLICATIONS_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots* VRScreenshots()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRSCREENSHOTS_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera* VRTrackedCamera()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_COPENVRCONTEXT_VRTRACKEDCAMERA_OFFSET))(this);
		}
	};
}
