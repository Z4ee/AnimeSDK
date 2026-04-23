#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7145E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A714670)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A713FA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A713F80)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetBool_TypeDefinitionIndex = 35931;

	class IVRSettings__GetBool : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETBOOL_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
