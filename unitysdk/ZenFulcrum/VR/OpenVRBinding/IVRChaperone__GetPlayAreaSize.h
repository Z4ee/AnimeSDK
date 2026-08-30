#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEC20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEC90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F7360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FEBA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetPlayAreaSize_TypeDefinitionIndex = 37689;

	class IVRChaperone__GetPlayAreaSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single& a1, ::System::Single& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::Single& a1, ::System::Single& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREASIZE_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
