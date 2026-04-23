#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionParams_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionResults_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4E00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4EB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4A60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F4A40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ComputeOverlayIntersection_TypeDefinitionIndex = 35871;

	class IVROverlay__ComputeOverlayIntersection : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t& pParams, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t& pResults)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t&, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_INVOKE_OFFSET))(this, ulOverlayHandle, pParams, pResults);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t& pParams, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t& pResults, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t&, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pParams, pResults, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t& pParams, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t& pResults, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionParams_t&, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionResults_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__COMPUTEOVERLAYINTERSECTION_ENDINVOKE_OFFSET))(this, pParams, pResults, result);
		}
	};
}
