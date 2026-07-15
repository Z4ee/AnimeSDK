#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/StringComparer.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x18CEECA0)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18CEEEC0)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18CEED70)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x18CEEF20)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18CEEE30)
#define SYSTEM_CULTUREAWARECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEEBE0)

namespace System
{
	inline static constexpr unsigned int CultureAwareComparer_TypeDefinitionIndex = 330;

	class CultureAwareComparer : public ::System::StringComparer
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10
		::System::Globalization::CompareOptions _options; // 0x18
		::System::Boolean _ignoreCase; // 0x1C

		::System::Void _ctor(::System::Globalization::CultureInfo* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
