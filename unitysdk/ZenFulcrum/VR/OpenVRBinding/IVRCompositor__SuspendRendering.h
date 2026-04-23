#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F1B80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F1BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F1810)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F17F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SuspendRendering_TypeDefinitionIndex = 35809;

	class IVRCompositor__SuspendRendering : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean bSuspend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_INVOKE_OFFSET))(this, bSuspend);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bSuspend, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_BEGININVOKE_OFFSET))(this, bSuspend, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUSPENDRENDERING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
