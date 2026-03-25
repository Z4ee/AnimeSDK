#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDDA60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDDAF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDD730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDD710)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__Sync_TypeDefinitionIndex = 30206;

	class IVRSettings__Sync : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Boolean bForce, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_INVOKE_OFFSET))(this, bForce, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bForce, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_BEGININVOKE_OFFSET))(this, bForce, peError, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SYNC_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
