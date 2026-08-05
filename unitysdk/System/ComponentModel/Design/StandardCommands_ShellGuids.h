#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS_SHELLGUIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB75A60)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int StandardCommands_ShellGuids_TypeDefinitionIndex = 3094;

	class StandardCommands_ShellGuids : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_guidDsdCmdId()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_ShellGuids_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
		static ::System::Guid* StaticGet_GUID_PropertyBrowserToolWindow()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_ShellGuids_TypeDefinitionIndex)->GetStaticField(0x1200);
		}
		static ::System::Guid* StaticGet_SID_SOleComponentUIManager()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_ShellGuids_TypeDefinitionIndex)->GetStaticField(0x1210);
		}
		static ::System::Guid* StaticGet_VSStandardCommandSet97()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_ShellGuids_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		static ::System::Guid* StaticGet_GUID_VSTASKCATEGORY_DATADESIGNER()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardCommands_ShellGuids_TypeDefinitionIndex)->GetStaticField(0x1230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_STANDARDCOMMANDS_SHELLGUIDS__CCTOR_OFFSET))();
		}
	};
}
