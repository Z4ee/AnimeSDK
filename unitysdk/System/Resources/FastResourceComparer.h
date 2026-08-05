#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_1_OFFSET UNITYSDK_OFFSET(0x1CD4C040)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_2_OFFSET UNITYSDK_OFFSET(0x1CD4C1E0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x1CD4BEF0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1CD4BE10)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CD4BD90)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD4BE80)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD4BE50)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1CD4BBB0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD4B820)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1CD4BA20)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD4C330)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4C320)

namespace System::Resources
{
	inline static constexpr unsigned int FastResourceComparer_TypeDefinitionIndex = 500;

	class FastResourceComparer : public ::System::Object
	{
	public:
		static ::System::Resources::FastResourceComparer** StaticGet_Default()
		{
			return (::System::Resources::FastResourceComparer**)Il2CppClass::FromTypeDefinitionIndex(FastResourceComparer_TypeDefinitionIndex)->GetStaticField(0xB40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET))(this, key);
		}

		::System::Int32 GetHashCode_1(::System::String* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_1_OFFSET))(this, key);
		}

		static ::System::Int32 HashFunction(::System::String* key)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET))(key);
		}

		::System::Int32 Compare(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET))(this, a, b);
		}

		::System::Int32 Compare_1(::System::String* a, ::System::String* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_1_OFFSET))(this, a, b);
		}

		::System::Boolean Equals(::System::String* a, ::System::String* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET))(this, a, b);
		}

		::System::Boolean Equals_1(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_1_OFFSET))(this, a, b);
		}

		static ::System::Int32 CompareOrdinal(::System::String* a, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 bCharLength)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET))(a, bytes, bCharLength);
		}

		static ::System::Int32 CompareOrdinal_1(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 aCharLength, ::System::String* b)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_1_OFFSET))(bytes, aCharLength, b);
		}

		static ::System::Int32 CompareOrdinal_2(::System::Byte* a, ::System::Int32 byteLen, ::System::String* b)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_2_OFFSET))(a, byteLen, b);
		}
	};
}
