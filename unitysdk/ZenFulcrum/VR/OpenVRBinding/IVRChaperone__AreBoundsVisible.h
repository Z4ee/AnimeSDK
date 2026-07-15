#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF68A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF68D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBEF6F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF6830)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__AreBoundsVisible_TypeDefinitionIndex = 36835;

	class IVRChaperone__AreBoundsVisible : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__AREBOUNDSVISIBLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
