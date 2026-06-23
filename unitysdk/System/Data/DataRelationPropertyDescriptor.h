#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Data { class DataRelation; }

#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1DC623A0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC62310)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC62370)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1DC623B0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DC622A0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1DC622D0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1DC622E0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1DC62440)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1DC62450)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC62460)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC62250)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationPropertyDescriptor_TypeDefinitionIndex = 38590;

	class DataRelationPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Data::DataRelation* _Relation_k__BackingField; // 0x88

		::System::Void _ctor(::System::Data::DataRelation* dataRelation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR__CTOR_OFFSET))(this, dataRelation);
		}

		::System::Type* get_ComponentType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean CanResetValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET))(this, component);
		}

		::System::Object* GetValue(::System::Object* component)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(this, component);
		}

		::System::Void ResetValue(::System::Object* component)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET))(this, component);
		}

		::System::Void SetValue(::System::Object* component, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(this, component, value);
		}

		::System::Boolean ShouldSerializeValue(::System::Object* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET))(this, component);
		}
	};
}
