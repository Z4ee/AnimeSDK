#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F7770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F77D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F7210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F71F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetKeyboardText_TypeDefinitionIndex = 35894;

	class IVROverlay__GetKeyboardText : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::Text::StringBuilder* pchText, ::System::UInt32 cchText)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_INVOKE_OFFSET))(this, pchText, cchText);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchText, ::System::UInt32 cchText, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_BEGININVOKE_OFFSET))(this, pchText, cchText, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETKEYBOARDTEXT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
