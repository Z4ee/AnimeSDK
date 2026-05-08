#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/MemberTypes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x19601970)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_1F960A1B5E8684AA_OFFSET UNITYSDK_OFFSET(0x19601830)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_25CFC3357C613FED_OFFSET UNITYSDK_OFFSET(0x19601730)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_5B4DF2D4F0210D87_OFFSET UNITYSDK_OFFSET(0x19601740)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_6A7626FD5C20BFF6_OFFSET UNITYSDK_OFFSET(0x196017A0)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_7101133FC49589A6_OFFSET UNITYSDK_OFFSET(0x19601960)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19601720)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x19601790)
#define SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19601980)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfo_TypeDefinitionIndex = 545;

	class MemberInfo : public ::System::Object
	{
	public:
		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>* Method_1_25CFC3357C613FED()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_25CFC3357C613FED_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_1_5B4DF2D4F0210D87()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_5B4DF2D4F0210D87_OFFSET))(this);
		}

		::System::Int32 Method_1_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Reflection::Module* Method_1_6A7626FD5C20BFF6()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_6A7626FD5C20BFF6_OFFSET))(this);
		}

		static ::System::Boolean Method_1_1F960A1B5E8684AA(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_1F960A1B5E8684AA_OFFSET))(left, right);
		}

		static ::System::Boolean Method_1_7101133FC49589A6(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_7101133FC49589A6_OFFSET))(left, right);
		}

		::System::Boolean Method_1_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}
	};
}
