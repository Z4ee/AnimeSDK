#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREventType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2390)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2400)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2380)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC2310)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetEventTypeNameFromEnum_TypeDefinitionIndex = 37624;

	class IVRSystem__GetEventTypeNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREventType a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREventType a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
