#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB3440)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB3470)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB31A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB3180)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__HideMirrorWindow_TypeDefinitionIndex = 30083;

	class IVRCompositor__HideMirrorWindow : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
