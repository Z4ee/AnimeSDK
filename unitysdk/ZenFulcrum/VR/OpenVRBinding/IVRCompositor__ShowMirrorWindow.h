#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5A50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5A80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB57B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB5790)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ShowMirrorWindow_TypeDefinitionIndex = 30082;

	class IVRCompositor__ShowMirrorWindow : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SHOWMIRRORWINDOW_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
