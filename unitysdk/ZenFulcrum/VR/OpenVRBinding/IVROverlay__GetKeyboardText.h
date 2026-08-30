#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB8430)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB8490)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB8420)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB83A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetKeyboardText_TypeDefinitionIndex = 37835;

	class IVROverlay__GetKeyboardText : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::System::Text::StringBuilder* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
