#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET UNITYSDK_OFFSET(0x1C2C06F0)
#define SYSTEM_VALUETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C2DA780)
#define SYSTEM_VALUETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C2DA7A0)
#define SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET UNITYSDK_OFFSET(0x1C2DA770)
#define SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C2DA790)
#define SYSTEM_VALUETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C2DA840)
#define SYSTEM_VALUETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C1E10)

namespace System
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 435;

	class ValueType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean InternalEquals(::System::Object* o1, ::System::Object* o2, ::Il2CppArray<::System::Object*>*& fields)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET))(o1, o2, fields);
		}

		static ::System::Boolean DefaultEquals(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET))(o1, o2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Int32 InternalGetHashCode(::System::Object* o, ::Il2CppArray<::System::Object*>*& fields)
		{
			return ((::System::Int32(*)(::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET))(o, fields);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_TOSTRING_OFFSET))(this);
		}
	};
}
