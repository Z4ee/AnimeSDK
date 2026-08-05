#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class RemoteSettings_UpdatedEventHandler; }

#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1FC43A70)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FC43A90)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0x1FC437C0)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteSettings_TypeDefinitionIndex = 93729;

	class RemoteSettings : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_BeforeFetchFromServer()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x52420);
		}
		static ::UnityEngine::RemoteSettings_UpdatedEventHandler** StaticGet_Updated()
		{
			return (::UnityEngine::RemoteSettings_UpdatedEventHandler**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x52428);
		}
		static ::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>** StaticGet_Completed()
		{
			return (::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RemoteSettings_TypeDefinitionIndex)->GetStaticField(0x52430);
		}

		static ::System::Void RemoteSettingsUpdated(::System::Boolean wasLastUpdatedFromServer)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET))(wasLastUpdatedFromServer);
		}

		static ::System::Void RemoteSettingsBeforeFetchFromServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET))();
		}

		static ::System::Void RemoteSettingsUpdateCompleted(::System::Boolean wasLastUpdatedFromServer, ::System::Boolean settingsChanged, ::System::Int32 response)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET))(wasLastUpdatedFromServer, settingsChanged, response);
		}
	};
}
