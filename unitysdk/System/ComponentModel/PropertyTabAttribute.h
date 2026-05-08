#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/ComponentModel/PropertyTabScope.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19ADDF00)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19ADDE90)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19ADE090)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSES_OFFSET UNITYSDK_OFFSET(0x19ADD890)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSNAMES_OFFSET UNITYSDK_OFFSET(0x19ADDD80)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABSCOPES_OFFSET UNITYSDK_OFFSET(0x19ADDE80)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_1_OFFSET UNITYSDK_OFFSET(0x19ADE4A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_2_OFFSET UNITYSDK_OFFSET(0x19ADE0B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET UNITYSDK_OFFSET(0x19ADE0A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19ADD650)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19ADD7A0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19ADD660)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19ADD7B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADD600)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyTabAttribute_TypeDefinitionIndex = 3021;

	class PropertyTabAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::ComponentModel::PropertyTabScope>* tabScopes; // 0x10
		::Il2CppArray<::System::Type*>* tabClasses; // 0x18
		::Il2CppArray<::System::String*>* tabClassNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* tabClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_1_OFFSET))(this, tabClass);
		}

		::System::Void _ctor_2(::System::String* tabClassName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_2_OFFSET))(this, tabClassName);
		}

		::System::Void _ctor_3(::System::Type* tabClass, ::System::ComponentModel::PropertyTabScope tabScope)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::ComponentModel::PropertyTabScope))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_3_OFFSET))(this, tabClass, tabScope);
		}

		::System::Void _ctor_4(::System::String* tabClassName, ::System::ComponentModel::PropertyTabScope tabScope)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::ComponentModel::PropertyTabScope))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE__CTOR_4_OFFSET))(this, tabClassName, tabScope);
		}

		::Il2CppArray<::System::Type*>* get_TabClasses()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_TabClassNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::ComponentModel::PropertyTabScope>* get_TabScopes()
		{
			return ((::Il2CppArray<::System::ComponentModel::PropertyTabScope>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABSCOPES_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::ComponentModel::PropertyTabAttribute* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::PropertyTabAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Void InitializeArrays(::Il2CppArray<::System::String*>* tabClassNames, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>* tabScopes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET))(this, tabClassNames, tabScopes);
		}

		::System::Void InitializeArrays_1(::Il2CppArray<::System::Type*>* tabClasses, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>* tabScopes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_1_OFFSET))(this, tabClasses, tabScopes);
		}

		::System::Void InitializeArrays_2(::Il2CppArray<::System::String*>* tabClassNames, ::Il2CppArray<::System::Type*>* tabClasses, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>* tabScopes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::ComponentModel::PropertyTabScope>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_2_OFFSET))(this, tabClassNames, tabClasses, tabScopes);
		}
	};
}
