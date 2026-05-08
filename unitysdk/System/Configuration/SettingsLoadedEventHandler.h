#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Configuration { class SettingsLoadedEventArgs; }

#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19EE8DF0)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19EE8E30)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19EE8DB0)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE8D70)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsLoadedEventHandler_TypeDefinitionIndex = 4196;

	class SettingsLoadedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Configuration::SettingsLoadedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Configuration::SettingsLoadedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
