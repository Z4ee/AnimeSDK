#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FC940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FC970)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F6BE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FC8D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__CancelApplicationLaunch_TypeDefinitionIndex = 37666;

	class IVRApplications__CancelApplicationLaunch : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__CANCELAPPLICATIONLAUNCH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
