#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DATA_OPERATORS_ISARITHMETICAL_OFFSET UNITYSDK_OFFSET(0x1AC6A900)
#define SYSTEM_DATA_OPERATORS_ISLOGICAL_OFFSET UNITYSDK_OFFSET(0x1AC6A920)
#define SYSTEM_DATA_OPERATORS_ISRELATIONAL_OFFSET UNITYSDK_OFFSET(0x1AC6A940)
#define SYSTEM_DATA_OPERATORS_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1AC6A950)
#define SYSTEM_DATA_OPERATORS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC6AA30)
#define SYSTEM_DATA_OPERATORS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC6AB10)
#define SYSTEM_DATA_OPERATORS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6A8F0)

namespace System::Data
{
	inline static constexpr unsigned int Operators_TypeDefinitionIndex = 37033;

	class Operators : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_looks()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Operators_TypeDefinitionIndex)->GetStaticField(0x27630);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_priority()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Operators_TypeDefinitionIndex)->GetStaticField(0x27638);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsArithmetical(::System::Int32 op)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISARITHMETICAL_OFFSET))(op);
		}

		static ::System::Boolean IsLogical(::System::Int32 op)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISLOGICAL_OFFSET))(op);
		}

		static ::System::Boolean IsRelational(::System::Int32 op)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISRELATIONAL_OFFSET))(op);
		}

		static ::System::Int32 Priority(::System::Int32 op)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_PRIORITY_OFFSET))(op);
		}

		static ::System::String* ToString(::System::Int32 op)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_TOSTRING_OFFSET))(op);
		}
	};
}
