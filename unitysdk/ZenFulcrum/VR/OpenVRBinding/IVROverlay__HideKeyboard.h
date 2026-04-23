#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FFAC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FFAF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6FF820)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FF800)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__HideKeyboard_TypeDefinitionIndex = 35895;

	class IVROverlay__HideKeyboard : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__HIDEKEYBOARD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
