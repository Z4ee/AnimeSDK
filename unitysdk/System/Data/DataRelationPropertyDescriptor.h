#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Data { class DataRelation; }

#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_CANRESETVALUE_OFFSET UNITYSDK_OFFSET(0x1F0B2710)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0B2680)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0B26E0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1F0B2720)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F0B2610)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1F0B2640)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1F0B2650)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1F0B27B0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1F0B27C0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR_SHOULDSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1F0B27D0)
#define SYSTEM_DATA_DATARELATIONPROPERTYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B25C0)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationPropertyDescriptor_TypeDefinitionIndex = 39251;

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
