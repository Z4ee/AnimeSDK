#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1636C730)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1636C720)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1636C5F0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1636C660)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_3_OFFSET UNITYSDK_OFFSET(0x1636C6C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1636C560)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeExtensions_TypeDefinitionIndex = 535;

	class CustomAttributeExtensions : public ::System::Object
	{
	public:
		static ::System::Attribute* GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_1_OFFSET))(element, attributeType);
		}

		static ::System::Attribute* GetCustomAttribute_2(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_2_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Attribute* GetCustomAttribute_3(::System::Reflection::ParameterInfo* element, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Attribute*(*)(::System::Reflection::ParameterInfo*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTE_3_OFFSET))(element, attributeType, inherit);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes(::System::Reflection::Assembly* element, ::System::Type* attributeType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_OFFSET))(element, attributeType);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* element, ::System::Type* attributeType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEEXTENSIONS_GETCUSTOMATTRIBUTES_1_OFFSET))(element, attributeType);
		}
	};
}
