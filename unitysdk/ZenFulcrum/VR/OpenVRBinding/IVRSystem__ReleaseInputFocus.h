#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B527900)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B527930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5278F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527880)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ReleaseInputFocus_TypeDefinitionIndex = 35991;

	class IVRSystem__ReleaseInputFocus : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RELEASEINPUTFOCUS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
