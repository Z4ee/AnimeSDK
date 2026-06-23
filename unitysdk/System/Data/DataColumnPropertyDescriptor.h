#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1E302100)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E302070)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3020D0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1E3022C0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E301D90)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E302010)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISBROWSABLE_OFFSET UNITYSDK_OFFSET(0x1E302550)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E302040)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1E301FF0)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1E302340)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1E302400)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1E302540)
#define SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E301D50)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnPropertyDescriptor_TypeDefinitionIndex = 38571;

	class DataColumnPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Data::DataColumn* _Column_k__BackingField; // 0x88

		::System::Void _ctor(::System::Data::DataColumn* dataColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, dataColumn);
		}

		::System::ComponentModel::AttributeCollection* get_Attributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean CanResetValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, component);
		}

		::System::Object* GetValue(::System::Object* component)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, component);
		}

		::System::Void ResetValue(::System::Object* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, component);
		}

		::System::Void SetValue(::System::Object* component, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, component, value);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, component);
		}

		::System::Boolean get_IsBrowsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNPROPERTYDESCRIPTOR_GET_ISBROWSABLE_OFFSET))(this);
		}
	};
}
