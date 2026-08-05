#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E27EBE0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E27EC70)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E27EBD0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_10_OFFSET UNITYSDK_OFFSET(0x1E27EBC0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E27E960)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E27E990)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E27E9E0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E27EA30)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1E27EA80)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1E27EAD0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1E27EB30)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1E27EB60)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1E27EBB0)
#define SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E27E880)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AmbientValueAttribute_TypeDefinitionIndex = 2807;

	class AmbientValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* value; // 0x10

		::System::Void _ctor(::System::Type* type, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_OFFSET))(this, type, value);
		}

		::System::Void _ctor_1(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_4_OFFSET))(this, value);
		}

		::System::Void _ctor_5(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_5_OFFSET))(this, value);
		}

		::System::Void _ctor_6(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_6_OFFSET))(this, value);
		}

		::System::Void _ctor_7(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_7_OFFSET))(this, value);
		}

		::System::Void _ctor_8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_8_OFFSET))(this, value);
		}

		::System::Void _ctor_9(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_9_OFFSET))(this, value);
		}

		::System::Void _ctor_10(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE__CTOR_10_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_AMBIENTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
