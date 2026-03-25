#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/MemberTypes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MEMBERINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x16375420)
#define SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x16375300)
#define SYSTEM_REFLECTION_MEMBERINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16373790)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x16375350)
#define SYSTEM_REFLECTION_MEMBERINFO_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x16375360)
#define SYSTEM_REFLECTION_MEMBERINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1636C9C0)
#define SYSTEM_REFLECTION_MEMBERINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16375410)
#define SYSTEM_REFLECTION_MEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16373760)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfo_TypeDefinitionIndex = 571;

	class MemberInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		::System::Int32 get_MetadataToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_METADATATOKEN_OFFSET))(this);
		}

		::System::Reflection::Module* get_Module()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GET_MODULE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MemberInfo* left, ::System::Reflection::MemberInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}
