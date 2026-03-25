#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDBFC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDC070)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDB900)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDB8E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__SetBool_TypeDefinitionIndex = 30207;

	class IVRSettings__SetBool : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Boolean bValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, bValue, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Boolean bValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, bValue, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETBOOL_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
