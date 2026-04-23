#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FD8F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FD9A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FD550)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FD530)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayTransformOverlayRelative_TypeDefinitionIndex = 35860;

	class IVROverlay__GetOverlayTransformOverlayRelative : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::UInt64& ulOverlayHandleParent, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatParentOverlayToOverlayTransform)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_INVOKE_OFFSET))(this, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::UInt64& ulOverlayHandleParent, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_BEGININVOKE_OFFSET))(this, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::UInt64& ulOverlayHandleParent, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYTRANSFORMOVERLAYRELATIVE_ENDINVOKE_OFFSET))(this, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result);
		}
	};
}
