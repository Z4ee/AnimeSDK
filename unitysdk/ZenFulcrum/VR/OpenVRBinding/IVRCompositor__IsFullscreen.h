#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED61C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED61F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED61B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6140)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__IsFullscreen_TypeDefinitionIndex = 37739;

	class IVRCompositor__IsFullscreen : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISFULLSCREEN_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
