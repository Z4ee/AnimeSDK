#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CompareOptions.h"
#include "unitysdk/System/StringComparer.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1628AD80)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1628AEC0)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1628ADE0)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1628AF90)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1628AE30)
#define SYSTEM_CULTUREAWARECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1628AD20)

namespace System
{
	inline static constexpr unsigned int CultureAwareComparer_TypeDefinitionIndex = 331;

	class CultureAwareComparer : public ::System::StringComparer
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10
		::System::Boolean _ignoreCase; // 0x18
		::System::Globalization::CompareOptions _options; // 0x1C

		::System::Void _ctor(::System::Globalization::CultureInfo* culture, ::System::Boolean ignoreCase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER__CTOR_OFFSET))(this, culture, ignoreCase);
		}

		::System::Int32 Compare(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET))(this, x, y);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::String* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_1_OFFSET))(this);
		}
	};
}
