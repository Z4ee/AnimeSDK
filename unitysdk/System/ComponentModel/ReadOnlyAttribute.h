#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D616160)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D6161C0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D616150)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D6161D0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D616260)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D616140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 2966;

	class ReadOnlyAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::ReadOnlyAttribute** StaticGet_No()
		{
			return (::System::ComponentModel::ReadOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x2BD0);
		}
		static ::System::ComponentModel::ReadOnlyAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::ReadOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x2BD8);
		}
		static ::System::ComponentModel::ReadOnlyAttribute** StaticGet_Yes()
		{
			return (::System::ComponentModel::ReadOnlyAttribute**)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyAttribute_TypeDefinitionIndex)->GetStaticField(0x2BE0);
		}
		::System::Boolean isReadOnly; // 0x10

		::System::Void _ctor(::System::Boolean isReadOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE__CTOR_OFFSET))(this, isReadOnly);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
