#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x1AC54D30)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELDS_OFFSET UNITYSDK_OFFSET(0x1AC54E70)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELD_OFFSET UNITYSDK_OFFSET(0x1AC54F90)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET UNITYSDK_OFFSET(0x1AC54E30)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHOD_OFFSET UNITYSDK_OFFSET(0x1AC54F50)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1AC54DF0)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AC54EB0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeReflectionExtensions_TypeDefinitionIndex = 523;

	class RuntimeReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Void CheckAndThrow(::System::Type* t)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_CHECKANDTHROW_OFFSET))(t);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetRuntimeProperties(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetRuntimeMethods(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetRuntimeFields(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELDS_OFFSET))(type);
		}

		static ::System::Reflection::PropertyInfo* GetRuntimeProperty(::System::Type* type, ::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTY_OFFSET))(type, name);
		}

		static ::System::Reflection::MethodInfo* GetRuntimeMethod(::System::Type* type, ::System::String* name, ::Il2CppArray<::System::Type*>* parameters)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHOD_OFFSET))(type, name, parameters);
		}

		static ::System::Reflection::FieldInfo* GetRuntimeField(::System::Type* type, ::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELD_OFFSET))(type, name);
		}
	};
}
