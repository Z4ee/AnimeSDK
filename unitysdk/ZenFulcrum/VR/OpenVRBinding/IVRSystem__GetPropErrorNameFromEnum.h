#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71FB40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71FBB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71F850)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71F830)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetPropErrorNameFromEnum_TypeDefinitionIndex = 35680;

	class IVRSystem__GetPropErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_INVOKE_OFFSET))(this, error);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, error, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROPERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
