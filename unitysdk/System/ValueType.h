#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET UNITYSDK_OFFSET(0x1D201720)
#define SYSTEM_VALUETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D201950)
#define SYSTEM_VALUETYPE_GETHASHCODEOFPTR_OFFSET UNITYSDK_OFFSET(0x1D201A70)
#define SYSTEM_VALUETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D201970)
#define SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET UNITYSDK_OFFSET(0x1D201710)
#define SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D201960)
#define SYSTEM_VALUETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D201AD0)
#define SYSTEM_VALUETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D201700)

namespace System
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 447;

	class ValueType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean InternalEquals(::System::Object* a1, ::System::Object* a2, ::Il2CppArray<::System::Object*>*& a3)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DefaultEquals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Int32 InternalGetHashCode(::System::Object* a1, ::Il2CppArray<::System::Object*>*& a2)
		{
			return ((::System::Int32(*)(::System::Object*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 GetHashCodeOfPtr(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_GETHASHCODEOFPTR_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_TOSTRING_OFFSET))(this);
		}
	};
}
