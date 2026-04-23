#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREventType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71D020)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71D090)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71CD30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71CD10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetEventTypeNameFromEnum_TypeDefinitionIndex = 35683;

	class IVRSystem__GetEventTypeNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREventType eType)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_INVOKE_OFFSET))(this, eType);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_BEGININVOKE_OFFSET))(this, eType, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEVENTTYPENAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
