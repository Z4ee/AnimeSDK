#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CCE7C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CCE8B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CCE350)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCE330)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowKeyboard_TypeDefinitionIndex = 30172;

	class IVROverlay__ShowKeyboard : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::Int32 eInputMode, ::System::Int32 eLineInputMode, ::System::String* pchDescription, ::System::UInt32 unCharMax, ::System::String* pchExistingText, ::System::Boolean bUseMinimalMode, ::System::UInt64 uUserValue)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_INVOKE_OFFSET))(this, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 eInputMode, ::System::Int32 eLineInputMode, ::System::String* pchDescription, ::System::UInt32 unCharMax, ::System::String* pchExistingText, ::System::Boolean bUseMinimalMode, ::System::UInt64 uUserValue, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_BEGININVOKE_OFFSET))(this, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
