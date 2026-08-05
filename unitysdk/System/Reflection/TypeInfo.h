#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Type.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_10372C4B716C4BA6_OFFSET UNITYSDK_OFFSET(0x1E40FFF0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_24C644C84DB553A1_OFFSET UNITYSDK_OFFSET(0x1E410300)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_3ED8F01258C5B60B_OFFSET UNITYSDK_OFFSET(0x1E4101D0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_4891E76BC6E5EB52_OFFSET UNITYSDK_OFFSET(0x1E410320)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_5DE4AAF019DFFDBA_OFFSET UNITYSDK_OFFSET(0x1E410340)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_77BB107366234CF5_OFFSET UNITYSDK_OFFSET(0x1E4102E0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1E40FFE0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_930C6E00D64F75B2_OFFSET UNITYSDK_OFFSET(0x1E410230)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1E410000)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_C3263B760A733303_OFFSET UNITYSDK_OFFSET(0x1E410010)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_D1BEE4831CE92503_OFFSET UNITYSDK_OFFSET(0x1E4101B0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_D4DF6603B24E81E6_OFFSET UNITYSDK_OFFSET(0x1E4102C0)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 564;

	class TypeInfo : public ::System::Type
	{
	public:
		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::TypeInfo* Method_3_10372C4B716C4BA6()
		{
			return ((::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_10372C4B716C4BA6_OFFSET))(this);
		}

		::System::Type* Method_3_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_A99467CE9479C990_OFFSET))(this);
		}

		::System::Boolean Method_3_C3263B760A733303(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_C3263B760A733303_OFFSET))(this, typeInfo);
		}

		::System::Reflection::FieldInfo* Method_3_D1BEE4831CE92503(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_D1BEE4831CE92503_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Method_3_3ED8F01258C5B60B(::System::String* name)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_3ED8F01258C5B60B_OFFSET))(this, name);
		}

		::System::Reflection::PropertyInfo* Method_3_930C6E00D64F75B2(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_930C6E00D64F75B2_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* Method_3_D4DF6603B24E81E6()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_D4DF6603B24E81E6_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* Method_3_77BB107366234CF5()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_77BB107366234CF5_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Method_3_24C644C84DB553A1()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_24C644C84DB553A1_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* Method_3_4891E76BC6E5EB52()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_4891E76BC6E5EB52_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* Method_3_5DE4AAF019DFFDBA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_5DE4AAF019DFFDBA_OFFSET))(this);
		}
	};
}
