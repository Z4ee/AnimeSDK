#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSettingsError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD9ED0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD9F60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD9890)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD9870)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSettings__GetInt32_TypeDefinitionIndex = 30212;

	class IVRSettings__GetInt32 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_INVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchSection, ::System::String* pchSettingsKey, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_BEGININVOKE_OFFSET))(this, pchSection, pchSettingsKey, peError, callback, object);
		}

		::System::Int32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRSettingsError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSETTINGS__GETINT32_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
