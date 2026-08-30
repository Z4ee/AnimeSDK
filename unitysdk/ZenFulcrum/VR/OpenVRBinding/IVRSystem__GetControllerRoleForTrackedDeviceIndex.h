#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedControllerRole.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1E10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1E60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE1E00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE1D90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeDefinitionIndex = 37612;

	class IVRSystem__GetControllerRoleForTrackedDeviceIndex : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole Invoke(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
