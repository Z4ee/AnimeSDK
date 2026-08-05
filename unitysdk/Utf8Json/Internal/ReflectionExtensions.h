#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLFIELDSCORE_OFFSET UNITYSDK_OFFSET(0x1F34E090)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1F34DF70)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLPROPERTIESCORE_OFFSET UNITYSDK_OFFSET(0x1F34DF10)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F34DDF0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1F34DCE0)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1F34DC40)
#define UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F34DCB0)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 95172;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNullable(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISNULLABLE_OFFSET))(type);
		}

		static ::System::Boolean IsPublic(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISPUBLIC_OFFSET))(type);
		}

		static ::System::Boolean IsAnonymous(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_ISANONYMOUS_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetAllProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLPROPERTIES_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetAllPropertiesCore(::System::Type* type, ::System::Collections::Generic::HashSet_1<::System::String*>* nameCheck)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLPROPERTIESCORE_OFFSET))(type, nameCheck);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLFIELDS_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFieldsCore(::System::Type* type, ::System::Collections::Generic::HashSet_1<::System::String*>* nameCheck)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_REFLECTIONEXTENSIONS_GETALLFIELDSCORE_OFFSET))(type, nameCheck);
		}
	};
}
