#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B523920)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B523990)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B523910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5238A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetSettingsErrorNameFromEnum_TypeDefinitionIndex = 36225;

	class IVRSettings__GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETSETTINGSERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
