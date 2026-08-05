#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBFA4B0)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBFA550)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GET_INSTALLERTYPE_OFFSET UNITYSDK_OFFSET(0x1CBFA420)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBFA410)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFA3E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InstallerTypeAttribute_TypeDefinitionIndex = 2915;

	class InstallerTypeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _typeName; // 0x10

		::System::Void _ctor(::System::Type* installerType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE__CTOR_OFFSET))(this, installerType);
		}

		::System::Void _ctor_1(::System::String* typeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE__CTOR_1_OFFSET))(this, typeName);
		}

		::System::Type* get_InstallerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GET_INSTALLERTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
