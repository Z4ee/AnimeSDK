#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB6260)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB6290)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB6250)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB61E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__PostPresentHandoff_TypeDefinitionIndex = 37725;

	class IVRCompositor__PostPresentHandoff : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__POSTPRESENTHANDOFF_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
