#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Configuration { class SettingChangingEventArgs; }

#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19BB0360)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19BB03A0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BB0320)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB02E0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingChangingEventHandler_TypeDefinitionIndex = 4194;

	class SettingChangingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Configuration::SettingChangingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingChangingEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Configuration::SettingChangingEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
