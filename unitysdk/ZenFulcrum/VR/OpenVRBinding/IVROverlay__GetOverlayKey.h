#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FA010)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FA0D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F9C10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F9BF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetOverlayKey_TypeDefinitionIndex = 35826;

	class IVROverlay__GetOverlayKey : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt64 ulOverlayHandle, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_INVOKE_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pError);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 ulOverlayHandle, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_BEGININVOKE_OFFSET))(this, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVROverlayError& pError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVROverlayError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETOVERLAYKEY_ENDINVOKE_OFFSET))(this, pError, result);
		}
	};
}
