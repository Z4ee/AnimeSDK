#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_OBJECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16362070)
#define SYSTEM_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x16362060)
#define SYSTEM_OBJECT_FIELDGETTER_OFFSET UNITYSDK_OFFSET(0x16362140)
#define SYSTEM_OBJECT_FIELDSETTER_OFFSET UNITYSDK_OFFSET(0x16362150)
#define SYSTEM_OBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x163620B0)
#define SYSTEM_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x163620C0)
#define SYSTEM_OBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x163620E0)
#define SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x163620D0)
#define SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET UNITYSDK_OFFSET(0x16361EC0)
#define SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET UNITYSDK_OFFSET(0x16362130)
#define SYSTEM_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x163620F0)
#define SYSTEM_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1635B970)

namespace System
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 414;

	class Object : public Il2CppObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean Equals_1(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_1_OFFSET))(objA, objB);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Type* GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETTYPE_OFFSET))(this);
		}

		::System::Object* MemberwiseClone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean ReferenceEquals(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET))(objA, objB);
		}

		static ::System::Int32 InternalGetHashCode(::System::Object* o)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET))(o);
		}

		::System::Void FieldGetter(::System::String* typeName, ::System::String* fieldName, ::System::Object*& val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDGETTER_OFFSET))(this, typeName, fieldName, val);
		}

		::System::Void FieldSetter(::System::String* typeName, ::System::String* fieldName, ::System::Object* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDSETTER_OFFSET))(this, typeName, fieldName, val);
		}
	};
}
