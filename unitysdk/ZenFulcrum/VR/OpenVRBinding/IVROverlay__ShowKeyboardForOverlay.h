#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDBB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDCC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBDB40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBDAD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__ShowKeyboardForOverlay_TypeDefinitionIndex = 37834;

	class IVROverlay__ShowKeyboardForOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::UInt32 a5, ::System::String* a6, ::System::Boolean a7, ::System::UInt64 a8)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::UInt32 a5, ::System::String* a6, ::System::Boolean a7, ::System::UInt64 a8, ::System::AsyncCallback* a9, ::System::Object* a10)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::String*, ::System::UInt32, ::System::String*, ::System::Boolean, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SHOWKEYBOARDFOROVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
