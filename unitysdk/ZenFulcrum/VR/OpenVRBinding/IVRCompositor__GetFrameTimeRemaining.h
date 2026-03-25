#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB0590)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB05C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB02E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB02C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetFrameTimeRemaining_TypeDefinitionIndex = 30067;

	class IVRCompositor__GetFrameTimeRemaining : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Single EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETFRAMETIMEREMAINING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
