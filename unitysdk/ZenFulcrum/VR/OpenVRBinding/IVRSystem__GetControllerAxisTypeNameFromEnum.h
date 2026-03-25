#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRControllerAxisType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDFDB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDFE20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDFAC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDFAA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetControllerAxisTypeNameFromEnum_TypeDefinitionIndex = 29969;

	class IVRSystem__GetControllerAxisTypeNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType eAxisType)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_INVOKE_OFFSET))(this, eAxisType);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_BEGININVOKE_OFFSET))(this, eAxisType, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERAXISTYPENAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
