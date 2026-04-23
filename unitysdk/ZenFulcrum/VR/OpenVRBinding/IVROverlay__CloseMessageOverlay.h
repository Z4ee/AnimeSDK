#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4A00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4A30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F4760)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F4740)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__CloseMessageOverlay_TypeDefinitionIndex = 35901;

	class IVROverlay__CloseMessageOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__CLOSEMESSAGEOVERLAY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
