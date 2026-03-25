#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD3E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CBD080)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD060)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayErrorNameFromEnum_TypeDefinitionIndex = 30110;

	class IVROverlay__GetOverlayErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVROverlayError error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_INVOKE_OFFSET))(this, error);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, error, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
