#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1AFC8950)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AFC8940)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AFC8810)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1AFC8880)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x1AFC88E0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFC8780)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeExtensions_TypeDefinitionIndex = 534;

	class CustomAttributeExtensions : public ::System::Object
	{
	public:
		static ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* a1, ::System::Type* a2)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_1(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_1_OFFSET))(a1, a2);
		}

		static ::System::Attribute* GetCustomAttribute_2(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Attribute* GetCustomAttribute_3(::System::Reflection::ParameterInfo* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::Assembly* a1, ::System::Type* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_1_OFFSET))(a1, a2);
		}
	};
}
