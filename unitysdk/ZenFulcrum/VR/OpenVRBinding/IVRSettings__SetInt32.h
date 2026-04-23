#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A7183F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7184A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A717D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A717D10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__SetInt32_TypeDefinitionIndex = 35928;

	class IVRSettings__SetInt32 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Int32 nValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, nValue, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::System::Int32 nValue, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, nValue, peError, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__SETINT32_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
