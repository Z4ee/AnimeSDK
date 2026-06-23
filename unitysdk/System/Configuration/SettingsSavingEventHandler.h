#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::ComponentModel { class CancelEventArgs; }

#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEC8540)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEC8580)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEC8500)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC84C0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsSavingEventHandler_TypeDefinitionIndex = 4197;

	class SettingsSavingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::ComponentModel::CancelEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CancelEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ComponentModel::CancelEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
