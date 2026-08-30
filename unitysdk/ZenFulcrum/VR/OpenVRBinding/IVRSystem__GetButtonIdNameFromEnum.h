#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRButtonId.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1BC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE1B50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetButtonIdNameFromEnum_TypeDefinitionIndex = 37629;

	class IVRSystem__GetButtonIdNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
