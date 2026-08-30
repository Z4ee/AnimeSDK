#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5B370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5B3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF5B360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF5B2F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ResetSeatedZeroPose_TypeDefinitionIndex = 37605;

	class IVRSystem__ResetSeatedZeroPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__RESETSEATEDZEROPOSE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
