#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B517A30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B517A60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B517A20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5179B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__CompositorBringToFront_TypeDefinitionIndex = 36095;

	class IVRCompositor__CompositorBringToFront : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__COMPOSITORBRINGTOFRONT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
