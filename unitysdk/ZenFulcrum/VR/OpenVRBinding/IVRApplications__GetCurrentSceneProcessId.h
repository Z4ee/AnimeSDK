#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF59F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBF5A20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBEF3D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF5980)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetCurrentSceneProcessId_TypeDefinitionIndex = 36827;

	class IVRApplications__GetCurrentSceneProcessId : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETCURRENTSCENEPROCESSID_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
