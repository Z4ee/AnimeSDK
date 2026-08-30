#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_1_OFFSET UNITYSDK_OFFSET(0x1BDA72F0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_2_OFFSET UNITYSDK_OFFSET(0x1BDA73E0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x1BDA7260)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x1BDA7180)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BDA7100)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDA71F0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDA71C0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1BDA6FC0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDA6D90)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BDA6EE0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDA7460)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA7450)

namespace System::Resources
{
	inline static constexpr unsigned int FastResourceComparer_TypeDefinitionIndex = 516;

	class FastResourceComparer : public ::System::Object
	{
	public:
		static ::System::Resources::FastResourceComparer** StaticGet_Default()
		{
			return (::System::Resources::FastResourceComparer**)Il2CppClass::FromTypeDefinitionIndex(FastResourceComparer_TypeDefinitionIndex)->GetStaticField(0x11800);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_1_OFFSET))(this, a1);
		}

		static ::System::Int32 HashFunction(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET))(a1);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_1_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 CompareOrdinal(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareOrdinal_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareOrdinal_2(::System::Byte* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_2_OFFSET))(a1, a2, a3);
		}
	};
}
