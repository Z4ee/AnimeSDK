#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B22CF60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B22D050)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B22CF00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B22CE90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowKeyboard_TypeDefinitionIndex = 36974;

	class IVROverlay__ShowKeyboard : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt32 a4, ::System::String* a5, ::System::Boolean a6, ::System::UInt64 a7)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::UInt32 a4, ::System::String* a5, ::System::Boolean a6, ::System::UInt64 a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARD_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
