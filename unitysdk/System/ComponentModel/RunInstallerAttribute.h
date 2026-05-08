#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA95EE0)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA95F60)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GET_RUNINSTALLER_OFFSET UNITYSDK_OFFSET(0x1AA95ED0)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AA95F70)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA96050)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA95EC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunInstallerAttribute_TypeDefinitionIndex = 2977;

	class RunInstallerAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::RunInstallerAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::RunInstallerAttribute**)Il2CppClass::FromTypeDefinitionIndex(RunInstallerAttribute_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}
		static ::System::ComponentModel::RunInstallerAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::RunInstallerAttribute**)Il2CppClass::FromTypeDefinitionIndex(RunInstallerAttribute_TypeDefinitionIndex)->GetStaticField(0x3AC8);
		}
		static ::System::ComponentModel::RunInstallerAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::RunInstallerAttribute**)Il2CppClass::FromTypeDefinitionIndex(RunInstallerAttribute_TypeDefinitionIndex)->GetStaticField(0x3AD0);
		}
		::System::Boolean runInstaller; // 0x10

		::System::Void _ctor(::System::Boolean runInstaller)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE__CTOR_OFFSET))(this, runInstaller);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_RunInstaller()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GET_RUNINSTALLER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
