#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_STANDARDTOOLWINDOWS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1939A340)
#define SYSTEM_COMPONENTMODEL_DESIGN_STANDARDTOOLWINDOWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1939A330)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int StandardToolWindows_TypeDefinitionIndex = 3096;

	class StandardToolWindows : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_RelatedLinks()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x1260);
		}
		static ::System::Guid* StaticGet_ObjectBrowser()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x1270);
		}
		static ::System::Guid* StaticGet_ProjectExplorer()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x1280);
		}
		static ::System::Guid* StaticGet_Toolbox()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x1290);
		}
		static ::System::Guid* StaticGet_PropertyBrowser()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x12A0);
		}
		static ::System::Guid* StaticGet_ServerExplorer()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x12B0);
		}
		static ::System::Guid* StaticGet_OutputWindow()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x12C0);
		}
		static ::System::Guid* StaticGet_TaskList()
		{
			return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(StandardToolWindows_TypeDefinitionIndex)->GetStaticField(0x12D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_STANDARDTOOLWINDOWS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_STANDARDTOOLWINDOWS__CCTOR_OFFSET))();
		}
	};
}
