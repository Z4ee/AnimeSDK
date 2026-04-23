#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A702D40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A702DD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7029F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7029D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetKeyboardTransformAbsolute_TypeDefinitionIndex = 35896;

	class IVROverlay__SetKeyboardTransformAbsolute : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_INVOKE_OFFSET))(this, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eTrackingOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_BEGININVOKE_OFFSET))(this, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETKEYBOARDTRANSFORMABSOLUTE_ENDINVOKE_OFFSET))(this, pmatTrackingOriginToKeyboardTransform, result);
		}
	};
}
