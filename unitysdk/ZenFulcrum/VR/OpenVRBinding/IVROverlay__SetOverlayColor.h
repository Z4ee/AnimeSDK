#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CC84B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CC8560)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CC8110)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC80F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayColor_TypeDefinitionIndex = 30115;

	class IVROverlay__SetOverlayColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 ulOverlayHandle, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_INVOKE_OFFSET))(this, ulOverlayHandle, fRed, fGreen, fBlue);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_BEGININVOKE_OFFSET))(this, ulOverlayHandle, fRed, fGreen, fBlue, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYCOLOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
