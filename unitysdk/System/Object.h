#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_OBJECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18740B90)
#define SYSTEM_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18740B80)
#define SYSTEM_OBJECT_FIELDGETTER_OFFSET UNITYSDK_OFFSET(0x18740C60)
#define SYSTEM_OBJECT_FIELDSETTER_OFFSET UNITYSDK_OFFSET(0x18740C70)
#define SYSTEM_OBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18740BD0)
#define SYSTEM_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18740BE0)
#define SYSTEM_OBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x18740C00)
#define SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18740BF0)
#define SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET UNITYSDK_OFFSET(0x187409E0)
#define SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET UNITYSDK_OFFSET(0x18740C50)
#define SYSTEM_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18740C10)
#define SYSTEM_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1873A200)

namespace System
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 413;

	class Object : public Il2CppObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_1_OFFSET))(a1, a2);
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

		static ::System::Boolean ReferenceEquals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET))(a1, a2);
		}

		static ::System::Int32 InternalGetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET))(a1);
		}

		::System::Void FieldGetter(::System::String* a1, ::System::String* a2, ::System::Object*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDGETTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FieldSetter(::System::String* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDSETTER_OFFSET))(this, a1, a2, a3);
		}
	};
}
