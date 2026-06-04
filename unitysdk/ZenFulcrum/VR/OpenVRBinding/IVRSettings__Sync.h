#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B524450)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5244E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B524440)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5243D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__Sync_TypeDefinitionIndex = 36226;

	class IVRSettings__Sync : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Boolean a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
