#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED62A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED62D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6290)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6220)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__IsMirrorWindowVisible_TypeDefinitionIndex = 37745;

	class IVRCompositor__IsMirrorWindowVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__ISMIRRORWINDOWVISIBLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
