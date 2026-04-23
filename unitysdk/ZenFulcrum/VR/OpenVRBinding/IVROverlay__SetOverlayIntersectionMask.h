#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VROverlayIntersectionMaskPrimitive_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A704BB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A704C80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A704810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7047F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayIntersectionMask_TypeDefinitionIndex = 35898;

	class IVROverlay__SetOverlayIntersectionMask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, ::System::UInt32 unNumMaskPrimitives, ::System::UInt32 unPrimitiveSize)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_INVOKE_OFFSET))(this, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, ::System::UInt32 unNumMaskPrimitives, ::System::UInt32 unPrimitiveSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t&, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VROverlayIntersectionMaskPrimitive_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYINTERSECTIONMASK_ENDINVOKE_OFFSET))(this, pMaskPrimitives, result);
		}
	};
}
