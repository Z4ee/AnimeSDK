#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceClass.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE56C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE5780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE5300)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE52E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeDefinitionIndex = 29947;

	class IVRSystem__GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass eTrackedDeviceClass, ::Il2CppArray<::System::UInt32>* punTrackedDeviceIndexArray, ::System::UInt32 unTrackedDeviceIndexArrayCount, ::System::UInt32 unRelativeToTrackedDeviceIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_INVOKE_OFFSET))(this, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass eTrackedDeviceClass, ::Il2CppArray<::System::UInt32>* punTrackedDeviceIndexArray, ::System::UInt32 unTrackedDeviceIndexArrayCount, ::System::UInt32 unRelativeToTrackedDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_BEGININVOKE_OFFSET))(this, eTrackedDeviceClass, punTrackedDeviceIndexArray, unTrackedDeviceIndexArrayCount, unRelativeToTrackedDeviceIndex, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
