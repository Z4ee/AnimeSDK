#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18FA7EF0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18FA7F50)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GET_ISDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x18FA7EE0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18FA7F60)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FA8020)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FA7ED0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA7EC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectAttribute_TypeDefinitionIndex = 2851;

	class DataObjectAttribute : public ::System::Attribute
	{
	public:
		static ::System::ComponentModel::DataObjectAttribute** StaticGet_DataObject()
		{
			return (::System::ComponentModel::DataObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(DataObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2B50);
		}
		static ::System::ComponentModel::DataObjectAttribute** StaticGet_Default()
		{
			return (::System::ComponentModel::DataObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(DataObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2B58);
		}
		static ::System::ComponentModel::DataObjectAttribute** StaticGet_NonDataObject()
		{
			return (::System::ComponentModel::DataObjectAttribute**)Il2CppClass::FromTypeDefinitionIndex(DataObjectAttribute_TypeDefinitionIndex)->GetStaticField(0x2B60);
		}
		::System::Boolean _isDataObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean isDataObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CTOR_1_OFFSET))(this, isDataObject);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsDataObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GET_ISDATAOBJECT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}
	};
}
