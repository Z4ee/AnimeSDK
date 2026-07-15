#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2254B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2254E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2254A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B225430)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__HideMirrorWindow_TypeDefinitionIndex = 36885;

	class IVRCompositor__HideMirrorWindow : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__HIDEMIRRORWINDOW_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
