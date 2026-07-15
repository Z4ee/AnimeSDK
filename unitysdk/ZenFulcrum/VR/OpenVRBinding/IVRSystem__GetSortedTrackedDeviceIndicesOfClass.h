#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceClass.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D268F80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D269040)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D268F50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D268EE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeDefinitionIndex = 36749;

	class IVRSystem__GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETSORTEDTRACKEDDEVICEINDICESOFCLASS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
