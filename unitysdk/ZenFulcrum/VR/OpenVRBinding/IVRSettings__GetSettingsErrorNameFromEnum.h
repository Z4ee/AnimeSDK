#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7157F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A715860)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A715500)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7154E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetSettingsErrorNameFromEnum_TypeDefinitionIndex = 35925;

	class IVRSettings__GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError eError)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_INVOKE_OFFSET))(this, eError);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError eError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, eError, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
