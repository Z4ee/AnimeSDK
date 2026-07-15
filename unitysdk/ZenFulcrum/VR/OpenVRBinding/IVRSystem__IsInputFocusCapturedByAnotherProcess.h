#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D269950)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D269980)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D269940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2698D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__IsInputFocusCapturedByAnotherProcess_TypeDefinitionIndex = 36774;

	class IVRSystem__IsInputFocusCapturedByAnotherProcess : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
