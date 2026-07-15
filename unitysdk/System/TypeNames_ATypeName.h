#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class TypeName; }

#define SYSTEM_TYPENAMES_ATYPENAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A75F9E0)
#define SYSTEM_TYPENAMES_ATYPENAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A75F900)
#define SYSTEM_TYPENAMES_ATYPENAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A75F950)
#define SYSTEM_TYPENAMES_ATYPENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75E3B0)

namespace System
{
	inline static constexpr unsigned int TypeNames_ATypeName_TypeDefinitionIndex = 438;

	class TypeNames_ATypeName : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::TypeName* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TypeName*))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAMES_ATYPENAME_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
